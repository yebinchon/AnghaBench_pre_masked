
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mbo {int bus_address; int virt_address; TYPE_1__* ifp; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* driver_dev; } ;


 int FUNC_0 (struct device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mbo *VAR_0, u32 VAR_1)
{
 struct device *VAR_2 = VAR_0->ifp->driver_dev;

 FUNC_0(VAR_2, VAR_1, VAR_0->virt_address, VAR_0->bus_address);
}
