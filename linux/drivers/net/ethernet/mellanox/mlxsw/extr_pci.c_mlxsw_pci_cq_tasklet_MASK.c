
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_3__ {int comp_rdq_count; int v; int comp_sdq_count; } ;
struct TYPE_4__ {TYPE_1__ cq; } ;
struct mlxsw_pci_queue {int count; TYPE_2__ u; int elem_size; struct mlxsw_pci* pci; } ;
struct mlxsw_pci {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 char* FUNC_1 (struct mlxsw_pci_queue*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mlxsw_pci*,struct mlxsw_pci_queue*,int ,int ,char*) ;
 int FUNC_4 (struct mlxsw_pci*,struct mlxsw_pci_queue*,int ,char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct mlxsw_pci*,struct mlxsw_pci_queue*) ;
 int FUNC_8 (struct mlxsw_pci*,struct mlxsw_pci_queue*) ;
 struct mlxsw_pci_queue* FUNC_9 (struct mlxsw_pci*,scalar_t__) ;
 struct mlxsw_pci_queue* FUNC_10 (struct mlxsw_pci*,scalar_t__) ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_1)
{
 struct mlxsw_pci_queue *VAR_2 = (struct mlxsw_pci_queue *) VAR_1;
 struct mlxsw_pci *VAR_3 = VAR_2->pci;
 char *VAR_4;
 int VAR_5 = 0;
 int VAR_6 = VAR_2->count >> 1;

 while ((VAR_4 = FUNC_1(VAR_2))) {
  u16 VAR_7 = FUNC_6(VAR_4);
  u8 VAR_8 = FUNC_5(VAR_2->u.cq.v, VAR_4);
  u8 VAR_9 = FUNC_2(VAR_2->u.cq.v, VAR_4);
  char VAR_10[VAR_0];

  FUNC_0(VAR_10, VAR_4, VAR_2->elem_size);
  FUNC_8(VAR_3, VAR_2);

  if (VAR_8) {
   struct mlxsw_pci_queue *VAR_11;

   VAR_11 = FUNC_10(VAR_3, VAR_9);
   FUNC_4(VAR_3, VAR_11,
       VAR_7, VAR_10);
   VAR_2->u.cq.comp_sdq_count++;
  } else {
   struct mlxsw_pci_queue *VAR_12;

   VAR_12 = FUNC_9(VAR_3, VAR_9);
   FUNC_3(VAR_3, VAR_12,
       VAR_7, VAR_2->u.cq.v, VAR_10);
   VAR_2->u.cq.comp_rdq_count++;
  }
  if (++VAR_5 == VAR_6)
   break;
 }
 if (VAR_5)
  FUNC_7(VAR_3, VAR_2);
}
