
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct esas2r_flash_img {void* status; } ;
typedef struct esas2r_flash_img u8 ;
struct esas2r_request {int comp_cb; } ;
struct TYPE_5__ {scalar_t__ header_buff_phys; struct esas2r_flash_img* header_buff; struct esas2r_flash_img header; } ;
struct TYPE_6__ {struct esas2r_flash_img* cur_offset; void* get_phys_addr; } ;
struct esas2r_adapter {int fm_api_mutex; TYPE_2__ firmware; TYPE_1__* pcid; scalar_t__ fm_api_command_done; int fm_api_waiter; TYPE_3__ fm_api_sgc; struct esas2r_flash_img* save_offset; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;
typedef void* PGETPHYSADDR ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct esas2r_flash_img* FUNC_0 (int *,size_t,int *,int ) ;
 int FUNC_1 (int *,size_t,struct esas2r_flash_img*,int ) ;
 struct esas2r_request* FUNC_2 (struct esas2r_adapter*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct esas2r_adapter*,struct esas2r_flash_img*,struct esas2r_request*,TYPE_3__*) ;
 int FUNC_5 (struct esas2r_adapter*,struct esas2r_request*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct esas2r_flash_img*,struct esas2r_flash_img*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct esas2r_adapter *VAR_5, struct esas2r_flash_img *VAR_6)
{
 struct esas2r_request *VAR_7;

 if (FUNC_7(&VAR_5->fm_api_mutex)) {
  VAR_6->status = VAR_0;
  return;
 }

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 == ((void*)0)) {
  VAR_6->status = VAR_0;
  goto free_sem;
 }

 if (VAR_6 == &VAR_5->firmware.header) {
  VAR_5->firmware.header_buff = FUNC_0(&VAR_5->pcid->dev,
            (size_t)sizeof(
             struct
             esas2r_flash_img),
            (dma_addr_t *)&VAR_5->
            firmware.
            header_buff_phys,
            VAR_1);

  if (VAR_5->firmware.header_buff == ((void*)0)) {
   FUNC_3("failed to allocate header buffer!");
   VAR_6->status = VAR_0;
   goto free_req;
  }

  FUNC_6(VAR_5->firmware.header_buff, VAR_6,
         sizeof(struct esas2r_flash_img));
  VAR_5->save_offset = VAR_5->firmware.header_buff;
  VAR_5->fm_api_sgc.get_phys_addr =
   (PGETPHYSADDR)VAR_4;
 } else {
  VAR_5->save_offset = (u8 *)VAR_6;
  VAR_5->fm_api_sgc.get_phys_addr =
   (PGETPHYSADDR)VAR_3;
 }

 VAR_7->comp_cb = VAR_2;
 VAR_5->fm_api_command_done = 0;
 VAR_5->fm_api_sgc.cur_offset = VAR_5->save_offset;

 if (!FUNC_4(VAR_5, (struct esas2r_flash_img *)VAR_5->save_offset, VAR_7,
      &VAR_5->fm_api_sgc))
  goto all_done;


 while (!VAR_5->fm_api_command_done)
  FUNC_9(VAR_5->fm_api_waiter,
      VAR_5->fm_api_command_done);
all_done:
 if (VAR_6 == &VAR_5->firmware.header) {
  FUNC_6(VAR_6, VAR_5->firmware.header_buff,
         sizeof(struct esas2r_flash_img));

  FUNC_1(&VAR_5->pcid->dev,
      (size_t)sizeof(struct esas2r_flash_img),
      VAR_5->firmware.header_buff,
      (dma_addr_t)VAR_5->firmware.header_buff_phys);
 }
free_req:
 FUNC_5(VAR_5, (struct esas2r_request *)VAR_7);
free_sem:
 FUNC_8(&VAR_5->fm_api_mutex);
 return;

}
