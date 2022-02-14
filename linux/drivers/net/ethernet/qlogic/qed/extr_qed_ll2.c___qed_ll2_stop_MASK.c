
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_hwfn {struct qed_dev* cdev; } ;
struct qed_dev {TYPE_1__* ll2; } ;
struct TYPE_2__ {int handle; } ;


 int FUNC_0 (struct qed_dev*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ) ;
 int FUNC_2 (struct qed_hwfn*,int ) ;

__attribute__((used)) static int FUNC_3(struct qed_hwfn *VAR_0)
{
 struct qed_dev *VAR_1 = VAR_0->cdev;
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1->ll2->handle);
 if (VAR_2)
  FUNC_0(VAR_1, "Failed to terminate LL2 connection\n");

 FUNC_1(VAR_0, VAR_1->ll2->handle);

 return VAR_2;
}
