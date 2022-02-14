
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct altera_pcie {int root_bus_nr; TYPE_2__* pcie_data; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_link_status ) (struct altera_pcie*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct altera_pcie*,int ,int ,int ,int*) ;
 int FUNC_1 (struct altera_pcie*) ;
 int FUNC_2 (struct altera_pcie*,int ,int ,int ,int) ;
 int FUNC_3 (struct altera_pcie*) ;

__attribute__((used)) static void FUNC_4(struct altera_pcie *VAR_9)
{
 u16 VAR_10, VAR_11, VAR_12;

 if (!VAR_9->pcie_data->ops->get_link_status(VAR_9))
  return;





 FUNC_0(VAR_9, VAR_9->root_bus_nr, VAR_8, VAR_0,
        &VAR_10);
 if ((VAR_10 & VAR_1) <= VAR_2)
  return;

 FUNC_0(VAR_9, VAR_9->root_bus_nr, VAR_8, VAR_5,
        &VAR_11);
 if ((VAR_11 & VAR_6) == VAR_7) {
  FUNC_0(VAR_9, VAR_9->root_bus_nr, VAR_8,
         VAR_3, &VAR_12);
  VAR_12 |= VAR_4;
  FUNC_2(VAR_9, VAR_9->root_bus_nr, VAR_8,
          VAR_3, VAR_12);

  FUNC_1(VAR_9);
 }
}
