
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct device {int dummy; } ;
struct altera_pcie {TYPE_2__* pcie_data; int root_bus_nr; TYPE_3__* pdev; } ;
struct TYPE_6__ {struct device dev; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ (* get_link_status ) (struct altera_pcie*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct altera_pcie*,int ,int ,int ,int*) ;
 int FUNC_1 (struct device*,char*) ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_2 (struct altera_pcie*) ;
 scalar_t__ FUNC_3 (unsigned long,scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct altera_pcie *VAR_6)
{
 struct device *VAR_7 = &VAR_6->pdev->dev;
 u16 VAR_8;
 unsigned long VAR_9;


 VAR_9 = VAR_5;
 for (;;) {
  FUNC_0(VAR_6, VAR_6->root_bus_nr, VAR_4,
         VAR_2, &VAR_8);
  if (!(VAR_8 & VAR_3))
   break;

  if (FUNC_3(VAR_5, VAR_9 + VAR_0)) {
   FUNC_1(VAR_7, "link retrain timeout\n");
   break;
  }
  FUNC_4(100);
 }


 VAR_9 = VAR_5;
 for (;;) {
  if (VAR_6->pcie_data->ops->get_link_status(VAR_6))
   break;

  if (FUNC_3(VAR_5, VAR_9 + VAR_1)) {
   FUNC_1(VAR_7, "link up timeout\n");
   break;
  }
  FUNC_4(100);
 }
}
