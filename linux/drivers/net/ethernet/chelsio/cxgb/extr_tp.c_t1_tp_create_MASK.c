
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_params {int dummy; } ;
struct petp {int * adapter; } ;
typedef int adapter_t ;


 int VAR_0 ;
 struct petp* FUNC_0 (int,int ) ;

struct petp *FUNC_1(adapter_t *VAR_1, struct tp_params *VAR_2)
{
 struct petp *VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);

 if (!VAR_3)
  return ((void*)0);

 VAR_3->adapter = VAR_1;

 return VAR_3;
}
