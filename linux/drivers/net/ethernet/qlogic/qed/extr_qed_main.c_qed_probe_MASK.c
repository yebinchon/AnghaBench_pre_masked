
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_probe_params {int recov_in_prog; int dp_level; int dp_module; scalar_t__ is_vf; int protocol; } ;
struct qed_dev {int b_is_vf; int recov_in_prog; int protocol; int drv_type; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct qed_dev*,char*) ;
 int FUNC_1 (struct qed_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct qed_dev* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct qed_dev*) ;
 int FUNC_4 (struct qed_dev*) ;
 int FUNC_5 (struct qed_dev*) ;
 int FUNC_6 (struct qed_dev*,int ) ;
 int FUNC_7 (struct qed_dev*,int ,int ) ;
 int FUNC_8 (struct qed_dev*,struct pci_dev*) ;

__attribute__((used)) static struct qed_dev *FUNC_9(struct pci_dev *VAR_2,
     struct qed_probe_params *VAR_3)
{
 struct qed_dev *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4)
  goto err0;

 VAR_4->drv_type = VAR_0;
 VAR_4->protocol = VAR_3->protocol;

 if (VAR_3->is_vf)
  VAR_4->b_is_vf = 1;

 FUNC_7(VAR_4, VAR_3->dp_module, VAR_3->dp_level);

 VAR_4->recov_in_prog = VAR_3->recov_in_prog;

 VAR_5 = FUNC_8(VAR_4, VAR_2);
 if (VAR_5) {
  FUNC_0(VAR_4, "init pci failed\n");
  goto err1;
 }
 FUNC_1(VAR_4, "PCI init completed successfully\n");

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_4, "Failed to register devlink.\n");
  goto err2;
 }

 VAR_5 = FUNC_6(VAR_4, VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_4, "hw prepare failed\n");
  goto err2;
 }

 FUNC_1(VAR_4, "qed_probe completed successfully\n");

 return VAR_4;

err2:
 FUNC_5(VAR_4);
err1:
 FUNC_4(VAR_4);
err0:
 return ((void*)0);
}
