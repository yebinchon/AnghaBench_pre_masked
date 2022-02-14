
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct octeon_droq_info {scalar_t__ length; } ;
struct TYPE_5__ {int bytes_received; } ;
struct octeon_droq {size_t read_idx; scalar_t__ refill_count; int max_count; int buffer_size; TYPE_2__ stats; TYPE_1__* recv_buf_list; } ;
struct octeon_device {TYPE_3__* pci_dev; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 size_t FUNC_1 (size_t,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static inline void FUNC_4(struct octeon_device *VAR_1,
         struct octeon_droq *VAR_2,
         u32 VAR_3)
{
 u32 VAR_4 = 0, VAR_5;
 struct octeon_droq_info *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_6 = (struct octeon_droq_info *)
   VAR_2->recv_buf_list[VAR_2->read_idx].data;
  FUNC_3((u64 *)VAR_6, 2);

  if (VAR_6->length) {
   VAR_6->length += VAR_0;
   VAR_2->stats.bytes_received += VAR_6->length;
   VAR_5 = FUNC_2(VAR_2->buffer_size,
          (u32)VAR_6->length);
  } else {
   FUNC_0(&VAR_1->pci_dev->dev, "DROQ: In drop: pkt with len 0\n");
   VAR_5 = 1;
  }

  VAR_2->read_idx = FUNC_1(VAR_2->read_idx, VAR_5,
         VAR_2->max_count);
  VAR_2->refill_count += VAR_5;
 }
}
