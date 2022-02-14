
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ixgb_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgb_hw*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct ixgb_hw*,int ,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(struct ixgb_hw *VAR_8)
{
 bool VAR_9 = 0;
 u8 VAR_10 = VAR_5;
 u8 VAR_11 = VAR_5;

 do {

  FUNC_1(VAR_8, VAR_0,
          FUNC_0(VAR_8, VAR_0) | VAR_1);


  do {
   FUNC_2(VAR_2);
   VAR_9 =
       ((FUNC_0(VAR_8, VAR_6) & VAR_3)
        && (FUNC_0(VAR_8, VAR_7) &
     VAR_4)) ? 1 : 0;
  } while (!VAR_9 && --VAR_10);

 } while (!VAR_9 && --VAR_11);

 return VAR_9;
}
