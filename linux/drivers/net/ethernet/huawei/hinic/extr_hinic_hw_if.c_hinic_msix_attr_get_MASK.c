
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct hinic_hwif {int attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct hinic_hwif*,int ) ;

int FUNC_4(struct hinic_hwif *VAR_6, u16 VAR_7,
   u8 *VAR_8, u8 *VAR_9,
   u8 *VAR_10, u8 *VAR_11,
   u8 *VAR_12)
{
 u32 VAR_13, VAR_14;

 if (!FUNC_2(&VAR_6->attr, VAR_7))
  return -VAR_1;

 VAR_13 = FUNC_0(VAR_7);
 VAR_14 = FUNC_3(VAR_6, VAR_13);

 *VAR_8 = FUNC_1(VAR_14, VAR_4);
 *VAR_9 = FUNC_1(VAR_14, VAR_0);
 *VAR_10 = FUNC_1(VAR_14, VAR_3);
 *VAR_11 = FUNC_1(VAR_14, VAR_2);
 *VAR_12 = FUNC_1(VAR_14, VAR_5);
 return 0;
}
