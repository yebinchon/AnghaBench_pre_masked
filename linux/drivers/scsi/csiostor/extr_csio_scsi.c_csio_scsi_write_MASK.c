
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct csio_wr_pair {scalar_t__ size1; void* addr1; void* addr2; } ;
struct csio_scsim {int proto_cmd_len; } ;
struct csio_ioreq {int eq_idx; int drv_status; TYPE_1__* lnode; } ;
struct csio_hw {int dummy; } ;
struct TYPE_2__ {struct csio_hw* hwp; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct csio_ioreq*,int ,scalar_t__,int ) ;
 struct csio_scsim* FUNC_2 (struct csio_hw*) ;
 int * FUNC_3 (struct csio_hw*,int ) ;
 int FUNC_4 (struct csio_ioreq*,void*,scalar_t__) ;
 int FUNC_5 (struct csio_hw*,int ,scalar_t__,struct csio_wr_pair*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (void*,int *,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_8(struct csio_ioreq *VAR_1)
{
 struct csio_wr_pair VAR_2;
 uint32_t VAR_3;
 struct csio_hw *VAR_4 = VAR_1->lnode->hwp;
 struct csio_scsim *VAR_5 = FUNC_2(VAR_4);

 FUNC_1(VAR_1, VAR_0, VAR_3, VAR_5->proto_cmd_len);
 VAR_3 = FUNC_0(VAR_3, 16);

 VAR_1->drv_status = FUNC_5(VAR_4, VAR_1->eq_idx, VAR_3, &VAR_2);
 if (FUNC_6(VAR_1->drv_status == 0)) {
  if (FUNC_6(VAR_2.size1 >= VAR_3)) {

   FUNC_4(VAR_1, VAR_2.addr1, VAR_3);
  } else {
   uint8_t *VAR_6 = FUNC_3(VAR_4, VAR_1->eq_idx);




   FUNC_4(VAR_1, (void *)VAR_6, VAR_3);
   FUNC_7(VAR_2.addr1, VAR_6, VAR_2.size1);
   FUNC_7(VAR_2.addr2, VAR_6 + VAR_2.size1, VAR_3 - VAR_2.size1);
  }
 }
}
