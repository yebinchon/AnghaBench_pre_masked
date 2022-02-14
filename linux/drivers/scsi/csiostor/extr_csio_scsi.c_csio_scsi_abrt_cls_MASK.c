
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct fw_scsi_abrt_cls_wr {int dummy; } ;
struct csio_wr_pair {scalar_t__ size1; void* addr1; void* addr2; } ;
struct csio_ioreq {int eq_idx; int drv_status; TYPE_1__* lnode; } ;
struct csio_hw {int dummy; } ;
struct TYPE_2__ {struct csio_hw* hwp; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int * FUNC_1 (struct csio_hw*,int ) ;
 int FUNC_2 (struct csio_ioreq*,void*,scalar_t__,int) ;
 int FUNC_3 (struct csio_hw*,int ,scalar_t__,struct csio_wr_pair*) ;
 int FUNC_4 (void*,int *,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_5(struct csio_ioreq *VAR_0, bool VAR_1)
{
 struct csio_wr_pair VAR_2;
 struct csio_hw *VAR_3 = VAR_0->lnode->hwp;
 uint32_t VAR_4 = FUNC_0(sizeof(struct fw_scsi_abrt_cls_wr), 16);

 VAR_0->drv_status = FUNC_3(VAR_3, VAR_0->eq_idx, VAR_4, &VAR_2);
 if (VAR_0->drv_status != 0)
  return;

 if (VAR_2.size1 >= VAR_4) {

  FUNC_2(VAR_0, VAR_2.addr1, VAR_4, VAR_1);
 } else {
  uint8_t *VAR_5 = FUNC_1(VAR_3, VAR_0->eq_idx);




  FUNC_2(VAR_0, (void *)VAR_5, VAR_4, VAR_1);
  FUNC_4(VAR_2.addr1, VAR_5, VAR_2.size1);
  FUNC_4(VAR_2.addr2, VAR_5 + VAR_2.size1, VAR_4 - VAR_2.size1);
 }
}
