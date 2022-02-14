
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_hfi_device {int suspended; scalar_t__ last_packet_type; int lock; int power_enabled; } ;
struct venus_core {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct venus_hfi_device* FUNC_3 (struct venus_core*) ;
 int FUNC_4 (struct venus_hfi_device*) ;
 int FUNC_5 (struct venus_hfi_device*) ;
 int FUNC_6 (struct venus_hfi_device*) ;
 int FUNC_7 (struct venus_hfi_device*,int) ;
 int FUNC_8 (struct venus_hfi_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct venus_core *VAR_4)
{
 struct venus_hfi_device *VAR_5 = FUNC_3(VAR_4);
 struct device *VAR_6 = VAR_4->dev;
 u32 VAR_7;
 int VAR_8;

 if (!VAR_5->power_enabled || VAR_5->suspended)
  return 0;

 FUNC_1(&VAR_5->lock);
 VAR_8 = FUNC_5(VAR_5);
 FUNC_2(&VAR_5->lock);

 if (!VAR_8) {
  FUNC_0(VAR_6, "bad state, cannot suspend\n");
  return -VAR_2;
 }

 VAR_8 = FUNC_7(VAR_5, 1);
 if (VAR_8) {
  FUNC_0(VAR_6, "prepare for power collapse fail (%d)\n", VAR_8);
  return VAR_8;
 }

 FUNC_1(&VAR_5->lock);

 if (VAR_5->last_packet_type != VAR_3) {
  FUNC_2(&VAR_5->lock);
  return -VAR_2;
 }

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8 < 0 || !VAR_8) {
  FUNC_2(&VAR_5->lock);
  return -VAR_2;
 }

 VAR_7 = FUNC_8(VAR_5, VAR_0);
 if (!(VAR_7 & VAR_1)) {
  FUNC_2(&VAR_5->lock);
  return -VAR_2;
 }

 VAR_8 = FUNC_6(VAR_5);
 if (VAR_8) {
  FUNC_2(&VAR_5->lock);
  return VAR_8;
 }

 VAR_5->suspended = 1;

 FUNC_2(&VAR_5->lock);

 return 0;
}
