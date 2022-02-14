
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_device {int media_dev; int v4l2_dev; int isp_hist; int isp_af; int isp_aewb; int isp_res; int isp_prev; int isp_ccdc; int isp_ccp2; int isp_csi2a; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct isp_device *VAR_0)
{
 FUNC_1(&VAR_0->media_dev);

 FUNC_4(&VAR_0->isp_csi2a);
 FUNC_3(&VAR_0->isp_ccp2);
 FUNC_2(&VAR_0->isp_ccdc);
 FUNC_5(&VAR_0->isp_prev);
 FUNC_6(&VAR_0->isp_res);
 FUNC_7(&VAR_0->isp_aewb);
 FUNC_7(&VAR_0->isp_af);
 FUNC_7(&VAR_0->isp_hist);

 FUNC_8(&VAR_0->v4l2_dev);
 FUNC_0(&VAR_0->media_dev);
}
