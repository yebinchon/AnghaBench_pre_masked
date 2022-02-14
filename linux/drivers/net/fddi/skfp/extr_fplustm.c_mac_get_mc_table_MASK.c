
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {struct s_fpmc* table; } ;
struct TYPE_5__ {TYPE_1__ mc; } ;
struct TYPE_6__ {TYPE_2__ fp; } ;
struct s_smc {TYPE_3__ hw; } ;
struct s_fpmc {int a; int n; } ;
struct fddi_addr {int * a; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static struct s_fpmc* FUNC_2(struct s_smc *VAR_1,
           struct fddi_addr *VAR_2,
           struct fddi_addr *VAR_3,
           int VAR_4, int VAR_5)
{
 struct s_fpmc *VAR_6 ;
 struct s_fpmc *VAR_7 ;
 u_char *VAR_8 ;
 int VAR_9 ;




 *VAR_3 = *VAR_2 ;
 if (VAR_5) {
  VAR_8 = VAR_3->a ;
  for (VAR_9 = 0 ; VAR_9 < 6 ; VAR_9++, VAR_8++)
   *VAR_8 = FUNC_0(*VAR_8);
 }
 VAR_7 = ((void*)0);
 for (VAR_9 = 0, VAR_6 = VAR_1->hw.fp.mc.table ; VAR_9 < VAR_0 ; VAR_9++, VAR_6++){
  if (!VAR_6->n) {
   if (!VAR_4 && !VAR_7)
    VAR_7 = VAR_6 ;
   continue ;
  }
  if (!FUNC_1((char *)&VAR_6->a, (char *)VAR_3))
   continue ;
  return VAR_6;
 }
 return VAR_7;
}
