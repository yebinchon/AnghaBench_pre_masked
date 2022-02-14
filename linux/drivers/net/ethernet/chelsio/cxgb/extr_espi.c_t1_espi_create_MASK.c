
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peespi {int * adapter; } ;
typedef int adapter_t ;


 int VAR_0 ;
 struct peespi* FUNC_0 (int,int ) ;

struct peespi *FUNC_1(adapter_t *VAR_1)
{
 struct peespi *VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);

 if (VAR_2)
  VAR_2->adapter = VAR_1;
 return VAR_2;
}
