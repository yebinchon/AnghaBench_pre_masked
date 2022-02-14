
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ const u32 ;
struct ar9170 {TYPE_1__* hw; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar9170*,int ,int,int *,int,int *) ;
 int FUNC_1 (int ,char*,scalar_t__ const,scalar_t__ const) ;

int FUNC_2(struct ar9170 *VAR_2, const u32 VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0,
    4, (u8 *)&VAR_3,
    4, (u8 *)&VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_3 != VAR_4) {
  FUNC_1(VAR_2->hw->wiphy, "wrong echo %x != %x", VAR_3, VAR_4);
  return -VAR_1;
 }

 return 0;
}
