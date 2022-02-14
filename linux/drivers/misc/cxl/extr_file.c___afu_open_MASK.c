
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mapping; int i_rdev; } ;
struct file {struct cxl_context* private_data; } ;
struct cxl_context {int pe; } ;
struct cxl_afu {int current_mode; } ;
struct cxl {int slices; int dev; int afu_list_lock; struct cxl_afu** afu; } ;
struct TYPE_2__ {int (* link_ok ) (struct cxl*,struct cxl_afu*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct cxl_afu*) ;
 int FUNC_3 (struct cxl_afu*) ;
 struct cxl_context* FUNC_4 () ;
 int FUNC_5 (struct cxl_context*,struct cxl_afu*,int) ;
 int FUNC_6 (struct cxl_context*,int ) ;
 TYPE_1__* VAR_3 ;
 struct cxl* FUNC_7 (int) ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct cxl*,struct cxl_afu*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_4, struct file *VAR_5, bool VAR_6)
{
 struct cxl *VAR_7;
 struct cxl_afu *VAR_8;
 struct cxl_context *VAR_9;
 int VAR_10 = FUNC_0(VAR_4->i_rdev);
 int VAR_11 = FUNC_1(VAR_4->i_rdev);
 int VAR_12 = -VAR_1;

 FUNC_8("afu_open afu%i.%i\n", VAR_11, VAR_10);

 if (!(VAR_7 = FUNC_7(VAR_10)))
  return -VAR_1;

 if (VAR_11 > VAR_7->slices)
  goto err_put_adapter;

 FUNC_10(&VAR_7->afu_list_lock);
 if (!(VAR_8 = VAR_7->afu[VAR_11])) {
  FUNC_11(&VAR_7->afu_list_lock);
  goto err_put_adapter;
 }






 FUNC_2(VAR_8);
 FUNC_11(&VAR_7->afu_list_lock);

 if (!VAR_8->current_mode)
  goto err_put_afu;

 if (!VAR_3->link_ok(VAR_7, VAR_8)) {
  VAR_12 = -VAR_0;
  goto err_put_afu;
 }

 if (!(VAR_9 = FUNC_4())) {
  VAR_12 = -VAR_2;
  goto err_put_afu;
 }

 VAR_12 = FUNC_5(VAR_9, VAR_8, VAR_6);
 if (VAR_12)
  goto err_put_afu;

 FUNC_6(VAR_9, VAR_4->i_mapping);

 FUNC_8("afu_open pe: %i\n", VAR_9->pe);
 VAR_5->private_data = VAR_9;


 VAR_12 = 0;

err_put_afu:

 FUNC_3(VAR_8);
err_put_adapter:
 FUNC_9(&VAR_7->dev);
 return VAR_12;
}
