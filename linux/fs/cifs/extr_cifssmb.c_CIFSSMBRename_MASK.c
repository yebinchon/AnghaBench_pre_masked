
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct smb_hdr {int dummy; } ;
struct TYPE_8__ {int num_renames; } ;
struct TYPE_9__ {TYPE_2__ cifs_stats; } ;
struct cifs_tcon {TYPE_3__ stats; int ses; } ;
struct cifs_sb_info {int local_nls; } ;
typedef int __u16 ;
typedef int __le16 ;
struct TYPE_7__ {int Flags2; } ;
struct TYPE_10__ {int BufferFormat; int* OldFileName; void* ByteCount; TYPE_1__ hdr; void* SearchAttributes; } ;
typedef int RENAME_RSP ;
typedef TYPE_4__ RENAME_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned int const,int ,struct smb_hdr*,struct smb_hdr*,int*,int ) ;
 int FUNC_1 (int *,char const*,int ,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct cifs_sb_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int*,char const*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (int ,int,struct cifs_tcon*,void**,void**) ;

int
FUNC_10(const unsigned int VAR_9, struct cifs_tcon *VAR_10,
       const char *VAR_11, const char *VAR_12,
       struct cifs_sb_info *VAR_13)
{
 int VAR_14 = 0;
 RENAME_REQ *VAR_15 = ((void*)0);
 RENAME_RSP *VAR_16 = ((void*)0);
 int VAR_17;
 int VAR_18, VAR_19;
 __u16 VAR_20;
 int VAR_21 = FUNC_4(VAR_13);

 FUNC_3(VAR_5, "In CIFSSMBRename\n");
renameRetry:
 VAR_14 = FUNC_9(VAR_8, 1, VAR_10, (void **) &VAR_15,
        (void **) &VAR_16);
 if (VAR_14)
  return VAR_14;

 VAR_15->BufferFormat = 0x04;
 VAR_15->SearchAttributes =
     FUNC_7(VAR_2 | VAR_1 | VAR_3 |
   VAR_0);

 if (VAR_15->hdr.Flags2 & VAR_7) {
  VAR_18 = FUNC_1((__le16 *) VAR_15->OldFileName,
           VAR_11, VAR_6,
           VAR_13->local_nls, VAR_21);
  VAR_18++;
  VAR_18 *= 2;
  VAR_15->OldFileName[VAR_18] = 0x04;

  VAR_15->OldFileName[VAR_18 + 1] = 0x00;
  VAR_19 =
      FUNC_1((__le16 *)&VAR_15->OldFileName[VAR_18+2],
           VAR_12, VAR_6, VAR_13->local_nls,
           VAR_21);
  VAR_19 += 1 + 1 ;
  VAR_19 *= 2;
 } else {
  VAR_18 = FUNC_6(VAR_15->OldFileName, VAR_11);
  VAR_19 = FUNC_6(VAR_15->OldFileName+VAR_18+1, VAR_12);
  VAR_15->OldFileName[VAR_18] = 0x04;
  VAR_19++;
 }

 VAR_20 = 1 + VAR_18 + VAR_19;
 FUNC_8(VAR_15, VAR_20);
 VAR_15->ByteCount = FUNC_7(VAR_20);

 VAR_14 = FUNC_0(VAR_9, VAR_10->ses, (struct smb_hdr *) VAR_15,
    (struct smb_hdr *) VAR_16, &VAR_17, 0);
 FUNC_5(&VAR_10->stats.cifs_stats.num_renames);
 if (VAR_14)
  FUNC_3(VAR_5, "Send error in rename = %d\n", VAR_14);

 FUNC_2(VAR_15);

 if (VAR_14 == -VAR_4)
  goto renameRetry;

 return VAR_14;
}
