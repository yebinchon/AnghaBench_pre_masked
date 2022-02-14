
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
struct smb_rqst {unsigned int rq_nvec; struct kvec* rq_iov; } ;
struct TYPE_6__ {int Flags; } ;
struct smb2_create_req {scalar_t__ RequestedOplockLevel; void* NameLength; TYPE_2__ sync_hdr; void* NameOffset; void* CreateOptions; void* CreateDisposition; int ShareAccess; void* FileAttributes; void* DesiredAccess; int ImpersonationLevel; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct create_context {void* Next; } ;
struct cifs_tcon {int share_flags; int snapshot_time; scalar_t__ posix_extensions; int use_persistent; scalar_t__ no_lease; int treeName; TYPE_1__* ses; } ;
struct cifs_open_parms {int create_options; int desired_access; int disposition; int mode; TYPE_3__* fid; } ;
struct TCP_Server_Info {int capabilities; TYPE_4__* vals; int oplocks; } ;
typedef scalar_t__ __u8 ;
typedef int __u32 ;
typedef char __le16 ;
struct TYPE_8__ {int create_lease_size; } ;
struct TYPE_7__ {int lease_key; } ;
struct TYPE_5__ {struct TCP_Server_Info* server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct kvec*,unsigned int*,struct cifs_open_parms*,int ) ;
 int FUNC_2 (struct TCP_Server_Info*,struct kvec*,unsigned int*,int ,scalar_t__*) ;
 int FUNC_3 (struct kvec*,unsigned int*,int ) ;
 int FUNC_4 (struct kvec*,unsigned int*) ;
 int FUNC_5 (struct kvec*,unsigned int*,int ) ;
 int FUNC_6 (char**,int*,int*,int ,char*) ;
 int FUNC_7 (int ,char*) ;
 void* FUNC_8 (int) ;
 void* FUNC_9 (int) ;
 char* FUNC_10 (int,int ) ;
 int FUNC_11 (char*,char const*,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int ,struct cifs_tcon*,void**,unsigned int*) ;

int
FUNC_14(struct cifs_tcon *VAR_21, struct smb_rqst *VAR_22, __u8 *VAR_23,
        struct cifs_open_parms *VAR_24, __le16 *VAR_25)
{
 struct TCP_Server_Info *VAR_26 = VAR_21->ses->server;
 struct smb2_create_req *VAR_27;
 unsigned int VAR_28 = 2;
 __u32 VAR_29 = 0;
 int VAR_30;
 int VAR_31;
 unsigned int VAR_32;
 struct kvec *VAR_33 = VAR_22->rq_iov;
 __le16 *VAR_34;
 int VAR_35;

 VAR_35 = FUNC_13(VAR_15, VAR_21, (void **) &VAR_27, &VAR_32);
 if (VAR_35)
  return VAR_35;

 VAR_33[0].iov_base = (char *)VAR_27;

 VAR_33[0].iov_len = VAR_32 - 1;

 if (VAR_24->create_options & VAR_5)
  VAR_29 |= VAR_1;
 if (VAR_24->create_options & VAR_6)
  VAR_29 |= VAR_2;

 VAR_27->ImpersonationLevel = VAR_12;
 VAR_27->DesiredAccess = FUNC_9(VAR_24->desired_access);

 VAR_27->FileAttributes = FUNC_9(VAR_29);
 VAR_27->ShareAccess = VAR_9;

