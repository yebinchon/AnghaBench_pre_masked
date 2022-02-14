
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_ipaddr {int dummy; } ;
struct qeth_card {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*,struct qeth_ipaddr*,int) ;

__attribute__((used)) static int FUNC_1(struct qeth_card *VAR_2,
       struct qeth_ipaddr *VAR_3,
       unsigned long VAR_4)
{
 switch (VAR_4) {
 case 128:
  FUNC_0(VAR_2, VAR_3, 1);
  return VAR_1;
 case 129:
  FUNC_0(VAR_2, VAR_3, 0);
  return VAR_1;
 default:
  return VAR_0;
 }
}
