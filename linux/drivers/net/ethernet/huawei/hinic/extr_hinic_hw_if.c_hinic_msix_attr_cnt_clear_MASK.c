
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hinic_hwif {int attr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct hinic_hwif*,int ,int ) ;

int FUNC_4(struct hinic_hwif *VAR_2, u16 VAR_3)
{
 u32 VAR_4, VAR_5;

 if (!FUNC_2(&VAR_2->attr, VAR_3))
  return -VAR_0;

 VAR_4 = FUNC_1(1, VAR_1);
 VAR_5 = FUNC_0(VAR_3);

 FUNC_3(VAR_2, VAR_5, VAR_4);
 return 0;
}
