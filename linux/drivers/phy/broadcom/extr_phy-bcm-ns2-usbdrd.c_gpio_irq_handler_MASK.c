
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ns2_phy_driver {int debounce_jiffies; int wq_extcon; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct ns2_phy_driver *VAR_4 = VAR_3;

 FUNC_0(VAR_1, &VAR_4->wq_extcon,
      VAR_4->debounce_jiffies);

 return VAR_0;
}
