
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_media_fim {int lock; } ;
typedef int ktime_t ;


 int FUNC_0 (struct imx_media_fim*,int ) ;
 int FUNC_1 (struct imx_media_fim*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct imx_media_fim *VAR_0, ktime_t VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->lock, VAR_2);

 if (!FUNC_1(VAR_0))
  FUNC_0(VAR_0, VAR_1);

 FUNC_3(&VAR_0->lock, VAR_2);
}
