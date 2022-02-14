
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int batch_cache; int cache; int cache_lock; } ;
struct rsc_drv {TYPE_2__ client; TYPE_1__* tcs; scalar_t__ name; int id; int tcs_in_use; int lock; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_9__ {int mask; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,struct rsc_drv*) ;
 struct rsc_drv* FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int,int ,int,scalar_t__,struct rsc_drv*) ;
 scalar_t__ FUNC_9 (struct device_node*,char*,int *) ;
 int FUNC_10 (struct device_node*,char*,int *) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (struct platform_device*,struct rsc_drv*) ;
 int FUNC_13 (int *) ;
 int VAR_8 ;
 int FUNC_14 (struct rsc_drv*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_9)
{
 struct device_node *VAR_10 = VAR_9->dev.of_node;
 struct rsc_drv *VAR_11;
 int VAR_12, VAR_13;





 VAR_12 = FUNC_2();
 if (VAR_12) {
  if (VAR_12 != -VAR_2)
   FUNC_3(&VAR_9->dev, "Command DB not available (%d)\n",
         VAR_12);
  return VAR_12;
 }

 VAR_11 = FUNC_6(&VAR_9->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_10(VAR_10, "qcom,drv-id", &VAR_11->id);
 if (VAR_12)
  return VAR_12;

 VAR_11->name = FUNC_9(VAR_10, "label", ((void*)0));
 if (!VAR_11->name)
  VAR_11->name = FUNC_4(&VAR_9->dev);

 VAR_12 = FUNC_12(VAR_9, VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_13(&VAR_11->lock);
 FUNC_1(VAR_11->tcs_in_use, VAR_6);

 VAR_13 = FUNC_11(VAR_9, VAR_11->id);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_8(&VAR_9->dev, VAR_13, VAR_8,
          VAR_5 | VAR_4,
          VAR_11->name, VAR_11);
 if (VAR_12)
  return VAR_12;


 FUNC_14(VAR_11, VAR_7, 0, VAR_11->tcs[VAR_0].mask);

 FUNC_13(&VAR_11->client.cache_lock);
 FUNC_0(&VAR_11->client.cache);
 FUNC_0(&VAR_11->client.batch_cache);

 FUNC_5(&VAR_9->dev, VAR_11);

 return FUNC_7(&VAR_9->dev);
}
