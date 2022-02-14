
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_3)
{
 bool VAR_4 = 0;
 int VAR_5 = 0;

 while ((VAR_4 = !(FUNC_0(VAR_2) & VAR_1)) &&
        (VAR_5++ < 30))
  FUNC_1(10000, 11000);
 return VAR_4 ? VAR_0 : 0;
}
