
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_video {int error; int irqlock; } ;


 int VAR_0 ;
 int FUNC_0 (struct isp_video*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct isp_video *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->irqlock, VAR_2);
 FUNC_0(VAR_1, VAR_0);
 VAR_1->error = 1;
 FUNC_2(&VAR_1->irqlock, VAR_2);
}
