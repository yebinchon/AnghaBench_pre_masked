
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct cdev {struct module* owner; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,char const*) ;
 int FUNC_1 (struct cdev*,int ,int ) ;
 int FUNC_2 (struct cdev*) ;
 int FUNC_3 (struct cdev*,int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct cdev *VAR_2, dev_t *VAR_3,
      const char *VAR_4, struct module *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, 0, VAR_0, VAR_4);
 if (VAR_6)
  goto out1;

 FUNC_3(VAR_2, &VAR_1);
 VAR_2->owner = VAR_5;
 VAR_6 = FUNC_1(VAR_2, *VAR_3, VAR_0);
 if (VAR_6)
  goto out2;

 VAR_6 = FUNC_4(*VAR_3, VAR_4);
 if (VAR_6)
  goto out3;

 return 0;

out3:
 FUNC_2(VAR_2);
out2:
 FUNC_5(*VAR_3, VAR_0);
out1:
 return VAR_6;
}
