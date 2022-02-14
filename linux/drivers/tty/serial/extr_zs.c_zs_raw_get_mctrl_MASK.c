
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zs_port {TYPE_1__* scc; } ;
struct TYPE_2__ {struct zs_port* zport; } ;


 size_t VAR_0 ;
 unsigned int FUNC_0 (struct zs_port*,struct zs_port*) ;

__attribute__((used)) static unsigned int FUNC_1(struct zs_port *VAR_1)
{
 struct zs_port *VAR_2 = &VAR_1->scc->zport[VAR_0];

 return VAR_1 != VAR_2 ? FUNC_0(VAR_2, VAR_1) : 0;
}
