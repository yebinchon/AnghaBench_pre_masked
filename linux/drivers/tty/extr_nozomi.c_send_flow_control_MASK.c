
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct nozomi {TYPE_2__* port; } ;
struct TYPE_3__ {int port; } ;
struct TYPE_4__ {scalar_t__ update_flow_control; int * ul_addr; TYPE_1__ ctrl_ul; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t,struct nozomi*) ;
 int FUNC_1 (int ,size_t*,int) ;

__attribute__((used)) static int FUNC_2(struct nozomi *VAR_3)
{
 u32 VAR_4, VAR_5 = 0;
 u16 *VAR_6;

 for (VAR_4 = VAR_2; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->port[VAR_4].update_flow_control) {
   if (VAR_5) {

    return 1;
   }
   VAR_3->port[VAR_4].ctrl_ul.port = FUNC_0(VAR_4, VAR_3);
   VAR_6 = (u16 *)&VAR_3->port[VAR_4].ctrl_ul;
   FUNC_1(VAR_3->port[VAR_1].ul_addr[0], (u32 *) VAR_6, 2);

   VAR_3->port[VAR_4].update_flow_control = 0;
   VAR_5 = 1;
  }
 }
 return 0;
}