 VAR_27->CreateDisposition = FUNC_9(VAR_24->disposition);
 VAR_27->CreateOptions = FUNC_9(VAR_24->create_options & VAR_4);
 VAR_27->NameOffset = FUNC_8(sizeof(struct smb2_create_req));
 if (VAR_21->share_flags & VAR_14) {
  int VAR_36;

  VAR_27->sync_hdr.Flags |= VAR_16;
  VAR_35 = FUNC_6(&VAR_34, &VAR_30,
       &VAR_36,
       VAR_21->treeName, VAR_25);
  if (VAR_35)
   return VAR_35;
  VAR_27->NameLength = FUNC_8(VAR_36 * 2);
  VAR_31 = VAR_30;
  VAR_25 = VAR_34;
 } else {
  VAR_31 = (2 * FUNC_0((wchar_t *)VAR_25, VAR_13)) + 2;

  VAR_27->NameLength = FUNC_8(VAR_31 - 2);
  VAR_30 = VAR_31;
  if (VAR_30 % 8 != 0)
   VAR_30 = FUNC_12(VAR_30, 8);
  VAR_34 = FUNC_10(VAR_30, VAR_11);
  if (!VAR_34)
   return -VAR_7;
  FUNC_11((char *)VAR_34, (const char *)VAR_25,
         VAR_31);
  VAR_31 = VAR_30;
  VAR_25 = VAR_34;
 }

 VAR_33[1].iov_len = VAR_31;
 VAR_33[1].iov_base = VAR_25;

 if ((!VAR_26->oplocks) || (VAR_21->no_lease))
  *VAR_23 = VAR_20;

 if (!(VAR_26->capabilities & VAR_18) ||
     *VAR_23 == VAR_20)
  VAR_27->RequestedOplockLevel = *VAR_23;
 else if (!(VAR_26->capabilities & VAR_17) &&
    (VAR_24->create_options & VAR_3))
  VAR_27->RequestedOplockLevel = *VAR_23;
 else {
  VAR_35 = FUNC_2(VAR_26, VAR_33, &VAR_28,
           VAR_24->fid->lease_key, VAR_23);
  if (VAR_35)
   return VAR_35;
 }

 if (*VAR_23 == VAR_19) {

  if (VAR_26->capabilities & VAR_18) {
   struct create_context *VAR_37 =
       (struct create_context *)VAR_33[VAR_28-1].iov_base;
   VAR_37->Next =
    FUNC_9(VAR_26->vals->create_lease_size);
  }

  VAR_35 = FUNC_1(VAR_33, &VAR_28, VAR_24,
     VAR_21->use_persistent);
  if (VAR_35)
   return VAR_35;
 }

 if (VAR_21->posix_extensions) {
  if (VAR_28 > 2) {
   struct create_context *VAR_38 =
       (struct create_context *)VAR_33[VAR_28-1].iov_base;
   VAR_38->Next =
    FUNC_9(VAR_33[VAR_28-1].iov_len);
  }

  VAR_35 = FUNC_3(VAR_33, &VAR_28, VAR_24->mode);
  if (VAR_35)
   return VAR_35;
 }

 if (VAR_21->snapshot_time) {
  FUNC_7(VAR_10, "adding snapshot context\n");
  if (VAR_28 > 2) {
   struct create_context *VAR_39 =
       (struct create_context *)VAR_33[VAR_28-1].iov_base;
   VAR_39->Next =
    FUNC_9(VAR_33[VAR_28-1].iov_len);
  }

  VAR_35 = FUNC_5(VAR_33, &VAR_28, VAR_21->snapshot_time);
  if (VAR_35)
   return VAR_35;
 }

 if ((VAR_24->disposition == VAR_8) &&
     (VAR_24->mode != VAR_0)) {
  if (VAR_28 > 2) {
   struct create_context *VAR_40 =
       (struct create_context *)VAR_33[VAR_28-1].iov_base;
   VAR_40->Next =
    FUNC_9(VAR_33[VAR_28-1].iov_len);
  }


  if (VAR_35)
   return VAR_35;
 }

 if (VAR_28 > 2) {
  struct create_context *VAR_41 =
   (struct create_context *)VAR_33[VAR_28-1].iov_base;
  VAR_41->Next = FUNC_9(VAR_33[VAR_28-1].iov_len);
 }
 FUNC_4(VAR_33, &VAR_28);

 VAR_22->rq_nvec = VAR_28;
 return 0;
}
