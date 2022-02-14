
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {int perm_hwaddr; TYPE_1__* dev; } ;
typedef int ssize_t ;
struct TYPE_2__ {int addr_len; } ;


 int FUNC_0 (char*,char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct slave *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1, "%*phC\n",
         VAR_0->dev->addr_len,
         VAR_0->perm_hwaddr);
}
