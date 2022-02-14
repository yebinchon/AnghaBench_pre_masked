
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct esas2r_sg_context {int cur_offset; scalar_t__ adapter; } ;
struct esas2r_flash_img {int dummy; } ;
struct TYPE_2__ {scalar_t__ header_buff_phys; } ;
struct esas2r_adapter {int save_offset; TYPE_1__ firmware; } ;



__attribute__((used)) static u32 FUNC_0(struct esas2r_sg_context *VAR_0, u64 *VAR_1)
{
 struct esas2r_adapter *VAR_2 = (struct esas2r_adapter *)VAR_0->adapter;
 int VAR_3 = VAR_0->cur_offset - VAR_2->save_offset;

 (*VAR_1) = VAR_2->firmware.header_buff_phys + VAR_3;
 return sizeof(struct esas2r_flash_img) - VAR_3;
}
