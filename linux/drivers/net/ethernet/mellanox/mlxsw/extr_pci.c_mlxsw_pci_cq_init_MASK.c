
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ v; } ;
struct TYPE_4__ {TYPE_1__ cq; } ;
struct mlxsw_pci_queue {int count; int num; TYPE_2__ u; scalar_t__ consumer_counter; } ;
struct mlxsw_pci {int core; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlxsw_pci_queue*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (scalar_t__,char*,int) ;
 int FUNC_9 (struct mlxsw_pci*,struct mlxsw_pci_queue*) ;
 int FUNC_10 (struct mlxsw_pci*,struct mlxsw_pci_queue*) ;
 char* FUNC_11 (struct mlxsw_pci_queue*,int) ;

__attribute__((used)) static int FUNC_12(struct mlxsw_pci *VAR_6, char *VAR_7,
        struct mlxsw_pci_queue *VAR_8)
{
 int VAR_9;
 int VAR_10;

 VAR_8->consumer_counter = 0;

 for (VAR_9 = 0; VAR_9 < VAR_8->count; VAR_9++) {
  char *VAR_11 = FUNC_11(VAR_8, VAR_9);

  FUNC_8(VAR_8->u.cq.v, VAR_11, 1);
 }

 if (VAR_8->u.cq.v == VAR_3)
  FUNC_3(VAR_7,
    VAR_0);
 else if (VAR_8->u.cq.v == VAR_4)
  FUNC_3(VAR_7,
    VAR_1);

 FUNC_2(VAR_7, VAR_5);
 FUNC_6(VAR_7, 0);
 FUNC_4(VAR_7, FUNC_1(VAR_8->count));
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  dma_addr_t VAR_12 = FUNC_0(VAR_8, VAR_9);

  FUNC_5(VAR_7, VAR_9, VAR_12);
 }
 VAR_10 = FUNC_7(VAR_6->core, VAR_7, VAR_8->num);
 if (VAR_10)
  return VAR_10;
 FUNC_10(VAR_6, VAR_8);
 FUNC_9(VAR_6, VAR_8);
 return 0;
}
