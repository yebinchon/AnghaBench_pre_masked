
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct megasas_instance {size_t drv_buf_index; size_t drv_buf_alloc; size_t fw_crash_buffer_size; int host; TYPE_3__* reg_set; int fw_crash_state; TYPE_2__* pdev; TYPE_1__* instancet; int crash_dump_buf; int * crash_buf; } ;
struct TYPE_6__ {int outbound_scratch_pad_0; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int (* read_fw_status_reg ) (struct megasas_instance*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct megasas_instance*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct megasas_instance*) ;
 int FUNC_7 (struct megasas_instance*) ;
 int FUNC_8 (struct megasas_instance*) ;
 int FUNC_9 (int,int *) ;

__attribute__((used)) static void FUNC_10(struct megasas_instance *VAR_6)
{
 u32 VAR_7;
 u8 VAR_8 = 0;
 int VAR_9 = 0;


 VAR_7 = VAR_6->instancet->read_fw_status_reg(VAR_6);





 if (VAR_6->drv_buf_index == 0) {



  if (VAR_6->drv_buf_alloc) {
   FUNC_0(&VAR_6->pdev->dev, "earlier crash dump is "
    "not yet copied by application, ignoring this "
    "crash dump and initiating OCR\n");
   VAR_7 |= VAR_4;
   FUNC_9(VAR_7,
    &VAR_6->reg_set->outbound_scratch_pad_0);
   FUNC_5(&VAR_6->reg_set->outbound_scratch_pad_0);
   return;
  }
  FUNC_1(VAR_6);
  FUNC_0(&VAR_6->pdev->dev, "Number of host crash buffers "
   "allocated: %d\n", VAR_6->drv_buf_alloc);
 }

 while (!(VAR_7 & VAR_4) &&
        (VAR_9 < VAR_3)) {
  if (!(VAR_7 & VAR_5)) {





   VAR_9++;
   FUNC_4(VAR_2);
   VAR_7 = VAR_6->instancet->read_fw_status_reg(
     VAR_6);
   continue;
  }

  VAR_9 = 0;
  if (VAR_6->drv_buf_index >= VAR_6->drv_buf_alloc) {
   FUNC_0(&VAR_6->pdev->dev,
     "Driver is done copying the buffer: %d\n",
     VAR_6->drv_buf_alloc);
   VAR_7 |= VAR_4;
   VAR_8 = 1;
   break;
  } else {
   FUNC_3(VAR_6->crash_buf[VAR_6->drv_buf_index],
          VAR_6->crash_dump_buf, VAR_1);
   VAR_6->drv_buf_index++;
   VAR_7 &= ~VAR_5;
  }

  FUNC_9(VAR_7, &VAR_6->reg_set->outbound_scratch_pad_0);
  FUNC_5(&VAR_6->reg_set->outbound_scratch_pad_0);

  FUNC_4(VAR_2);
  VAR_7 = VAR_6->instancet->read_fw_status_reg(VAR_6);
 }

 if (VAR_7 & VAR_4) {
  FUNC_0(&VAR_6->pdev->dev, "Crash Dump is available,number "
   "of copied buffers: %d\n", VAR_6->drv_buf_index);
  VAR_6->fw_crash_buffer_size = VAR_6->drv_buf_index;
  VAR_6->fw_crash_state = VAR_0;
  VAR_6->drv_buf_index = 0;
  FUNC_9(VAR_7, &VAR_6->reg_set->outbound_scratch_pad_0);
  FUNC_5(&VAR_6->reg_set->outbound_scratch_pad_0);
  if (!VAR_8)
   FUNC_2(VAR_6->host, 0);
 }
}
