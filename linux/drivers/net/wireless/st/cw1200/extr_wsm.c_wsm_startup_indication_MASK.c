
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wsm_buf {int dummy; } ;
struct TYPE_4__ {int status; int fw_cap; int fw_type; void* fw_api; void* fw_build; void* fw_ver; scalar_t__* fw_label; void* hw_subid; void* hw_id; void* input_buffer_size; void* input_buffers; } ;
struct cw1200_common {int firmware_ready; int wsm_startup_done; TYPE_3__* hw; TYPE_1__ wsm_caps; } ;
struct TYPE_6__ {TYPE_2__* wiphy; } ;
struct TYPE_5__ {int ** bands; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct wsm_buf*,scalar_t__*,int) ;
 void* FUNC_2 (struct wsm_buf*) ;
 int * VAR_3 ;
 int FUNC_3 (char*,void*,void*,void*,void*,int ,scalar_t__*,void*,void*,void*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct cw1200_common *VAR_4,
     struct wsm_buf *VAR_5)
{
 VAR_4->wsm_caps.input_buffers = FUNC_2(VAR_5);
 VAR_4->wsm_caps.input_buffer_size = FUNC_2(VAR_5);
 VAR_4->wsm_caps.hw_id = FUNC_2(VAR_5);
 VAR_4->wsm_caps.hw_subid = FUNC_2(VAR_5);
 VAR_4->wsm_caps.status = FUNC_2(VAR_5);
 VAR_4->wsm_caps.fw_cap = FUNC_2(VAR_5);
 VAR_4->wsm_caps.fw_type = FUNC_2(VAR_5);
 VAR_4->wsm_caps.fw_api = FUNC_2(VAR_5);
 VAR_4->wsm_caps.fw_build = FUNC_2(VAR_5);
 VAR_4->wsm_caps.fw_ver = FUNC_2(VAR_5);
 FUNC_1(VAR_5, VAR_4->wsm_caps.fw_label, sizeof(VAR_4->wsm_caps.fw_label));
 VAR_4->wsm_caps.fw_label[sizeof(VAR_4->wsm_caps.fw_label) - 1] = 0;

 if (FUNC_0(VAR_4->wsm_caps.status))
  return -VAR_0;

 if (FUNC_0(VAR_4->wsm_caps.fw_type > 4))
  return -VAR_0;

 FUNC_3("CW1200 WSM init done.\n"
  "   Input buffers: %d x %d bytes\n"
  "   Hardware: %d.%d\n"
  "   %s firmware [%s], ver: %d, build: %d,"
  "   api: %d, cap: 0x%.4X\n",
  VAR_4->wsm_caps.input_buffers,
  VAR_4->wsm_caps.input_buffer_size,
  VAR_4->wsm_caps.hw_id, VAR_4->wsm_caps.hw_subid,
  VAR_3[VAR_4->wsm_caps.fw_type],
  VAR_4->wsm_caps.fw_label, VAR_4->wsm_caps.fw_ver,
  VAR_4->wsm_caps.fw_build,
  VAR_4->wsm_caps.fw_api, VAR_4->wsm_caps.fw_cap);


 if (!(VAR_4->wsm_caps.fw_cap & 0x1))
  VAR_4->hw->wiphy->bands[VAR_1] = ((void*)0);
 if (!(VAR_4->wsm_caps.fw_cap & 0x2))
  VAR_4->hw->wiphy->bands[VAR_2] = ((void*)0);

 VAR_4->firmware_ready = 1;
 FUNC_4(&VAR_4->wsm_startup_done);
 return 0;

underflow:
 FUNC_0(1);
 return -VAR_0;
}
