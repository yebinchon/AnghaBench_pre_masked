
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct rproc {int name; int lock; int firmware; struct device dev; } ;
struct firmware {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,int ,struct device*) ;
 int FUNC_5 (struct rproc*) ;
 int FUNC_6 (struct rproc*,struct firmware const*) ;
 int FUNC_7 (struct rproc*,int) ;

int FUNC_8(struct rproc *VAR_0)
{
 const struct firmware *VAR_1;
 struct device *VAR_2 = &VAR_0->dev;
 int VAR_3;

 FUNC_0(VAR_2, "recovering %s\n", VAR_0->name);

 VAR_3 = FUNC_1(&VAR_0->lock);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_7(VAR_0, 1);
 if (VAR_3)
  goto unlock_mutex;


 FUNC_5(VAR_0);


 VAR_3 = FUNC_4(&VAR_1, VAR_0->firmware, VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(VAR_2, "request_firmware failed: %d\n", VAR_3);
  goto unlock_mutex;
 }


 VAR_3 = FUNC_6(VAR_0, VAR_1);

 FUNC_3(VAR_1);

unlock_mutex:
 FUNC_2(&VAR_0->lock);
 return VAR_3;
}
