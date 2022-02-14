
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct dsi_data {int errors; int errors_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_3 ;
 struct dsi_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct platform_device *VAR_4, u32 VAR_5,
  u32 *VAR_6, u32 VAR_7)
{
 struct dsi_data *VAR_8 = FUNC_1(VAR_4);
 int VAR_9;

 if (VAR_5 & VAR_1) {
  FUNC_0("DSI error, irqstatus %x\n", VAR_5);
  FUNC_2(VAR_5);
  FUNC_5(&VAR_8->errors_lock);
  VAR_8->errors |= VAR_5 & VAR_1;
  FUNC_6(&VAR_8->errors_lock);
 } else if (VAR_3) {
  FUNC_2(VAR_5);
 }

 for (VAR_9 = 0; VAR_9 < 4; ++VAR_9) {
  if (VAR_6[VAR_9] & VAR_2) {
   FUNC_0("DSI VC(%d) error, vc irqstatus %x\n",
           VAR_9, VAR_6[VAR_9]);
   FUNC_4(VAR_9, VAR_6[VAR_9]);
  } else if (VAR_3) {
   FUNC_4(VAR_9, VAR_6[VAR_9]);
  }
 }

 if (VAR_7 & VAR_0) {
  FUNC_0("DSI CIO error, cio irqstatus %x\n", VAR_7);
  FUNC_3(VAR_7);
 } else if (VAR_3) {
  FUNC_3(VAR_7);
 }
}
