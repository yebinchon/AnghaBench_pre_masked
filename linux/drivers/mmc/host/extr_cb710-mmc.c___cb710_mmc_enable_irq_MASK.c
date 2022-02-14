
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb710_slot {int dummy; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_0 (struct cb710_slot*,int ) ;
 int FUNC_1 (struct cb710_slot*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_2(struct cb710_slot *VAR_2,
 unsigned short VAR_3, unsigned short VAR_4)
{


 VAR_4 |= VAR_0;






 VAR_3 = (FUNC_0(VAR_2, VAR_1)
  & ~VAR_4) | VAR_3;

 if (VAR_3)
  VAR_3 |= VAR_0;

 FUNC_1(VAR_2, VAR_1, VAR_3);
}
