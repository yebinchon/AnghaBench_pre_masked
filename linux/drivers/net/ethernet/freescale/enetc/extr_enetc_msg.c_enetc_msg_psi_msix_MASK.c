
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_si {int hw; } ;
struct enetc_pf {int msg_task; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct enetc_pf* FUNC_1 (struct enetc_si*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct enetc_si *VAR_3 = (struct enetc_si *)VAR_2;
 struct enetc_pf *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(&VAR_3->hw);
 FUNC_2(&VAR_4->msg_task);

 return VAR_0;
}
