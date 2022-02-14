
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s3fwrn5_phy_ops {int dummy; } ;
struct TYPE_4__ {struct nci_dev* ndev; } ;
struct s3fwrn5_info {unsigned int max_payload; struct nci_dev* ndev; TYPE_1__ fw_info; int mutex; struct s3fwrn5_phy_ops const* phy_ops; struct device* pdev; void* phy_id; } ;
struct nci_dev {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int n_prop_ops; int prop_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct s3fwrn5_info* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (int *) ;
 struct nci_dev* FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (struct nci_dev*) ;
 int FUNC_4 (struct nci_dev*) ;
 int FUNC_5 (struct nci_dev*,struct s3fwrn5_info*) ;
 int FUNC_6 (struct nci_dev*,struct device*) ;
 int FUNC_7 (int *,int *) ;
 TYPE_2__ VAR_4 ;
 int FUNC_8 (struct s3fwrn5_info*,int ) ;

int FUNC_9(struct nci_dev **VAR_5, void *VAR_6, struct device *VAR_7,
 const struct s3fwrn5_phy_ops *VAR_8, unsigned int VAR_9)
{
 struct s3fwrn5_info *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_0(VAR_7, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->phy_id = VAR_6;
 VAR_10->pdev = VAR_7;
 VAR_10->phy_ops = VAR_8;
 VAR_10->max_payload = VAR_9;
 FUNC_1(&VAR_10->mutex);

 FUNC_8(VAR_10, VAR_2);

 FUNC_7(&VAR_4.prop_ops,
  &VAR_4.n_prop_ops);

 VAR_10->ndev = FUNC_2(&VAR_4,
  VAR_3, 0, 0);
 if (!VAR_10->ndev)
  return -VAR_0;

 FUNC_6(VAR_10->ndev, VAR_7);
 FUNC_5(VAR_10->ndev, VAR_10);

 VAR_11 = FUNC_4(VAR_10->ndev);
 if (VAR_11 < 0) {
  FUNC_3(VAR_10->ndev);
  return VAR_11;
 }

 VAR_10->fw_info.ndev = VAR_10->ndev;

 *VAR_5 = VAR_10->ndev;

 return VAR_11;
}
