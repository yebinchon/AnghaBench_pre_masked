
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct smb_hdr {int dummy; } ;
struct TYPE_8__ {int num_hardlinks; } ;
struct TYPE_9__ {TYPE_2__ cifs_stats; } ;
struct cifs_tcon {TYPE_3__ stats; int ses; } ;
struct cifs_sb_info {int local_nls; } ;
typedef int __u16 ;
typedef int __le16 ;
struct TYPE_7__ {int Flags2; } ;
struct TYPE_10__ {int BufferFormat; int* OldFileName; void* ByteCount; TYPE_1__ hdr; scalar_t__ ClusterCount; void* Flags; void* SearchAttributes; } ;
typedef int RENAME_RSP ;
typedef TYPE_4__ NT_RENAME_REQ ;


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
FUNC_10(const unsigned int VAR_10, struct cifs_tcon *VAR_11,
     const char *VAR_12, const char *VAR_13,
     struct cifs_sb_info *VAR_14)
{
 int VAR_15 = 0;
 NT_RENAME_REQ *VAR_16 = ((void*)0);
 RENAME_RSP *VAR_17 = ((void*)0);
 int VAR_18;
 int VAR_19, VAR_20;
 __u16 VAR_21;
 int VAR_22 = FUNC_4(VAR_14);

 FUNC_3(VAR_6, "In CIFSCreateHardLink\n");
winCreateHardLinkRetry:

 VAR_15 = FUNC_9(VAR_9, 4, VAR_11, (void **) &VAR_16,
        (void **) &VAR_17);
 if (VAR_15)
  return VAR_15;

 VAR_16->SearchAttributes =
     FUNC_7(VAR_2 | VAR_1 | VAR_3 |
   VAR_0);
 VAR_16->Flags = FUNC_7(VAR_4);
 VAR_16->ClusterCount = 0;

 VAR_16->BufferFormat = 0x04;

 if (VAR_16->hdr.Flags2 & VAR_8) {
  VAR_19 =
      FUNC_1((__le16 *) VAR_16->OldFileName, VAR_12,
           VAR_7, VAR_14->local_nls, VAR_22);
  VAR_19++;
  VAR_19 *= 2;


  VAR_16->OldFileName[VAR_19] = 0x04;
  VAR_16->OldFileName[VAR_19 + 1] = 0x00;
  VAR_20 =
      FUNC_1((__le16 *)&VAR_16->OldFileName[VAR_19+2],
           VAR_13, VAR_7, VAR_14->local_nls,
           VAR_22);
  VAR_20 += 1 + 1 ;
  VAR_20 *= 2;
 } else {
  VAR_19 = FUNC_6(VAR_16->OldFileName, VAR_12);
  VAR_16->OldFileName[VAR_19] = 0x04;
  VAR_20 = FUNC_6(VAR_16->OldFileName+VAR_19+1, VAR_13);
  VAR_20++;
 }

 VAR_21 = 1 + VAR_19 + VAR_20;
 FUNC_8(VAR_16, VAR_21);
 VAR_16->ByteCount = FUNC_7(VAR_21);

 VAR_15 = FUNC_0(VAR_10, VAR_11->ses, (struct smb_hdr *) VAR_16,
    (struct smb_hdr *) VAR_17, &VAR_18, 0);
 FUNC_5(&VAR_11->stats.cifs_stats.num_hardlinks);
 if (VAR_15)
  FUNC_3(VAR_6, "Send error in hard link (NT rename) = %d\n", VAR_15);

 FUNC_2(VAR_16);
 if (VAR_15 == -VAR_5)
  goto winCreateHardLinkRetry;

 return VAR_15;
}
