
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {TYPE_1__* type; int net_dev; } ;
struct TYPE_2__ {int (* remove ) (struct ef4_nic*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_2 (struct ef4_nic*) ;

__attribute__((used)) static void FUNC_3(struct ef4_nic *VAR_1)
{
 FUNC_1(VAR_1, VAR_0, VAR_1->net_dev, "destroying NIC\n");

 FUNC_0(VAR_1);
 VAR_1->type->remove(VAR_1);
}
