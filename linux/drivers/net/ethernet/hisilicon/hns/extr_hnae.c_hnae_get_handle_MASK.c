
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hnae_handle {int q_num; int * qs; int node; int eport_id; struct hnae_buf_ops* bops; struct device* owner_dev; struct hnae_ae_dev* dev; } ;
struct hnae_buf_ops {int dummy; } ;
struct hnae_ae_dev {int cls_dev; int handle_list; int lock; int owner; TYPE_1__* ops; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct hnae_handle* (* get_handle ) (struct hnae_ae_dev*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct hnae_handle* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct hnae_handle*) ;
 int FUNC_2 (int ) ;
 struct hnae_ae_dev* FUNC_3 (struct fwnode_handle const*) ;
 struct hnae_buf_ops VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hnae_handle*,int ,struct hnae_ae_dev*) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 struct hnae_handle* FUNC_8 (struct hnae_ae_dev*,int ) ;

struct hnae_handle *FUNC_9(struct device *VAR_3,
        const struct fwnode_handle *VAR_4,
        u32 VAR_5,
        struct hnae_buf_ops *VAR_6)
{
 struct hnae_ae_dev *VAR_7;
 struct hnae_handle *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;

 VAR_7 = FUNC_3(VAR_4);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_8 = VAR_7->ops->get_handle(VAR_7, VAR_5);
 if (FUNC_1(VAR_8)) {
  FUNC_7(&VAR_7->cls_dev);
  return VAR_8;
 }

 VAR_8->dev = VAR_7;
 VAR_8->owner_dev = VAR_3;
 VAR_8->bops = VAR_6 ? VAR_6 : &VAR_2;
 VAR_8->eport_id = VAR_5;

 for (VAR_9 = 0; VAR_9 < VAR_8->q_num; VAR_9++) {
  VAR_11 = FUNC_5(VAR_8, VAR_8->qs[VAR_9], VAR_7);
  if (VAR_11)
   goto out_when_init_queue;
 }

 FUNC_2(VAR_7->owner);

 FUNC_6(&VAR_7->lock, &VAR_8->node, &VAR_7->handle_list);

 return VAR_8;

out_when_init_queue:
 for (VAR_10 = VAR_9 - 1; VAR_10 >= 0; VAR_10--)
  FUNC_4(VAR_8->qs[VAR_10]);

 FUNC_7(&VAR_7->cls_dev);

 return FUNC_0(-VAR_1);
}
