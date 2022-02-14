
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx7_csi {int last_eof; int underrun_buf; int dev; int sd; int last_eof_completion; int irqlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct imx7_csi*,int ) ;
 int FUNC_1 (struct imx7_csi*) ;
 int FUNC_2 (int ,int *) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct imx7_csi *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;
 int VAR_5;


 FUNC_4(&VAR_2->irqlock, VAR_4);
 VAR_2->last_eof = 1;
 FUNC_5(&VAR_2->irqlock, VAR_4);




 VAR_3 = FUNC_3(VAR_0);
 VAR_5 = FUNC_7(&VAR_2->last_eof_completion,
       VAR_3);
 if (VAR_5 == 0)
  FUNC_6(&VAR_2->sd, "wait last EOF timeout\n");

 FUNC_1(VAR_2);

 FUNC_0(VAR_2, VAR_1);

 FUNC_2(VAR_2->dev, &VAR_2->underrun_buf);
}
