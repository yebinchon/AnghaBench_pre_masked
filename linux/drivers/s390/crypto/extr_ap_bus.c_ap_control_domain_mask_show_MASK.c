
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bus_type {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int* adm; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int ,char*,...) ;

__attribute__((used)) static ssize_t FUNC_1(struct bus_type *VAR_2, char *VAR_3)
{
 if (!VAR_1)
  return FUNC_0(VAR_3, VAR_0, "not supported\n");

 return FUNC_0(VAR_3, VAR_0,
   "0x%08x%08x%08x%08x%08x%08x%08x%08x\n",
   VAR_1->adm[0], VAR_1->adm[1],
   VAR_1->adm[2], VAR_1->adm[3],
   VAR_1->adm[4], VAR_1->adm[5],
   VAR_1->adm[6], VAR_1->adm[7]);
}
