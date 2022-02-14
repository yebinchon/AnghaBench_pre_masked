
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_msi_devres {struct msi_desc* entry; struct ntb_msi_desc* msi_desc; struct ntb_dev* ntb; } ;
struct ntb_msi_desc {int dummy; } ;
struct ntb_dev {int dev; } ;
struct msi_desc {struct ntb_msi_devres* write_msi_msg_data; int write_msi_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ntb_msi_devres*) ;
 struct ntb_msi_devres* FUNC_1 (int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct ntb_dev *VAR_4, struct msi_desc *VAR_5,
       struct ntb_msi_desc *VAR_6)
{
 struct ntb_msi_devres *VAR_7;

 VAR_7 = FUNC_1(VAR_3,
     sizeof(struct ntb_msi_devres), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->ntb = VAR_4;
 VAR_7->entry = VAR_5;
 VAR_7->msi_desc = VAR_6;

 FUNC_0(&VAR_4->dev, VAR_7);

 VAR_7->entry->write_msi_msg = VAR_2;
 VAR_7->entry->write_msi_msg_data = VAR_7;

 return 0;
}
