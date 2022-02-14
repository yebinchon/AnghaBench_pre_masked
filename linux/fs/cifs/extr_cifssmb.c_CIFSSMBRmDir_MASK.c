
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct smb_hdr {int dummy; } ;
struct TYPE_8__ {int num_rmdirs; } ;
struct TYPE_9__ {TYPE_2__ cifs_stats; } ;
struct cifs_tcon {TYPE_3__ stats; int ses; } ;
struct cifs_sb_info {int local_nls; } ;
typedef int __le16 ;
struct TYPE_7__ {int Flags2; } ;
struct TYPE_10__ {int BufferFormat; int ByteCount; scalar_t__ DirName; TYPE_1__ hdr; } ;
typedef int DELETE_DIRECTORY_RSP ;
typedef TYPE_4__ DELETE_DIRECTORY_REQ ;


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
FUNC_10(const unsigned int VAR_5, struct cifs_tcon *VAR_6, const char *VAR_7,
      struct cifs_sb_info *VAR_8)
{
 DELETE_DIRECTORY_REQ *VAR_9 = ((void*)0);
 DELETE_DIRECTORY_RSP *VAR_10 = ((void*)0);
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13;
 int VAR_14 = FUNC_4(VAR_8);

 FUNC_3(VAR_1, "In CIFSSMBRmDir\n");
RmDirRetry:
 VAR_11 = FUNC_9(VAR_4, 0, VAR_6, (void **) &VAR_9,
        (void **) &VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_9->hdr.Flags2 & VAR_3) {
  VAR_13 = FUNC_1((__le16 *) VAR_9->DirName, VAR_7,
           VAR_2, VAR_8->local_nls,
           VAR_14);
  VAR_13++;
  VAR_13 *= 2;
 } else {
  VAR_13 = FUNC_6(VAR_9->DirName, VAR_7);
 }

 VAR_9->BufferFormat = 0x04;
 FUNC_8(VAR_9, VAR_13 + 1);
 VAR_9->ByteCount = FUNC_7(VAR_13 + 1);
 VAR_11 = FUNC_0(VAR_5, VAR_6->ses, (struct smb_hdr *) VAR_9,
    (struct smb_hdr *) VAR_10, &VAR_12, 0);
 FUNC_5(&VAR_6->stats.cifs_stats.num_rmdirs);
 if (VAR_11)
  FUNC_3(VAR_1, "Error in RMDir = %d\n", VAR_11);

 FUNC_2(VAR_9);
 if (VAR_11 == -VAR_0)
  goto RmDirRetry;
 return VAR_11;
}
