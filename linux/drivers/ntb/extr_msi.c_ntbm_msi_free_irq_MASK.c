
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_dev {int dev; } ;
struct msi_desc {int * write_msi_msg_data; int * write_msi_msg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned int,void*) ;
 int FUNC_2 (int *,int ,int ,struct msi_desc*) ;
 struct msi_desc* FUNC_3 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_4(struct ntb_dev *VAR_2, unsigned int VAR_3, void *VAR_4)
{
 struct msi_desc *VAR_5 = FUNC_3(VAR_3);

 VAR_5->write_msi_msg = ((void*)0);
 VAR_5->write_msi_msg_data = ((void*)0);

 FUNC_0(FUNC_2(&VAR_2->dev, VAR_1,
          VAR_0, VAR_5));

 FUNC_1(&VAR_2->dev, VAR_3, VAR_4);
}
