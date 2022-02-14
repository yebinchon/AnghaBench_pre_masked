
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinfc_host {unsigned int irq_status; int cmd_complete; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (struct hinfc_host*,int ) ;
 int FUNC_2 (struct hinfc_host*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_9, void *VAR_10)
{
 struct hinfc_host *VAR_11 = VAR_10;
 unsigned int VAR_12;

 VAR_12 = FUNC_1(VAR_11, VAR_4);

 VAR_11->irq_status |= VAR_12;

 if (VAR_12 & VAR_6) {
  FUNC_2(VAR_11, VAR_2, VAR_0);
  FUNC_0(&VAR_11->cmd_complete);
 } else if (VAR_12 & VAR_5) {
  FUNC_2(VAR_11, VAR_1, VAR_0);
 } else if (VAR_12 & VAR_7) {
  FUNC_2(VAR_11, VAR_3, VAR_0);
 }

 return VAR_8;
}
