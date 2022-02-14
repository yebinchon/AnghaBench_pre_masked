
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {scalar_t__ state; char* firmware; int lock; int name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,char*) ;
 struct rproc* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5,
         struct device_attribute *VAR_6,
         const char *VAR_7, size_t VAR_8)
{
 struct rproc *VAR_9 = FUNC_6(VAR_5);
 char *VAR_10;
 int VAR_11, VAR_12 = VAR_8;

 VAR_11 = FUNC_3(&VAR_9->lock);
 if (VAR_11) {
  FUNC_0(VAR_5, "can't lock rproc %s: %d\n", VAR_9->name, VAR_11);
  return -VAR_1;
 }

 if (VAR_9->state != VAR_4) {
  FUNC_0(VAR_5, "can't change firmware while running\n");
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_5(VAR_7, "\n");
 if (!VAR_12) {
  FUNC_0(VAR_5, "can't provide a NULL firmware\n");
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_10 = FUNC_2(VAR_7, VAR_12, VAR_3);
 if (!VAR_10) {
  VAR_11 = -VAR_2;
  goto out;
 }

 FUNC_1(VAR_9->firmware);
 VAR_9->firmware = VAR_10;
out:
 FUNC_4(&VAR_9->lock);

 return VAR_11 ? VAR_11 : VAR_8;
}
