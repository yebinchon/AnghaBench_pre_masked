
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct softing_priv {unsigned long output; struct softing* card; } ;
struct TYPE_2__ {int lock; } ;
struct softing {TYPE_1__ fw; } ;
struct net_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct softing_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct net_device *VAR_6 = FUNC_5(VAR_2);
 struct softing_priv *VAR_7 = FUNC_3(VAR_6);
 struct softing *VAR_8 = VAR_7->card;
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_4, 0, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_9 &= 0xFF;

 VAR_10 = FUNC_1(&VAR_8->fw.lock);
 if (VAR_10)
  return -VAR_1;
 if (FUNC_4(VAR_6)) {
  FUNC_2(&VAR_8->fw.lock);
  return -VAR_0;
 }
 VAR_7->output = VAR_9;
 FUNC_2(&VAR_8->fw.lock);
 return VAR_5;
}
