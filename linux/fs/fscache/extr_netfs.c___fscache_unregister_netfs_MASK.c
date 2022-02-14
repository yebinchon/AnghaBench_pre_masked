
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_netfs {int name; int primary_index; int version; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (char*,int ) ;

void FUNC_4(struct fscache_netfs *VAR_0)
{
 FUNC_0("{%s.%u}", VAR_0->name, VAR_0->version);

 FUNC_2(VAR_0->primary_index, ((void*)0), 0);
 FUNC_3("Netfs '%s' unregistered from caching\n", VAR_0->name);

 FUNC_1("");
}
