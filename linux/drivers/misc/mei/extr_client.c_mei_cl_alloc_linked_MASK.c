
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dummy; } ;
struct mei_cl {int dummy; } ;


 int VAR_0 ;
 struct mei_cl* FUNC_0 (int) ;
 int FUNC_1 (struct mei_cl*) ;
 struct mei_cl* FUNC_2 (struct mei_device*) ;
 int FUNC_3 (struct mei_cl*) ;

struct mei_cl *FUNC_4(struct mei_device *VAR_1)
{
 struct mei_cl *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2) {
  VAR_3 = -VAR_0;
  goto err;
 }

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto err;

 return VAR_2;
err:
 FUNC_1(VAR_2);
 return FUNC_0(VAR_3);
}
