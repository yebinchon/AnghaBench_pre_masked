
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_hfi_device {TYPE_1__* queues; } ;
struct hfi_queue_header {scalar_t__ write_idx; scalar_t__ read_idx; } ;
struct TYPE_2__ {struct hfi_queue_header* qhdr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct venus_hfi_device *VAR_2,
    unsigned int VAR_3)
{
 struct hfi_queue_header *VAR_4;

 if (VAR_3 >= VAR_1)
  return -VAR_0;

 VAR_4 = VAR_2->queues[VAR_3].qhdr;
 if (!VAR_4)
  return -VAR_0;

 return FUNC_0(VAR_4->read_idx - VAR_4->write_idx);
}
