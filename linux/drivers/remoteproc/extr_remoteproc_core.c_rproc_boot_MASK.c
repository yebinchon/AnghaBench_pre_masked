
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct rproc {int name; scalar_t__ state; int lock; int power; int firmware; struct device dev; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int,...) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,int ,struct device*) ;
 int FUNC_9 (struct rproc*,struct firmware const*) ;

int FUNC_10(struct rproc *VAR_3)
{
 const struct firmware *VAR_4;
 struct device *VAR_5;
 int VAR_6;

 if (!VAR_3) {
  FUNC_6("invalid rproc handle\n");
  return -VAR_0;
 }

 VAR_5 = &VAR_3->dev;

 VAR_6 = FUNC_4(&VAR_3->lock);
 if (VAR_6) {
  FUNC_2(VAR_5, "can't lock rproc %s: %d\n", VAR_3->name, VAR_6);
  return VAR_6;
 }

 if (VAR_3->state == VAR_2) {
  VAR_6 = -VAR_1;
  FUNC_2(VAR_5, "can't boot deleted rproc %s\n", VAR_3->name);
  goto unlock_mutex;
 }


 if (FUNC_1(&VAR_3->power) > 1) {
  VAR_6 = 0;
  goto unlock_mutex;
 }

 FUNC_3(VAR_5, "powering up %s\n", VAR_3->name);


 VAR_6 = FUNC_8(&VAR_4, VAR_3->firmware, VAR_5);
 if (VAR_6 < 0) {
  FUNC_2(VAR_5, "request_firmware failed: %d\n", VAR_6);
  goto downref_rproc;
 }

 VAR_6 = FUNC_9(VAR_3, VAR_4);

 FUNC_7(VAR_4);

downref_rproc:
 if (VAR_6)
  FUNC_0(&VAR_3->power);
unlock_mutex:
 FUNC_5(&VAR_3->lock);
 return VAR_6;
}
