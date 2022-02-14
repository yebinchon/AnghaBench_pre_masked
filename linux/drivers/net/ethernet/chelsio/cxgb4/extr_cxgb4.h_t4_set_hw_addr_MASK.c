
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct adapter {TYPE_1__** port; } ;
struct TYPE_2__ {int perm_addr; int dev_addr; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void FUNC_1(struct adapter *VAR_0, int VAR_1,
      u8 VAR_2[])
{
 FUNC_0(VAR_0->port[VAR_1]->dev_addr, VAR_2);
 FUNC_0(VAR_0->port[VAR_1]->perm_addr, VAR_2);
}
