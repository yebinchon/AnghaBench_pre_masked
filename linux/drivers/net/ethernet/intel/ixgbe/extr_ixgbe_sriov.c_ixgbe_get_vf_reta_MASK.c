
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct ixgbe_adapter {int* rss_indir_tbl; TYPE_1__* vfinfo; } ;
struct TYPE_2__ {int vf_api; int rss_query_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;



 size_t FUNC_0 (struct ixgbe_adapter*) ;

__attribute__((used)) static int FUNC_1(struct ixgbe_adapter *VAR_2, u32 *VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6;
 u32 *VAR_7 = &VAR_3[1];
 const u8 *VAR_8 = VAR_2->rss_indir_tbl;
 u32 VAR_9 = FUNC_0(VAR_2);


 if (!VAR_2->vfinfo[VAR_4].rss_query_enabled)
  return -VAR_1;


 switch (VAR_2->vfinfo[VAR_4].vf_api) {
 case 128:
 case 129:
 case 130:
  break;
 default:
  return -VAR_0;
 }






 for (VAR_5 = 0; VAR_5 < VAR_9 / 16; VAR_5++) {
  VAR_7[VAR_5] = 0;
  for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
   VAR_7[VAR_5] |= (u32)(VAR_8[16 * VAR_5 + VAR_6] & 0x3) << (2 * VAR_6);
 }

 return 0;
}
