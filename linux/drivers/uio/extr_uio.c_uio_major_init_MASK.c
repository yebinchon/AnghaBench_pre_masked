
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {int kobj; int * ops; int owner; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,char const*) ;
 int FUNC_2 (struct cdev*,int ,int ) ;
 struct cdev* FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,char const*) ;
 struct cdev* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(void)
{
 static const char VAR_6[] = "uio";
 struct cdev *VAR_7 = ((void*)0);
 dev_t VAR_8 = 0;
 int VAR_9;

 VAR_9 = FUNC_1(&VAR_8, 0, VAR_2, VAR_6);
 if (VAR_9)
  goto out;

 VAR_9 = -VAR_0;
 VAR_7 = FUNC_3();
 if (!VAR_7)
  goto out_unregister;

 VAR_7->owner = VAR_1;
 VAR_7->ops = &VAR_4;
 FUNC_5(&VAR_7->kobj, "%s", VAR_6);

 VAR_9 = FUNC_2(VAR_7, VAR_8, VAR_2);
 if (VAR_9)
  goto out_put;

 VAR_5 = FUNC_0(VAR_8);
 VAR_3 = VAR_7;
 return 0;
out_put:
 FUNC_4(&VAR_7->kobj);
out_unregister:
 FUNC_6(VAR_8, VAR_2);
out:
 return VAR_9;
}
