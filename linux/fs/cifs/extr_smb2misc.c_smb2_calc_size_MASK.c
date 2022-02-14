
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_sync_hdr {int Command; int StructureSize; } ;
struct smb2_sync_pdu {int StructureSize2; struct smb2_sync_hdr sync_hdr; } ;
struct TCP_Server_Info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int* VAR_2 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int*,int*,struct smb2_sync_hdr*) ;

unsigned int
FUNC_3(void *VAR_3, struct TCP_Server_Info *VAR_4)
{
 struct smb2_sync_pdu *VAR_5 = (struct smb2_sync_pdu *)VAR_3;
 struct smb2_sync_hdr *VAR_6 = &VAR_5->sync_hdr;
 int VAR_7;
 int VAR_8;

 int VAR_9 = FUNC_1(VAR_6->StructureSize);





 VAR_9 += FUNC_1(VAR_5->StructureSize2);

 if (VAR_2[FUNC_1(VAR_6->Command)] == 0)
  goto calc_size_exit;

 FUNC_2(&VAR_7, &VAR_8, VAR_6);
 FUNC_0(VAR_0, "SMB2 data length %d offset %d\n", VAR_8, VAR_7);

 if (VAR_8 > 0) {






  if (VAR_7 + 1 < VAR_9) {
   FUNC_0(VAR_1, "data area offset %d overlaps SMB2 header %d\n",
     VAR_7 + 1, VAR_9);
   VAR_8 = 0;
  } else {
   VAR_9 = VAR_7 + VAR_8;
  }
 }
calc_size_exit:
 FUNC_0(VAR_0, "SMB2 len %d\n", VAR_9);
 return VAR_9;
}
