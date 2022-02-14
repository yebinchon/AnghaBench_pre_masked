
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_qoriq {int dummy; } ;
struct device {int dummy; } ;
struct fsl_mc_device {int mc_io; int mc_handle; struct device dev; } ;


 struct ptp_qoriq* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_mc_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ptp_qoriq*) ;

__attribute__((used)) static int FUNC_5(struct fsl_mc_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct ptp_qoriq *VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 VAR_0 = -1;
 FUNC_4(VAR_3);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1->mc_io, 0, VAR_1->mc_handle);
 FUNC_3(VAR_1->mc_io);

 return 0;
}
