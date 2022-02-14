
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_sync_pdu {int StructureSize2; int sync_hdr; } ;
struct smb2_sync_hdr {int dummy; } ;
struct cifs_tcon {int dummy; } ;
typedef int __u16 ;
typedef int __le16 ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (int *,int ,struct cifs_tcon*) ;
 int* VAR_0 ;

__attribute__((used)) static void
FUNC_4(__le16 VAR_1, struct cifs_tcon *VAR_2, void *VAR_3,
        unsigned int *VAR_4)
{
 struct smb2_sync_pdu *VAR_5 = (struct smb2_sync_pdu *)VAR_3;

 __u16 VAR_6 = VAR_0[FUNC_1(VAR_1)];





 FUNC_2(VAR_3, 0, 256);

 FUNC_3(&VAR_5->sync_hdr, VAR_1, VAR_2);
 VAR_5->StructureSize2 = FUNC_0(VAR_6);

 *VAR_4 = VAR_6 + sizeof(struct smb2_sync_hdr);
}
