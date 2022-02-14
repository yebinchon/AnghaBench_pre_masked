
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ap_card {int list; } ;


 int VAR_0 ;
 int FUNC_0 (struct ap_card*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ap_card* FUNC_5 (struct device*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_1)
{
 struct ap_card *VAR_2 = FUNC_5(VAR_1);

 if (!FUNC_2(&VAR_2->list)) {
  FUNC_3(&VAR_0);
  FUNC_1(&VAR_2->list);
  FUNC_4(&VAR_0);
 }
 FUNC_0(VAR_2);
}
