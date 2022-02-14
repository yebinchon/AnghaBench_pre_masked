
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx7_csi {int dummy; } ;


 int FUNC_0 (struct imx7_csi*) ;
 int FUNC_1 (struct imx7_csi*) ;
 int FUNC_2 (struct imx7_csi*) ;
 int FUNC_3 (struct imx7_csi*) ;

__attribute__((used)) static int FUNC_4(struct imx7_csi *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 < 0)
  goto dma_stop;

 FUNC_3(VAR_0);

 return 0;

dma_stop:
 FUNC_2(VAR_0);

 return VAR_1;
}
