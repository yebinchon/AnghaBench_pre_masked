
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cio2_queue {int fbpt_bus_addr; int fbpt; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct cio2_queue *VAR_1, struct device *VAR_2)
{
 FUNC_0(VAR_2, VAR_0, VAR_1->fbpt, VAR_1->fbpt_bus_addr);
}
