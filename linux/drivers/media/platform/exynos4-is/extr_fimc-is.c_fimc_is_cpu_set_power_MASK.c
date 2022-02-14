
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int paddr; } ;
struct fimc_is {TYPE_1__ memory; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct fimc_is*,int ) ;
 int FUNC_1 (struct fimc_is*,int ) ;
 int FUNC_2 (int,struct fimc_is*,int ) ;
 int FUNC_3 (int) ;

int FUNC_4(struct fimc_is *VAR_7, int VAR_8)
{
 unsigned int VAR_9 = VAR_1;

 if (VAR_8) {

  FUNC_0(0, VAR_7, VAR_6);


  FUNC_0(VAR_7->memory.paddr, VAR_7, VAR_2);


  FUNC_2(0x18000, VAR_7, VAR_4);
  FUNC_2(0x1, VAR_7, VAR_3);
 } else {

  FUNC_2(0x10000, VAR_7, VAR_4);
  FUNC_2(0x0, VAR_7, VAR_3);

  while (FUNC_1(VAR_7, VAR_5) & 1) {
   if (VAR_9 == 0)
    return -VAR_0;
   VAR_9--;
   FUNC_3(1);
  }
 }

 return 0;
}
