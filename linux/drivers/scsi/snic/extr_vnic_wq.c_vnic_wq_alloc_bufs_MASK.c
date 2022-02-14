
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vnic_wq_buf {unsigned int index; struct vnic_wq_buf* next; int * desc; } ;
struct TYPE_2__ {unsigned int desc_count; int desc_size; scalar_t__ descs; } ;
struct vnic_wq {struct vnic_wq_buf** bufs; struct vnic_wq_buf* to_clean; struct vnic_wq_buf* to_use; TYPE_1__ ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 struct vnic_wq_buf* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct vnic_wq *VAR_4)
{
 struct vnic_wq_buf *VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8 = VAR_4->ring.desc_count;
 unsigned int VAR_9 = FUNC_0(VAR_8);

 for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
  VAR_4->bufs[VAR_6] = FUNC_1(VAR_2, VAR_1);
  if (!VAR_4->bufs[VAR_6]) {
   FUNC_2("Failed to alloc wq_bufs\n");

   return -VAR_0;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
  VAR_5 = VAR_4->bufs[VAR_6];
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
   VAR_5->index = VAR_6 * VAR_3 + VAR_7;
   VAR_5->desc = (u8 *)VAR_4->ring.descs +
    VAR_4->ring.desc_size * VAR_5->index;
   if (VAR_5->index + 1 == VAR_8) {
    VAR_5->next = VAR_4->bufs[0];
    break;
   } else if (VAR_7 + 1 == VAR_3) {
    VAR_5->next = VAR_4->bufs[VAR_6 + 1];
   } else {
    VAR_5->next = VAR_5 + 1;
    VAR_5++;
   }
  }
 }

 VAR_4->to_use = VAR_4->to_clean = VAR_4->bufs[0];

 return 0;
}
