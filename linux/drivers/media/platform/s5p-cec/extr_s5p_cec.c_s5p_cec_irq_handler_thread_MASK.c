
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_cec_dev {int tx; int rx; int msg; int adap; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 void* VAR_5 ;

 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int,int ,int,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct s5p_cec_dev *VAR_8 = VAR_7;

 FUNC_2(VAR_8->dev, "irq processing thread\n");
 switch (VAR_8->tx) {
 case 130:
  FUNC_1(VAR_8->adap, VAR_3, 0, 0, 0, 0);
  VAR_8->tx = VAR_5;
  break;
 case 128:
  FUNC_1(VAR_8->adap,
   VAR_1 | VAR_2,
   0, 1, 0, 0);
  VAR_8->tx = VAR_5;
  break;
 case 129:
  FUNC_1(VAR_8->adap,
   VAR_1 | VAR_0,
   0, 0, 0, 1);
  VAR_8->tx = VAR_5;
  break;
 case 131:
  FUNC_3(VAR_8->dev, "state set to busy, this should not occur here\n");
  break;
 default:
  break;
 }

 switch (VAR_8->rx) {
 case 130:
  FUNC_0(VAR_8->adap, &VAR_8->msg);
  VAR_8->rx = VAR_5;
  break;
 default:
  break;
 }

 return VAR_4;
}
