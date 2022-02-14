
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int umode_t ;
struct smb_hdr {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {int num_mkdirs; } ;
struct TYPE_9__ {TYPE_2__ cifs_stats; } ;
struct cifs_tcon {TYPE_3__ stats; int ses; } ;
struct cifs_sb_info {int local_nls; } ;
typedef int __le16 ;
struct TYPE_7__ {int Flags2; } ;
struct TYPE_10__ {int BufferFormat; int ByteCount; scalar_t__ DirName; TYPE_1__ hdr; } ;
typedef int CREATE_DIRECTORY_RSP ;
typedef TYPE_4__ CREATE_DIRECTORY_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int const,int ,struct smb_hdr*,struct smb_hdr*,int*,int ) ;
 int FUNC_1 (int *,char const*,int ,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct cifs_sb_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,char const*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (int ,int ,struct cifs_tcon*,void**,void**) ;

int
FUNC_10(const unsigned int VAR_5, struct inode *VAR_6, umode_t VAR_7,
      struct cifs_tcon *VAR_8, const char *VAR_9,
      struct cifs_sb_info *VAR_10)
{
 int VAR_11 = 0;
 CREATE_DIRECTORY_REQ *VAR_12 = ((void*)0);
 CREATE_DIRECTORY_RSP *VAR_13 = ((void*)0);
 int VAR_14;
 int VAR_15;
 int VAR_16 = FUNC_4(VAR_10);

 FUNC_3(VAR_1, "In CIFSSMBMkDir\n");
MkDirRetry:
 VAR_11 = FUNC_9(VAR_4, 0, VAR_8, (void **) &VAR_12,
        (void **) &VAR_13);
 if (VAR_11)
  return VAR_11;

 if (VAR_12->hdr.Flags2 & VAR_3) {
  VAR_15 = FUNC_1((__le16 *) VAR_12->DirName, VAR_9,
           VAR_2, VAR_10->local_nls,
           VAR_16);
  VAR_15++;
  VAR_15 *= 2;
 } else {
  VAR_15 = FUNC_6(VAR_12->DirName, VAR_9);
 }

 VAR_12->BufferFormat = 0x04;
 FUNC_8(VAR_12, VAR_15 + 1);
 VAR_12->ByteCount = FUNC_7(VAR_15 + 1);
 VAR_11 = FUNC_0(VAR_5, VAR_8->ses, (struct smb_hdr *) VAR_12,
    (struct smb_hdr *) VAR_13, &VAR_14, 0);
 FUNC_5(&VAR_8->stats.cifs_stats.num_mkdirs);
 if (VAR_11)
  FUNC_3(VAR_1, "Error in Mkdir = %d\n", VAR_11);

 FUNC_2(VAR_12);
 if (VAR_11 == -VAR_0)
  goto MkDirRetry;
 return VAR_11;
}
