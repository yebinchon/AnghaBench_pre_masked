
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int dummy; } ;
struct idmap {TYPE_1__* idmap_upcall_data; } ;
struct TYPE_2__ {struct key* authkey; } ;


 int FUNC_0 (struct key*,int) ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct idmap *VAR_0, int VAR_1)
{
 struct key *VAR_2 = VAR_0->idmap_upcall_data->authkey;

 FUNC_2(VAR_0->idmap_upcall_data);
 VAR_0->idmap_upcall_data = ((void*)0);
 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_2);
}
