
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct venus_hfi_device {int dummy; } ;
struct TYPE_2__ {int* kva; } ;
struct iface_queue {TYPE_1__ qmem; struct hfi_queue_header* qhdr; } ;
struct hfi_queue_header {int type; int read_idx; int write_idx; int q_size; int rx_req; scalar_t__ tx_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (void*,int*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct venus_hfi_device*,void*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct venus_hfi_device *VAR_5,
       struct iface_queue *VAR_6, void *VAR_7, u32 *VAR_8)
{
 struct hfi_queue_header *VAR_9;
 u32 VAR_10, VAR_11;
 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 u32 *VAR_16;
 u32 VAR_17 = 0;
 int VAR_18 = 0;

 if (!VAR_6->qmem.kva)
  return -VAR_1;

 VAR_9 = VAR_6->qhdr;
 if (!VAR_9)
  return -VAR_1;

 VAR_14 = VAR_9->type;
 VAR_12 = VAR_9->read_idx;
 VAR_13 = VAR_9->write_idx;
 VAR_15 = VAR_9->q_size;


 FUNC_2();
 if (VAR_14 & VAR_3)
  VAR_17 = 1;

 if (VAR_12 == VAR_13) {
  VAR_9->rx_req = VAR_17;
  *VAR_8 = 0;

  FUNC_4();
  return -VAR_2;
 }

 VAR_16 = (u32 *)(VAR_6->qmem.kva + (VAR_12 << 2));
 VAR_10 = *VAR_16 >> 2;
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = VAR_12 + VAR_10;
 if (((VAR_10 << 2) <= VAR_4) && VAR_12 <= VAR_15) {
  if (VAR_11 < VAR_15) {
   FUNC_1(VAR_7, VAR_16, VAR_10 << 2);
  } else {
   size_t VAR_19;

   VAR_11 -= VAR_15;
   VAR_19 = (VAR_10 - VAR_11) << 2;
   FUNC_1(VAR_7, VAR_16, VAR_19);
   FUNC_1(VAR_7 + VAR_19, VAR_6->qmem.kva, VAR_11 << 2);
  }
 } else {

  VAR_11 = VAR_9->write_idx;
  VAR_18 = -VAR_0;
 }


 FUNC_2();

 VAR_9->read_idx = VAR_11;

 FUNC_4();

 VAR_12 = VAR_9->read_idx;
 VAR_13 = VAR_9->write_idx;

 FUNC_2();

 if (VAR_12 != VAR_13)
  VAR_9->rx_req = 0;
 else
  VAR_9->rx_req = VAR_17;

 *VAR_8 = VAR_9->tx_req ? 1 : 0;


 FUNC_0();

 FUNC_3(VAR_5, VAR_7);

 return VAR_18;
}
