
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_adapter {int aq_required; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct iavf_adapter*) ;
 scalar_t__ FUNC_1 (struct iavf_adapter*) ;
 int FUNC_2 (struct iavf_adapter*) ;
 int FUNC_3 (struct iavf_adapter*) ;

int FUNC_4(struct iavf_adapter *VAR_2)
{

 if (FUNC_1(VAR_2)) {
  VAR_2->aq_required |= VAR_1 |
     VAR_0;
  return 0;
 } else if (FUNC_0(VAR_2)) {
  return FUNC_2(VAR_2);
 } else {
  return FUNC_3(VAR_2);
 }
}
