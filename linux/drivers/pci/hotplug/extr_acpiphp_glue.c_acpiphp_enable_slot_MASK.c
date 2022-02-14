
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpiphp_slot {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct acpiphp_slot*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(struct acpiphp_slot *VAR_3)
{
 FUNC_1();

 if (VAR_3->flags & VAR_2) {
  FUNC_2();
  return -VAR_0;
 }


 if (!(VAR_3->flags & VAR_1))
  FUNC_0(VAR_3, 0);

 FUNC_2();
 return 0;
}
