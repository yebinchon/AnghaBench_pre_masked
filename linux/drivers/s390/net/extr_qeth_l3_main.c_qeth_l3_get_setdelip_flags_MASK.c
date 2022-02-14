
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qeth_ipaddr {int type; int ipato; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



__attribute__((used)) static u32 FUNC_0(struct qeth_ipaddr *VAR_3, bool VAR_4)
{
 switch (VAR_3->type) {
 case 129:
  return (VAR_4) ? VAR_1 : 0;
 case 128:
  return (VAR_4) ? VAR_2 :
          VAR_0;
 default:
  return (VAR_4 && VAR_3->ipato) ? VAR_1 : 0;
 }
}
