
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_operations {int owner; } ;
struct char_device_struct {int major; struct cdev* cdev; } ;
struct cdev {int kobj; struct file_operations const* ops; int owner; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct char_device_struct*) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (struct char_device_struct*) ;
 struct char_device_struct* FUNC_3 (unsigned int,unsigned int,unsigned int,char const*) ;
 int FUNC_4 (int,unsigned int,unsigned int) ;
 int FUNC_5 (struct cdev*,int ,unsigned int) ;
 struct cdev* FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,char const*) ;

int FUNC_10(unsigned int VAR_1, unsigned int VAR_2,
        unsigned int VAR_3, const char *VAR_4,
        const struct file_operations *VAR_5)
{
 struct char_device_struct *VAR_6;
 struct cdev *VAR_7;
 int VAR_8 = -VAR_0;

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 if (FUNC_0(VAR_6))
  return FUNC_2(VAR_6);

 VAR_7 = FUNC_6();
 if (!VAR_7)
  goto out2;

 VAR_7->owner = VAR_5->owner;
 VAR_7->ops = VAR_5;
 FUNC_9(&VAR_7->kobj, "%s", VAR_4);

 VAR_8 = FUNC_5(VAR_7, FUNC_1(VAR_6->major, VAR_2), VAR_3);
 if (VAR_8)
  goto out;

 VAR_6->cdev = VAR_7;

 return VAR_1 ? 0 : VAR_6->major;
out:
 FUNC_8(&VAR_7->kobj);
out2:
 FUNC_7(FUNC_4(VAR_6->major, VAR_2, VAR_3));
 return VAR_8;
}
