
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct cxgbit_device* cdev; } ;
struct cxgbit_np {TYPE_1__ com; } ;
struct cxgbit_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct cxgbit_device*,struct cxgbit_np*) ;
 int VAR_0 ;
 struct cxgbit_device* FUNC_1 (struct cxgbit_np*) ;
 scalar_t__ FUNC_2 (struct cxgbit_device*,struct cxgbit_np*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct cxgbit_np *VAR_1)
{
 struct cxgbit_device *VAR_2;
 int VAR_3 = -1;

 FUNC_3(&VAR_0);
 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  goto out;

 if (FUNC_2(VAR_2, VAR_1) >= 0)
  goto out;

 if (FUNC_0(VAR_2, VAR_1))
  goto out;

 VAR_1->com.cdev = VAR_2;
 VAR_3 = 0;
out:
 FUNC_4(&VAR_0);
 return VAR_3;
}
