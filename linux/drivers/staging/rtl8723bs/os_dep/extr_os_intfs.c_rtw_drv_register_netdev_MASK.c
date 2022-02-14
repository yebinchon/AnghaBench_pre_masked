
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvobj_priv {struct adapter* padapters; } ;
struct TYPE_2__ {char* ifname; } ;
struct adapter {TYPE_1__ registrypriv; struct dvobj_priv* dvobj; } ;


 int FUNC_0 (struct adapter*,char*) ;

int FUNC_1(struct adapter *VAR_0)
{
 struct dvobj_priv *VAR_1 = VAR_0->dvobj;
 struct adapter *VAR_2 = VAR_1->padapters;
 char *VAR_3 = VAR_0->registrypriv.ifname;

 return FUNC_0(VAR_2, VAR_3);
}
