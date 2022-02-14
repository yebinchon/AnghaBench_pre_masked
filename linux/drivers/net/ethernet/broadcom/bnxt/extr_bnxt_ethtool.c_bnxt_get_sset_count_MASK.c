
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnxt {int num_tests; } ;


 int VAR_0 ;


 int FUNC_0 (struct bnxt*) ;
 struct bnxt* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, int VAR_2)
{
 struct bnxt *VAR_3 = FUNC_1(VAR_1);

 switch (VAR_2) {
 case 129:
  return FUNC_0(VAR_3);
 case 128:
  if (!VAR_3->num_tests)
   return -VAR_0;
  return VAR_3->num_tests;
 default:
  return -VAR_0;
 }
}
