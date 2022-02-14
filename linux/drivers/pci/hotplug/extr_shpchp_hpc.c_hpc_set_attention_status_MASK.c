
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct slot {int hp_slot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct slot*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct slot *VAR_3, u8 VAR_4)
{
 u8 VAR_5 = 0;

 switch (VAR_4) {
  case 0:
   VAR_5 = VAR_1;
   break;
  case 1:
   VAR_5 = VAR_2;
   break;
  case 2:
   VAR_5 = VAR_0;
   break;
  default:
   return -1;
 }

 return FUNC_0(VAR_3, VAR_3->hp_slot, VAR_5);
}
