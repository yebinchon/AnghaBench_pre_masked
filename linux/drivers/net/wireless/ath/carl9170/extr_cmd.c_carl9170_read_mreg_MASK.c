
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ar9170 {TYPE_1__* hw; } ;
typedef int __le32 ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar9170*,int ,int,int *,int,int *) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;

int FUNC_5(struct ar9170 *VAR_1, const int VAR_2,
         const u32 *VAR_3, u32 *VAR_4)
{
 int VAR_5, VAR_6;
 __le32 *VAR_7, *VAR_8;


 VAR_7 = (__le32 *)VAR_4;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_7[VAR_5] = FUNC_1(VAR_3[VAR_5]);


 VAR_8 = (__le32 *)VAR_4;

 VAR_6 = FUNC_0(VAR_1, VAR_0,
    4 * VAR_2, (u8 *)VAR_7,
    4 * VAR_2, (u8 *)VAR_8);
 if (VAR_6) {
  if (FUNC_3()) {
   FUNC_4(VAR_1->hw->wiphy, "reading regs failed (%d)\n",
      VAR_6);
  }
  return VAR_6;
 }


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_4[VAR_5] = FUNC_2(VAR_8[VAR_5]);

 return 0;
}
