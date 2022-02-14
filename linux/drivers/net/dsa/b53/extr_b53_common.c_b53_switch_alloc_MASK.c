
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int * ops; struct b53_device* priv; } ;
struct device {int dummy; } ;
struct b53_io_ops {int dummy; } ;
struct b53_device {int stats_mutex; int reg_mutex; struct b53_io_ops const* ops; void* priv; struct dsa_switch* ds; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct b53_device* FUNC_0 (struct device*,int,int ) ;
 struct dsa_switch* FUNC_1 (struct device*,int ) ;
 int FUNC_2 (int *) ;

struct b53_device *FUNC_3(struct device *VAR_3,
        const struct b53_io_ops *VAR_4,
        void *VAR_5)
{
 struct dsa_switch *VAR_6;
 struct b53_device *VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_3, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_6->priv = VAR_7;
 VAR_7->dev = VAR_3;

 VAR_7->ds = VAR_6;
 VAR_7->priv = VAR_5;
 VAR_7->ops = VAR_4;
 VAR_6->ops = &VAR_2;
 FUNC_2(&VAR_7->reg_mutex);
 FUNC_2(&VAR_7->stats_mutex);

 return VAR_7;
}
