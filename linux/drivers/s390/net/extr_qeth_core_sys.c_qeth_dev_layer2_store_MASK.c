
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ layer_enforced; } ;
struct TYPE_4__ {int layer; } ;
struct qeth_card {scalar_t__ state; int discipline_mutex; int gdev; TYPE_3__* discipline; struct net_device* dev; TYPE_2__ info; TYPE_1__ options; } ;
struct net_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum qeth_discipline_id { ____Placeholder_qeth_discipline_id } qeth_discipline_id ;
struct TYPE_6__ {int (* setup ) (int ) ;int (* remove ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct net_device* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct qeth_card*) ;
 int FUNC_6 (struct qeth_card*,int) ;
 int FUNC_7 (char const*,char**,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_7,
  struct device_attribute *VAR_8, const char *VAR_9, size_t VAR_10)
{
 struct qeth_card *VAR_11 = FUNC_0(VAR_7);
 struct net_device *VAR_12;
 char *VAR_13;
 int VAR_14, VAR_15 = 0;
 enum qeth_discipline_id VAR_16;

 if (!VAR_11)
  return -VAR_1;

 FUNC_2(&VAR_11->discipline_mutex);
 if (VAR_11->state != VAR_0) {
  VAR_15 = -VAR_4;
  goto out;
 }

 VAR_14 = FUNC_7(VAR_9, &VAR_13, 16);
 switch (VAR_14) {
 case 0:
  VAR_16 = VAR_6;
  break;
 case 1:
  VAR_16 = VAR_5;
  break;
 default:
  VAR_15 = -VAR_1;
  goto out;
 }

 if (VAR_11->options.layer == VAR_16)
  goto out;
 if (VAR_11->info.layer_enforced) {

  VAR_15 = -VAR_3;
  goto out;
 }

 if (VAR_11->discipline) {

  VAR_12 = FUNC_4(VAR_11->dev);
  if (!VAR_12) {
   VAR_15 = -VAR_2;
   goto out;
  }

  VAR_11->discipline->remove(VAR_11->gdev);
  FUNC_5(VAR_11);
  FUNC_1(VAR_11->dev);
  VAR_11->dev = VAR_12;
 }

 VAR_15 = FUNC_6(VAR_11, VAR_16);
 if (VAR_15)
  goto out;

 VAR_15 = VAR_11->discipline->setup(VAR_11->gdev);
 if (VAR_15)
  FUNC_5(VAR_11);
out:
 FUNC_3(&VAR_11->discipline_mutex);
 return VAR_15 ? VAR_15 : VAR_10;
}
