
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_device {int isp_ccdc; int isp_hist; int isp_aewb; int isp_af; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct isp_device *VAR_0)
{
 return FUNC_1(&VAR_0->isp_af)
     || FUNC_1(&VAR_0->isp_aewb)
     || FUNC_1(&VAR_0->isp_hist)
     || FUNC_0(&VAR_0->isp_ccdc);
}
