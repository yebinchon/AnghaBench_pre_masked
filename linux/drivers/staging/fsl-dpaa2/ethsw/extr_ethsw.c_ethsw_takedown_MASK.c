
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct fsl_mc_device {struct device dev; } ;
struct ethsw_core {int dpsw_handle; int mc_io; } ;


 struct ethsw_core* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct fsl_mc_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct ethsw_core *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 FUNC_3(VAR_1);

 VAR_3 = FUNC_2(VAR_2->mc_io, 0, VAR_2->dpsw_handle);
 if (VAR_3)
  FUNC_1(VAR_1, "dpsw_close err %d\n", VAR_3);
}
