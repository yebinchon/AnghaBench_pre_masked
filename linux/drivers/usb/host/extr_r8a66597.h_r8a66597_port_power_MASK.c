
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8a66597 {TYPE_1__* pdata; } ;
struct TYPE_2__ {int (* port_power ) (int,int) ;} ;


 int VAR_0 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct r8a66597*,int ,unsigned long) ;
 int FUNC_2 (struct r8a66597*,int ,unsigned long) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static inline void FUNC_4(struct r8a66597 *VAR_1, int VAR_2,
           int VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_2);

 if (VAR_1->pdata->port_power) {
  VAR_1->pdata->port_power(VAR_2, VAR_3);
 } else {
  if (VAR_3)
   FUNC_2(VAR_1, VAR_0, VAR_4);
  else
   FUNC_1(VAR_1, VAR_0, VAR_4);
 }
}
