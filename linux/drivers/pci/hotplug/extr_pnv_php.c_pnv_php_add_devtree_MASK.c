
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pnv_php_slot {TYPE_1__* dn; int ocs; void* dt; void* fdt; int pdev; } ;
struct TYPE_4__ {int * child; int phandle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void*,int ,int ) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (void*,TYPE_1__*,int *) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,void*,int) ;
 int FUNC_10 (struct pnv_php_slot*) ;
 int FUNC_11 (int *,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(struct pnv_php_slot *VAR_3)
{
 void *VAR_4, *VAR_5, *VAR_6;
 int VAR_7;





 VAR_5 = FUNC_3(0x10000, VAR_2);
 if (!VAR_5) {
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_7 = FUNC_9(VAR_3->dn->phandle, VAR_5, 0x10000);
 if (VAR_7) {
  FUNC_8(VAR_3->pdev, "Error %d getting FDT blob\n", VAR_7);
  goto free_fdt1;
 }

 VAR_4 = FUNC_2(VAR_5, FUNC_0(VAR_5), VAR_2);
 if (!VAR_4) {
  VAR_7 = -VAR_1;
  goto free_fdt1;
 }


 VAR_6 = FUNC_7(VAR_4, VAR_3->dn, ((void*)0));
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  FUNC_8(VAR_3->pdev, "Cannot unflatten FDT\n");
  goto free_fdt;
 }


 FUNC_6(&VAR_3->ocs);
 FUNC_12(VAR_3->dn);
 VAR_7 = FUNC_11(&VAR_3->ocs, VAR_3->dn);
 if (VAR_7) {
  FUNC_12(VAR_3->dn);
  FUNC_8(VAR_3->pdev, "Error %d populating changeset\n",
    VAR_7);
  goto free_dt;
 }

 VAR_3->dn->child = ((void*)0);
 VAR_7 = FUNC_4(&VAR_3->ocs);
 if (VAR_7) {
  FUNC_8(VAR_3->pdev, "Error %d applying changeset\n", VAR_7);
  goto destroy_changeset;
 }


 FUNC_10(VAR_3);
 VAR_3->fdt = VAR_4;
 VAR_3->dt = VAR_6;
 FUNC_1(VAR_5);
 goto out;

destroy_changeset:
 FUNC_5(&VAR_3->ocs);
free_dt:
 FUNC_1(VAR_6);
 VAR_3->dn->child = ((void*)0);
free_fdt:
 FUNC_1(VAR_4);
free_fdt1:
 FUNC_1(VAR_5);
out:
 return VAR_7;
}
