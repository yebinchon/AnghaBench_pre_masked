
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inflight_conn_req; } ;
struct sock_mapping {TYPE_1__ active; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct sock_mapping *VAR_3 = VAR_2;

 if (VAR_3 == ((void*)0))
  return VAR_0;

 FUNC_0(&VAR_3->active.inflight_conn_req);

 return VAR_0;
}
