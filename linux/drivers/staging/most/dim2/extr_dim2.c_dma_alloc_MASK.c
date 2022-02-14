
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mbo {int bus_address; TYPE_1__* ifp; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* driver_dev; } ;


 int VAR_0 ;
 void* FUNC_0 (struct device*,int ,int *,int ) ;

__attribute__((used)) static void *FUNC_1(struct mbo *VAR_1, u32 VAR_2)
{
 struct device *VAR_3 = VAR_1->ifp->driver_dev;

 return FUNC_0(VAR_3, VAR_2, &VAR_1->bus_address, VAR_0);
}
