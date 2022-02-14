
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct mlx4_priv {int removed; int pci_dev_data; int driver_uar; int kar; int * port; } ;
struct mlx4_dev_persistent {struct mlx4_dev* dev; } ;
struct TYPE_4__ {int num_ports; int * possible_type; int * port_type; } ;
struct mlx4_dev {int flags; int dev_vfs; TYPE_2__ caps; TYPE_1__* persist; } ;
struct TYPE_3__ {int * curr_port_poss_type; int * curr_port_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx4_dev*,int) ;
 int FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (struct mlx4_dev*) ;
 int FUNC_9 (struct mlx4_dev*) ;
 int FUNC_10 (struct mlx4_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct mlx4_dev*) ;
 int FUNC_13 (struct mlx4_dev*) ;
 int FUNC_14 (struct mlx4_dev*) ;
 int FUNC_15 (struct mlx4_dev*) ;
 int FUNC_16 (struct mlx4_dev*) ;
 int FUNC_17 (struct mlx4_dev*) ;
 int FUNC_18 (struct mlx4_dev*) ;
 int FUNC_19 (struct mlx4_dev*,int ) ;
 int FUNC_20 (struct mlx4_dev*) ;
 int FUNC_21 (struct mlx4_dev*) ;
 int FUNC_22 (struct mlx4_dev*) ;
 int FUNC_23 (struct mlx4_dev*,int ) ;
 scalar_t__ FUNC_24 (struct mlx4_dev*) ;
 scalar_t__ FUNC_25 (struct mlx4_dev*) ;
 int FUNC_26 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_27 (struct mlx4_dev*) ;
 int FUNC_28 (struct mlx4_dev*) ;
 int FUNC_29 (struct mlx4_dev*) ;
 int FUNC_30 (struct mlx4_dev*,int *) ;
 int FUNC_31 (struct mlx4_dev*) ;
 int FUNC_32 (struct pci_dev*) ;
 struct mlx4_dev_persistent* FUNC_33 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_34(struct pci_dev *VAR_4)
{
 struct mlx4_dev_persistent *VAR_5 = FUNC_33(VAR_4);
 struct mlx4_dev *VAR_6 = VAR_5->dev;
 struct mlx4_priv *VAR_7 = FUNC_27(VAR_6);
 int VAR_8;
 int VAR_9, VAR_10;

 if (VAR_7->removed)
  return;


 for (VAR_10 = 0; VAR_10 < VAR_6->caps.num_ports; VAR_10++) {
  VAR_6->persist->curr_port_type[VAR_10] = VAR_6->caps.port_type[VAR_10 + 1];
  VAR_6->persist->curr_port_poss_type[VAR_10] = VAR_6->caps.
             possible_type[VAR_10 + 1];
 }

 VAR_8 = VAR_7->pci_dev_data;

 FUNC_29(VAR_6);
 FUNC_31(VAR_6);

 for (VAR_9 = 1; VAR_9 <= VAR_6->caps.num_ports; VAR_9++) {
  FUNC_11(&VAR_7->port[VAR_9]);
  FUNC_2(VAR_6, VAR_9);
 }

 if (FUNC_24(VAR_6))
  FUNC_23(VAR_6,
        VAR_2);

 FUNC_6(VAR_6);
 if (!FUNC_25(VAR_6))
  FUNC_4(VAR_6);
 FUNC_12(VAR_6);
 FUNC_13(VAR_6);
 FUNC_5(VAR_6);
 FUNC_20(VAR_6);
 FUNC_7(VAR_6);
 FUNC_8(VAR_6);
 FUNC_9(VAR_6);
 FUNC_15(VAR_6);
 FUNC_10(VAR_6);

 if (FUNC_24(VAR_6))
  FUNC_23(VAR_6,
        VAR_3);

 FUNC_0(VAR_7->kar);
 FUNC_30(VAR_6, &VAR_7->driver_uar);
 FUNC_14(VAR_6);
 if (!FUNC_25(VAR_6))
  FUNC_16(VAR_6);
 FUNC_21(VAR_6);
 if (FUNC_24(VAR_6))
  FUNC_26(VAR_6);
 FUNC_18(VAR_6);
 FUNC_17(VAR_6);
 if (FUNC_25(VAR_6))
  FUNC_26(VAR_6);
 FUNC_19(VAR_6, VAR_0);

 if (VAR_6->flags & VAR_1)
  FUNC_32(VAR_4);

 if (!FUNC_25(VAR_6))
  FUNC_22(VAR_6);

 FUNC_28(VAR_6);
 FUNC_1(VAR_6->dev_vfs);

 FUNC_3(VAR_6);
 VAR_7->pci_dev_data = VAR_8;
 VAR_7->removed = 1;
}
