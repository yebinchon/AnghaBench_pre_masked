
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int major; } ;
struct file_operations {int dummy; } ;
struct device {int release; struct class* class; int devt; } ;
struct class {int dummy; } ;
struct cdev {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (struct cdev*,struct file_operations const*) ;
 int FUNC_2 (struct device*,struct hl_device*) ;
 int FUNC_3 (struct device*,char*,char*) ;
 int FUNC_4 (struct device*) ;
 int VAR_3 ;
 struct device* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct hl_device *VAR_4, struct class *VAR_5,
    int VAR_6, const struct file_operations *VAR_7,
    char *VAR_8, struct cdev *VAR_9,
    struct device **VAR_10)
{
 FUNC_1(VAR_9, VAR_7);
 VAR_9->owner = VAR_2;

 *VAR_10 = FUNC_5(sizeof(**VAR_10), VAR_1);
 if (!*VAR_10)
  return -VAR_0;

 FUNC_4(*VAR_10);
 (*VAR_10)->devt = FUNC_0(VAR_4->major, VAR_6);
 (*VAR_10)->class = VAR_5;
 (*VAR_10)->release = VAR_3;
 FUNC_2(*VAR_10, VAR_4);
 FUNC_3(*VAR_10, "%s", VAR_8);

 return 0;
}
