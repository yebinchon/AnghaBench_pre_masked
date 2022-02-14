
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct smb2_file_all_info {scalar_t__ IndexNumber; } ;
struct network_resiliency_req {scalar_t__ Reserved; int Timeout; } ;
struct cifs_open_parms {TYPE_1__* tcon; int desired_access; int cifs_sb; int path; struct cifs_fid* fid; } ;
struct cifs_fid {int volatile_fid; int persistent_fid; } ;
typedef int nr_ioctl_req ;
typedef int __u8 ;
typedef int __u32 ;
typedef struct smb2_file_all_info __le16 ;
struct TYPE_3__ {int use_resilient; int handle_timeout; } ;
typedef int FILE_ALL_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned int const,TYPE_1__*,int ,int ,scalar_t__*) ;
 int FUNC_1 (unsigned int const,TYPE_1__*,int ,int ,int ,int,char*,int,int ,int *,int *) ;
 int FUNC_2 (unsigned int const,struct cifs_open_parms*,struct smb2_file_all_info*,int *,struct smb2_file_all_info*,int *,int *) ;
 int VAR_9 ;
 struct smb2_file_all_info* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct smb2_file_all_info*) ;
 struct smb2_file_all_info* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,struct smb2_file_all_info*) ;

int
FUNC_9(const unsigned int VAR_10, struct cifs_open_parms *VAR_11,
        __u32 *VAR_12, FILE_ALL_INFO *VAR_13)
{
 int VAR_14;
 __le16 *VAR_15;
 struct smb2_file_all_info *VAR_16 = ((void*)0);
 __u8 VAR_17;
 struct cifs_fid *VAR_18 = VAR_11->fid;
 struct network_resiliency_req VAR_19;

 VAR_15 = FUNC_3(VAR_11->path, VAR_11->cifs_sb);
 if (VAR_15 == ((void*)0)) {
  VAR_14 = -VAR_1;
  goto out;
 }

 VAR_16 = FUNC_7(sizeof(struct smb2_file_all_info) + VAR_7 * 2,
       VAR_6);
 if (VAR_16 == ((void*)0)) {
  VAR_14 = -VAR_1;
  goto out;
 }

 VAR_11->desired_access |= VAR_3;
 VAR_17 = VAR_8;

 VAR_14 = FUNC_2(VAR_10, VAR_11, VAR_15, &VAR_17, VAR_16, ((void*)0),
         ((void*)0));
 if (VAR_14)
  goto out;


  if (VAR_11->tcon->use_resilient) {

  VAR_19.Timeout =
   FUNC_5(VAR_11->tcon->handle_timeout);
  VAR_19.Reserved = 0;
  VAR_14 = FUNC_1(VAR_10, VAR_11->tcon, VAR_18->persistent_fid,
   VAR_18->volatile_fid, VAR_4,
   1 ,
   (char *)&VAR_19, sizeof(VAR_19),
   VAR_0, ((void*)0), ((void*)0) );
  if (VAR_14 == -VAR_2) {
   FUNC_4(VAR_9,
        "resiliency not supported by server, disabling\n");
   VAR_11->tcon->use_resilient = 0;
  } else if (VAR_14)
   FUNC_4(VAR_5, "error %d setting resiliency\n", VAR_14);

  VAR_14 = 0;
 }

 if (VAR_13) {

  if (VAR_16->IndexNumber == 0) {
   VAR_14 = FUNC_0(VAR_10, VAR_11->tcon,
          VAR_18->persistent_fid,
          VAR_18->volatile_fid,
          &VAR_16->IndexNumber);
   if (VAR_14) {




    VAR_16->IndexNumber = 0;
    VAR_14 = 0;
   }
  }
  FUNC_8(VAR_13, VAR_16);
 }

 *VAR_12 = VAR_17;
out:
 FUNC_6(VAR_16);
 FUNC_6(VAR_15);
 return VAR_14;
}
