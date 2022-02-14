
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvobj_priv {struct adapter* padapters; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct adapter) ;
 size_t VAR_1 ;

struct adapter *FUNC_1(struct dvobj_priv *VAR_2)
{
 if (FUNC_0(VAR_2->padapters[VAR_1]) != VAR_0)
  return ((void*)0);

 return VAR_2->padapters;
}
