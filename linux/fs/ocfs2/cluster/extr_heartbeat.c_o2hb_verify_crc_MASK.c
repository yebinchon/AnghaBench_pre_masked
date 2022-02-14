
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct o2hb_region {int dummy; } ;
struct o2hb_disk_heartbeat_block {int hb_cksum; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct o2hb_region*,struct o2hb_disk_heartbeat_block*) ;

__attribute__((used)) static int FUNC_2(struct o2hb_region *VAR_0,
      struct o2hb_disk_heartbeat_block *VAR_1)
{
 u32 VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_1->hb_cksum);
 VAR_3 = FUNC_1(VAR_0, VAR_1);

 return VAR_2 == VAR_3;
}
