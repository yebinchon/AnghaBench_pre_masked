
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netup_unidvb_dev {int dummy; } ;


 int FUNC_0 (struct netup_unidvb_dev*,int ) ;
 int FUNC_1 (struct netup_unidvb_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct netup_unidvb_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0, 0);
 if (VAR_1)
  return VAR_1;
 VAR_1 = FUNC_1(VAR_0, 1);
 if (VAR_1) {
  FUNC_0(VAR_0, 0);
  return VAR_1;
 }
 return 0;
}
