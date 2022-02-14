
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct o2hb_region {int hr_block_bytes; } ;
struct o2hb_disk_heartbeat_block {int hb_cksum; } ;
typedef int __le32 ;


 int FUNC_0 (int ,unsigned char*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct o2hb_region *VAR_0,
         struct o2hb_disk_heartbeat_block *VAR_1)
{
 __le32 VAR_2;
 u32 VAR_3;




 VAR_2 = VAR_1->hb_cksum;
 VAR_1->hb_cksum = 0;

 VAR_3 = FUNC_0(0, (unsigned char *) VAR_1, VAR_0->hr_block_bytes);

 VAR_1->hb_cksum = VAR_2;

 return VAR_3;
}
