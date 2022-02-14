
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_dev {int dummy; } ;


 int FUNC_0 (struct qed_dev*,char*) ;
 int FUNC_1 (struct qed_dev*) ;

__attribute__((used)) static int FUNC_2(struct qed_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0, "Failed to stop Fastpath\n");
  return VAR_1;
 }

 return 0;
}
