
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx7_csi {int buf_num; int last_eof; int irqlock; int last_eof_completion; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct imx7_csi*) ;
 int FUNC_3 (struct imx7_csi*) ;
 int FUNC_4 (struct imx7_csi*) ;
 int FUNC_5 (struct imx7_csi*) ;
 int FUNC_6 (struct imx7_csi*) ;
 int FUNC_7 (struct imx7_csi*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_6, void *VAR_7)
{
 struct imx7_csi *VAR_8 = VAR_7;
 u32 VAR_9;

 FUNC_8(&VAR_8->irqlock);

 VAR_9 = FUNC_6(VAR_8);

 if (VAR_9 & VAR_4) {
  FUNC_1(VAR_8->dev, "Rx fifo overflow\n");
  FUNC_3(VAR_8);
 }

 if (VAR_9 & VAR_3) {
  FUNC_1(VAR_8->dev, "Hresponse error detected\n");
  FUNC_3(VAR_8);
 }

 if (VAR_9 & VAR_0) {
  FUNC_4(VAR_8);

  FUNC_2(VAR_8);

  FUNC_5(VAR_8);
 }

 if ((VAR_9 & VAR_1) &&
     (VAR_9 & VAR_2)) {
 } else if (VAR_9 & VAR_1) {
  VAR_8->buf_num = 0;
 } else if (VAR_9 & VAR_2) {
  VAR_8->buf_num = 1;
 }

 if ((VAR_9 & VAR_1) ||
     (VAR_9 & VAR_2)) {
  FUNC_7(VAR_8);

  if (VAR_8->last_eof) {
   FUNC_0(&VAR_8->last_eof_completion);
   VAR_8->last_eof = 0;
  }
 }

 FUNC_9(&VAR_8->irqlock);

 return VAR_5;
}
