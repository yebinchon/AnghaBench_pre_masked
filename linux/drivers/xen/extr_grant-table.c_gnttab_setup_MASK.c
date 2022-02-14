
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * addr; } ;
struct TYPE_3__ {int * vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 () ;
 TYPE_2__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 unsigned int VAR_6;

 VAR_6 = FUNC_1();
 if (VAR_6 < VAR_4)
  return -VAR_1;

 if (FUNC_3(VAR_2) && VAR_3.addr == ((void*)0)) {
  VAR_3.addr = VAR_5.vaddr;
  if (VAR_3.addr == ((void*)0)) {
   FUNC_2("gnttab share frames is not mapped!\n");
   return -VAR_0;
  }
 }
 return FUNC_0(0, VAR_4 - 1);
}
