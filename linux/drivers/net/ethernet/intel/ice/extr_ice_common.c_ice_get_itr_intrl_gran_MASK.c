
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ice_hw {int intrl_gran; int itr_gran; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (struct ice_hw*,int ) ;

__attribute__((used)) static void FUNC_1(struct ice_hw *VAR_7)
{
 u8 VAR_8 = (FUNC_0(VAR_7, VAR_0) &
    VAR_1) >>
   VAR_2;

 switch (VAR_8) {
 case 130:
 case 131:
 case 128:
  VAR_7->itr_gran = VAR_5;
  VAR_7->intrl_gran = VAR_3;
  break;
 case 129:
  VAR_7->itr_gran = VAR_6;
  VAR_7->intrl_gran = VAR_4;
  break;
 }
}
