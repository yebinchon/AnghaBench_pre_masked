
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ena_com_mmio_read {scalar_t__ reg_read_to; int seq_num; int lock; int readless_supported; struct ena_admin_ena_mmio_req_read_less_resp* read_resp; } ;
struct ena_com_dev {scalar_t__ reg_bar; struct ena_com_mmio_read mmio_read; } ;
struct ena_admin_ena_mmio_req_read_less_resp {int req_id; scalar_t__ reg_off; scalar_t__ reg_val; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static u32 FUNC_9(struct ena_com_dev *VAR_6, u16 VAR_7)
{
 struct ena_com_mmio_read *VAR_8 = &VAR_6->mmio_read;
 volatile struct ena_admin_ena_mmio_req_read_less_resp *VAR_9 =
  VAR_8->read_resp;
 u32 VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13 = 0;
 u32 VAR_14 = VAR_8->reg_read_to;

 FUNC_1();

 if (VAR_14 == 0)
  VAR_14 = VAR_5;


 if (!VAR_8->readless_supported)
  return FUNC_3(VAR_6->reg_bar + VAR_7);

 FUNC_4(&VAR_8->lock, VAR_13);
 VAR_8->seq_num++;

 VAR_9->req_id = VAR_8->seq_num + 0xDEAD;
 VAR_10 = (VAR_7 << VAR_3) &
   VAR_2;
 VAR_10 |= VAR_8->seq_num &
   VAR_4;

 FUNC_8(VAR_10, VAR_6->reg_bar + VAR_1);

 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
  if (FUNC_0(VAR_9->req_id) == VAR_8->seq_num)
   break;

  FUNC_6(1);
 }

 if (FUNC_7(VAR_12 == VAR_14)) {
  FUNC_2("reading reg failed for timeout. expected: req id[%hu] offset[%hu] actual: req id[%hu] offset[%hu]\n",
         VAR_8->seq_num, VAR_7, VAR_9->req_id,
         VAR_9->reg_off);
  VAR_11 = VAR_0;
  goto err;
 }

 if (VAR_9->reg_off != VAR_7) {
  FUNC_2("Read failure: wrong offset provided\n");
  VAR_11 = VAR_0;
 } else {
  VAR_11 = VAR_9->reg_val;
 }
err:
 FUNC_5(&VAR_8->lock, VAR_13);

 return VAR_11;
}
