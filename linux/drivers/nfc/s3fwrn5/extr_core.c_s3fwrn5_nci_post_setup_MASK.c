
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3fwrn5_info {int ndev; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct s3fwrn5_info* FUNC_2 (struct nci_dev*) ;
 int FUNC_3 (struct s3fwrn5_info*) ;
 int FUNC_4 (struct s3fwrn5_info*,int ) ;
 int FUNC_5 (struct s3fwrn5_info*,int) ;

__attribute__((used)) static int FUNC_6(struct nci_dev *VAR_1)
{
 struct s3fwrn5_info *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 < 0)
  goto out;



 FUNC_4(VAR_2, VAR_0);
 FUNC_5(VAR_2, 1);

 VAR_3 = FUNC_1(VAR_2->ndev);
 if (VAR_3 < 0)
  goto out;

 VAR_3 = FUNC_0(VAR_2->ndev);

out:
 return VAR_3;
}
