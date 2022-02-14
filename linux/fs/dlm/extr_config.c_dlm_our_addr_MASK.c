
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct TYPE_2__ {int addr_count; int * addr; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct sockaddr_storage*,int ,int) ;

int FUNC_1(struct sockaddr_storage *VAR_1, int VAR_2)
{
 if (!VAR_0)
  return -1;
 if (VAR_2 + 1 > VAR_0->addr_count)
  return -1;
 FUNC_0(VAR_1, VAR_0->addr[VAR_2], sizeof(*VAR_1));
 return 0;
}
