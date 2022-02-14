
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef unsigned int u32 ;
struct ucc_geth_private {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ucc_geth_private *VAR_4,
        u32 *VAR_5,
        u8 VAR_6,
        unsigned int VAR_7,
        int VAR_8)
{
 u32 VAR_9;
 u8 VAR_10;
 int VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  u32 VAR_12 = *VAR_5;



  if ((VAR_12 & VAR_1) == VAR_7) {
   VAR_11 =
       (u32) (VAR_12 & VAR_2) >>
       VAR_3;
   FUNC_1((u8) VAR_11);
   if (!((VAR_10 == 0) && VAR_8)) {

    VAR_9 =
        (VAR_12 & VAR_0);
    FUNC_0(VAR_9);
   }
   *VAR_5++ = 0;
  }
 }

 return 0;
}
