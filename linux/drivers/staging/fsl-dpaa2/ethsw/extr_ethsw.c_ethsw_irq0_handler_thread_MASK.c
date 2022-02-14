
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ethsw_core {int dpsw_handle; int mc_io; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct ethsw_core* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int ,int*) ;
 int FUNC_4 (struct ethsw_core*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct device *VAR_5 = (struct device *)VAR_4;
 struct ethsw_core *VAR_6 = FUNC_1(VAR_5);


 u32 VAR_7 = VAR_0 | 0xFFFF0000;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_6->mc_io, 0, VAR_6->dpsw_handle,
      VAR_1, &VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_5, "Can't get irq status (err %d)\n", VAR_8);

  VAR_8 = FUNC_2(VAR_6->mc_io, 0, VAR_6->dpsw_handle,
         VAR_1, 0xFFFFFFFF);
  if (VAR_8)
   FUNC_0(VAR_5, "Can't clear irq status (err %d)\n", VAR_8);
  goto out;
 }

 if (VAR_7 & VAR_0)
  FUNC_4(VAR_6);

out:
 return VAR_2;
}
