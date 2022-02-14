
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct fsl_mc_device {struct device dev; } ;
struct ethsw_core {int dpsw_handle; int mc_io; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct ethsw_core* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct fsl_mc_device*) ;

__attribute__((used)) static void FUNC_4(struct fsl_mc_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct ethsw_core *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->mc_io, 0, VAR_3->dpsw_handle,
      VAR_0, 0);
 if (VAR_4)
  FUNC_0(VAR_2, "dpsw_set_irq_enable err %d\n", VAR_4);

 FUNC_3(VAR_1);
}
