
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef char u16 ;
struct ixgb_hw {int dummy; } ;
typedef int ixgb_xpak_vendor ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char FUNC_1 (struct ixgb_hw*,scalar_t__,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ixgb_xpak_vendor
FUNC_2(struct ixgb_hw *VAR_5)
{
 u32 VAR_6;
 u16 VAR_7[5];
 ixgb_xpak_vendor VAR_8;

 FUNC_0();




 for (VAR_6 = 0; VAR_6 < 5; VAR_6++) {
  VAR_7[VAR_6] = FUNC_1(VAR_5,
         VAR_2
         + VAR_6, VAR_0,
         VAR_1);
 }


 if (VAR_7[0] == 'I' &&
     VAR_7[1] == 'N' &&
     VAR_7[2] == 'T' &&
     VAR_7[3] == 'E' && VAR_7[4] == 'L') {
  VAR_8 = VAR_4;
 } else {
  VAR_8 = VAR_3;
 }

 return VAR_8;
}
