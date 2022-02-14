
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ptp_qoriq {int clock; struct device* dev; } ;
struct ptp_clock_event {int type; } ;
struct fsl_mc_device {int mc_handle; int mc_io; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int*) ;
 int FUNC_3 (int ,struct ptp_clock_event*) ;
 struct fsl_mc_device* FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct ptp_qoriq *VAR_7 = VAR_6;
 struct ptp_clock_event VAR_8;
 struct fsl_mc_device *VAR_9;
 struct device *VAR_10;
 u32 VAR_11 = 0;
 int VAR_12;

 VAR_10 = VAR_7->dev;
 VAR_9 = FUNC_4(VAR_10);

 VAR_12 = FUNC_2(VAR_9->mc_io, 0, VAR_9->mc_handle,
       VAR_1, &VAR_11);
 if (FUNC_5(VAR_12)) {
  FUNC_0(VAR_10, "dprtc_get_irq_status err %d\n", VAR_12);
  return VAR_3;
 }

 if (VAR_11 & VAR_0) {
  VAR_8.type = VAR_4;
  FUNC_3(VAR_7->clock, &VAR_8);
 }

 VAR_12 = FUNC_1(VAR_9->mc_io, 0, VAR_9->mc_handle,
         VAR_1, VAR_11);
 if (FUNC_5(VAR_12)) {
  FUNC_0(VAR_10, "dprtc_clear_irq_status err %d\n", VAR_12);
  return VAR_3;
 }

 return VAR_2;
}
