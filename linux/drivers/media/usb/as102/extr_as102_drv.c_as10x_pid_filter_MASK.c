
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u16 ;
struct as10x_ts_filter {int idx; int pid; int type; } ;
struct as10x_bus_adapter_t {int lock; TYPE_1__* usb_dev; } ;
struct as102_dev_t {struct as10x_bus_adapter_t bus_adap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct as10x_bus_adapter_t*,struct as10x_ts_filter*) ;
 int FUNC_1 (struct as10x_bus_adapter_t*,int ) ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct as102_dev_t *VAR_3,
       int VAR_4, u16 VAR_5, int VAR_6) {

 struct as10x_bus_adapter_t *VAR_7 = &VAR_3->bus_adap;
 int VAR_8 = -VAR_1;

 if (FUNC_3(&VAR_3->bus_adap.lock)) {
  FUNC_2(&VAR_3->bus_adap.usb_dev->dev,
   "amutex_lock_interruptible(lock) failed !\n");
  return -VAR_0;
 }

 switch (VAR_6) {
 case 0:
  VAR_8 = FUNC_1(VAR_7, (uint16_t) VAR_5);
  FUNC_2(&VAR_3->bus_adap.usb_dev->dev,
   "DEL_PID_FILTER([%02d] 0x%04x) ret = %d\n",
   VAR_4, VAR_5, VAR_8);
  break;
 case 1:
 {
  struct as10x_ts_filter VAR_9;

  VAR_9.type = VAR_2;
  VAR_9.idx = 0xFF;
  VAR_9.pid = VAR_5;

  VAR_8 = FUNC_0(VAR_7, &VAR_9);
  FUNC_2(&VAR_3->bus_adap.usb_dev->dev,
   "ADD_PID_FILTER([%02d -> %02d], 0x%04x) ret = %d\n",
   VAR_4, VAR_9.idx, VAR_9.pid, VAR_8);
  break;
 }
 }

 FUNC_4(&VAR_3->bus_adap.lock);
 return VAR_8;
}
