
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_parent_ops {int supported_type_groups; int remove; int create; } ;
struct mdev_parent {int next; struct mdev_parent_ops const* ops; struct device* dev; int unreg_sem; int ref; } ;
struct device {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mdev_parent* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__,struct device*,int *) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 struct device* FUNC_5 (struct device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char**) ;
 int FUNC_8 (int *) ;
 struct mdev_parent* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (struct mdev_parent*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct mdev_parent*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (struct device*) ;

int FUNC_16(struct device *VAR_8, const struct mdev_parent_ops *VAR_9)
{
 int VAR_10;
 struct mdev_parent *VAR_11;
 char *VAR_12 = "MDEV_STATE=registered";
 char *VAR_13[] = { VAR_12, ((void*)0) };


 if (!VAR_9 || !VAR_9->create || !VAR_9->remove || !VAR_9->supported_type_groups)
  return -VAR_1;

 VAR_8 = FUNC_5(VAR_8);
 if (!VAR_8)
  return -VAR_1;

 FUNC_12(&VAR_7);


 VAR_11 = FUNC_0(VAR_8);
 if (VAR_11) {
  VAR_11 = ((void*)0);
  VAR_10 = -VAR_0;
  goto add_dev_err;
 }

 VAR_11 = FUNC_9(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  VAR_10 = -VAR_2;
  goto add_dev_err;
 }

 FUNC_8(&VAR_11->ref);
 FUNC_6(&VAR_11->unreg_sem);

 VAR_11->dev = VAR_8;
 VAR_11->ops = VAR_9;

 if (!VAR_5) {
  VAR_5 = FUNC_2("mdev_bus");
  if (!VAR_5) {
   VAR_10 = -VAR_2;
   goto add_dev_err;
  }
 }

 VAR_10 = FUNC_14(VAR_11);
 if (VAR_10)
  goto add_dev_err;

 VAR_10 = FUNC_1(VAR_5, VAR_8, ((void*)0));
 if (VAR_10)
  FUNC_4(VAR_8, "Failed to create compatibility class link\n");

 FUNC_10(&VAR_11->next, &VAR_6);
 FUNC_13(&VAR_7);

 FUNC_3(VAR_8, "MDEV: Registered\n");
 FUNC_7(&VAR_8->kobj, VAR_4, VAR_13);

 return 0;

add_dev_err:
 FUNC_13(&VAR_7);
 if (VAR_11)
  FUNC_11(VAR_11);
 else
  FUNC_15(VAR_8);
 return VAR_10;
}
