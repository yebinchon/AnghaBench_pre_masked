
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct venus_hfi_device {int dummy; } ;
struct TYPE_2__ {int* kva; } ;
struct iface_queue {TYPE_1__ qmem; struct hfi_queue_header* qhdr; } ;
struct hfi_queue_header {int read_idx; int write_idx; int q_size; int tx_req; scalar_t__ rx_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int*,void*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct venus_hfi_device*,void*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct venus_hfi_device *VAR_2,
        struct iface_queue *VAR_3,
        void *VAR_4, u32 *VAR_5)
{
 struct hfi_queue_header *VAR_6;
 u32 VAR_7, VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 u32 *VAR_13;

 if (!VAR_3->qmem.kva)
  return -VAR_0;

 VAR_6 = VAR_3->qhdr;
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(VAR_2, VAR_4);

 VAR_7 = (*(u32 *)VAR_4) >> 2;
 if (!VAR_7)
  return -VAR_0;

 VAR_10 = VAR_6->read_idx;
 VAR_11 = VAR_6->write_idx;
 VAR_12 = VAR_6->q_size;

 FUNC_2();

 if (VAR_11 >= VAR_10)
  VAR_9 = VAR_12 - (VAR_11 - VAR_10);
 else
  VAR_9 = VAR_10 - VAR_11;

 if (VAR_9 <= VAR_7) {
  VAR_6->tx_req = 1;

  FUNC_4();
  return -VAR_1;
 }

 VAR_6->tx_req = 0;

 FUNC_4();

 VAR_8 = VAR_11 + VAR_7;
 VAR_13 = (u32 *)(VAR_3->qmem.kva + (VAR_11 << 2));
 if (VAR_8 < VAR_12) {
  FUNC_1(VAR_13, VAR_4, VAR_7 << 2);
 } else {
  size_t VAR_14;

  VAR_8 -= VAR_12;
  VAR_14 = (VAR_7 - VAR_8) << 2;
  FUNC_1(VAR_13, VAR_4, VAR_14);
  FUNC_1(VAR_3->qmem.kva, VAR_4 + VAR_14, VAR_8 << 2);
 }


 FUNC_4();

 VAR_6->write_idx = VAR_8;
 *VAR_5 = VAR_6->rx_req ? 1 : 0;


 FUNC_0();

 return 0;
}
