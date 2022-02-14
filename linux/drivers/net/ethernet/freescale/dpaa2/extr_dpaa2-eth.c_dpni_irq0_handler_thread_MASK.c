
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct fsl_mc_device {int mc_handle; int mc_io; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ,int ,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 struct fsl_mc_device* FUNC_6 (struct device*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_4, void *VAR_5)
{
 u32 VAR_6 = ~0;
 struct device *VAR_7 = (struct device *)VAR_5;
 struct fsl_mc_device *VAR_8 = FUNC_6(VAR_7);
 struct net_device *VAR_9 = FUNC_0(VAR_7);
 int VAR_10;

 VAR_10 = FUNC_1(VAR_8->mc_io, 0, VAR_8->mc_handle,
      VAR_2, &VAR_6);
 if (FUNC_7(VAR_10)) {
  FUNC_3(VAR_9, "Can't get irq status (err %d)\n", VAR_10);
  return VAR_3;
 }

 if (VAR_6 & VAR_1)
  FUNC_2(FUNC_4(VAR_9));

 if (VAR_6 & VAR_0)
  FUNC_5(FUNC_4(VAR_9));

 return VAR_3;
}
