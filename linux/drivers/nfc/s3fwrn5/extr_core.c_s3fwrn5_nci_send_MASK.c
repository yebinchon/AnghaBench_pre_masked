
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct s3fwrn5_info {int mutex; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct s3fwrn5_info* FUNC_3 (struct nci_dev*) ;
 scalar_t__ FUNC_4 (struct s3fwrn5_info*) ;
 int FUNC_5 (struct s3fwrn5_info*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct nci_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct s3fwrn5_info *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;

 FUNC_1(&VAR_4->mutex);

 if (FUNC_4(VAR_4) != VAR_1) {
  FUNC_2(&VAR_4->mutex);
  return -VAR_0;
 }

 VAR_5 = FUNC_5(VAR_4, VAR_3);
 if (VAR_5 < 0)
  FUNC_0(VAR_3);

 FUNC_2(&VAR_4->mutex);
 return VAR_5;
}
