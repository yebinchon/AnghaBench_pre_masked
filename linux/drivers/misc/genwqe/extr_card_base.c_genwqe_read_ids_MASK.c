
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ is_virtfn; int dev; } ;
struct genwqe_dev {scalar_t__ slu_unitcfg; scalar_t__ app_unitcfg; int is_privileged; int app_name; struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct genwqe_dev*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct genwqe_dev*) ;
 int FUNC_3 (struct genwqe_dev*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct genwqe_dev *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9;
 struct pci_dev *VAR_10 = VAR_7->pci_dev;

 VAR_7->slu_unitcfg = FUNC_0(VAR_7, VAR_6);
 if (VAR_7->slu_unitcfg == VAR_4) {
  FUNC_1(&VAR_10->dev,
   "err: SLUID=%016llx\n", VAR_7->slu_unitcfg);
  VAR_8 = -VAR_0;
  goto out_err;
 }

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9 < VAR_2 || VAR_9 == 0xff) {
  FUNC_1(&VAR_10->dev,
   "err: incompatible SLU Architecture %u\n", VAR_9);
  VAR_8 = -VAR_1;
  goto out_err;
 }

 VAR_7->app_unitcfg = FUNC_0(VAR_7, VAR_3);
 if (VAR_7->app_unitcfg == VAR_4) {
  FUNC_1(&VAR_10->dev,
   "err: APPID=%016llx\n", VAR_7->app_unitcfg);
  VAR_8 = -VAR_0;
  goto out_err;
 }
 FUNC_3(VAR_7, VAR_7->app_name, sizeof(VAR_7->app_name));
 if (VAR_10->is_virtfn)
  VAR_7->is_privileged = 0;
 else
  VAR_7->is_privileged = (FUNC_0(VAR_7, VAR_5)
         != VAR_4);

 out_err:
 return VAR_8;
}
