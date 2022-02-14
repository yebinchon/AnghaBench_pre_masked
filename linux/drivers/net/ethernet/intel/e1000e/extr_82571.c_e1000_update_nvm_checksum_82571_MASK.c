
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ nvm; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_10)
{
 u32 VAR_11;
 s32 VAR_12;
 u16 VAR_13;

 VAR_12 = FUNC_0(VAR_10);
 if (VAR_12)
  return VAR_12;




 if (VAR_10->nvm.type != VAR_9)
  return 0;


 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  FUNC_4(1000, 2000);
  if (!(FUNC_2(VAR_6) & VAR_0))
   break;
 }

 if (VAR_13 == VAR_2)
  return -VAR_1;


 if ((FUNC_2(VAR_7) & 0xFF00) == VAR_5) {



  FUNC_3(VAR_8, VAR_4);
  FUNC_1();
  FUNC_3(VAR_8, VAR_3);
 }


 VAR_11 = FUNC_2(VAR_6) | VAR_0;
 FUNC_3(VAR_6, VAR_11);

 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  FUNC_4(1000, 2000);
  if (!(FUNC_2(VAR_6) & VAR_0))
   break;
 }

 if (VAR_13 == VAR_2)
  return -VAR_1;

 return 0;
}
