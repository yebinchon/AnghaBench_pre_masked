
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct be_mcc_wrb {int dummy; } ;
struct TYPE_2__ {void* data_buf_size; void* op_code; void* offset; void* op_type; } ;
struct be_cmd_read_flash_crc {int crc; TYPE_1__ params; int hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_2 (int) ;
 struct be_cmd_read_flash_crc* FUNC_3 (struct be_mcc_wrb*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct be_mcc_wrb* FUNC_7 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_8(struct be_adapter *VAR_5, u8 *VAR_6,
    u16 VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct be_cmd_read_flash_crc *VAR_10;
 struct be_mcc_wrb *VAR_11;
 int VAR_12;

 FUNC_5(&VAR_5->mcc_lock);

 VAR_11 = FUNC_7(VAR_5);
 if (!VAR_11) {
  VAR_12 = -VAR_1;
  goto err;
 }
 VAR_10 = FUNC_3(VAR_11);

 FUNC_1(&VAR_10->hdr, VAR_0,
          VAR_3, sizeof(*VAR_10),
          VAR_11, ((void*)0));

 VAR_10->params.op_type = FUNC_2(VAR_7);
 if (VAR_7 == VAR_4)
  VAR_10->params.offset = FUNC_2(VAR_8 + VAR_9);
 else
  VAR_10->params.offset = FUNC_2(VAR_9);

 VAR_10->params.op_code = FUNC_2(VAR_2);
 VAR_10->params.data_buf_size = FUNC_2(0x4);

 VAR_12 = FUNC_0(VAR_5);
 if (!VAR_12)
  FUNC_4(VAR_6, VAR_10->crc, 4);

err:
 FUNC_6(&VAR_5->mcc_lock);
 return VAR_12;
}
