
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpc_dma_device {int open_count; } ;
struct inode {int dummy; } ;
struct file {struct dev_private_data* private_data; } ;
struct dev_private_data {struct kpc_dma_device* ldev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 struct kpc_dma_device* FUNC_3 (int ) ;
 struct dev_private_data* FUNC_4 (int,int ) ;

__attribute__((used)) static
int FUNC_5(struct inode *VAR_4, struct file *VAR_5)
{
 struct dev_private_data *VAR_6;
 struct kpc_dma_device *VAR_7 = FUNC_3(FUNC_2(VAR_4));

 if (!VAR_7)
  return -VAR_1;

 if (!FUNC_0(&VAR_7->open_count)) {
  FUNC_1(&VAR_7->open_count);
  return -VAR_0;
 }

 VAR_6 = FUNC_4(sizeof(struct dev_private_data), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_6->ldev = VAR_7;
 VAR_5->private_data = VAR_6;

 return 0;
}
