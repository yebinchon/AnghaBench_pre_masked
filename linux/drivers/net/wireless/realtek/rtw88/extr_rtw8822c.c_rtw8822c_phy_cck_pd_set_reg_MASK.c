
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct rtw_dev {int dummy; } ;
typedef scalar_t__ s8 ;
struct TYPE_2__ {int mask_cs; int reg_cs; int mask_pd; int reg_pd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__** VAR_6 ;
 scalar_t__ FUNC_1 (struct rtw_dev*,int ,int ) ;
 int FUNC_2 (struct rtw_dev*,int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct rtw_dev *VAR_7,
       s8 VAR_8, s8 VAR_9, u8 VAR_10, u8 VAR_11)
{
 u32 VAR_12, VAR_13;

 if (FUNC_0(VAR_10 > VAR_4 || VAR_11 >= VAR_5))
  return;

 VAR_12 = FUNC_1(VAR_7,
        VAR_6[VAR_10][VAR_11].reg_pd,
        VAR_6[VAR_10][VAR_11].mask_pd);
 VAR_13 = FUNC_1(VAR_7,
        VAR_6[VAR_10][VAR_11].reg_cs,
        VAR_6[VAR_10][VAR_11].mask_cs);
 VAR_12 += VAR_8;
 VAR_13 += VAR_9;
 if (VAR_12 > VAR_3)
  VAR_12 = VAR_3;
 if (VAR_13 == VAR_0 || VAR_13 == VAR_1)
  VAR_13++;
 else if (VAR_13 > VAR_2)
  VAR_13 = VAR_2;
 FUNC_2(VAR_7,
    VAR_6[VAR_10][VAR_11].reg_pd,
    VAR_6[VAR_10][VAR_11].mask_pd,
    VAR_12);
 FUNC_2(VAR_7,
    VAR_6[VAR_10][VAR_11].reg_cs,
    VAR_6[VAR_10][VAR_11].mask_cs,
    VAR_13);
}
