
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {int * ops; } ;
struct gntdev_priv {int dma_dev; int mm; TYPE_1__ mn; int dmabuf_priv; int lock; int freeable_maps; int maps; } ;
struct file {struct gntdev_priv* private_data; } ;
struct TYPE_4__ {int this_device; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct file*) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct gntdev_priv*) ;
 struct gntdev_priv* FUNC_8 (int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,struct gntdev_priv*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_6, struct file *VAR_7)
{
 struct gntdev_priv *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_1(&VAR_8->maps);
 FUNC_1(&VAR_8->freeable_maps);
 FUNC_11(&VAR_8->lock);
 if (VAR_5) {
  VAR_8->mm = FUNC_5(VAR_2);
  if (!VAR_8->mm) {
   FUNC_7(VAR_8);
   return -VAR_0;
  }
  VAR_8->mn.ops = &VAR_4;
  VAR_9 = FUNC_10(&VAR_8->mn, VAR_8->mm);
  FUNC_9(VAR_8->mm);
 }

 if (VAR_9) {
  FUNC_7(VAR_8);
  return VAR_9;
 }

 VAR_7->private_data = VAR_8;




 FUNC_12("priv %p\n", VAR_8);

 return 0;
}
