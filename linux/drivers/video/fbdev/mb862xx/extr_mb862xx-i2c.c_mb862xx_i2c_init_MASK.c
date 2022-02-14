
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mb862xxfb_par {TYPE_1__* adap; } ;
struct TYPE_3__ {struct mb862xxfb_par* algo_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;

int FUNC_1(struct mb862xxfb_par *VAR_1)
{
 VAR_0.algo_data = VAR_1;
 VAR_1->adap = &VAR_0;

 return FUNC_0(VAR_1->adap);
}
