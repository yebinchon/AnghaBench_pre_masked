
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vnic_wq_buf {unsigned int index; struct vnic_wq_buf* prev; struct vnic_wq_buf* next; int * desc; } ;
struct TYPE_2__ {unsigned int desc_count; int desc_size; scalar_t__ descs; } ;
struct vnic_wq {struct vnic_wq_buf** bufs; struct vnic_wq_buf* to_clean; struct vnic_wq_buf* to_use; TYPE_1__ ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 struct vnic_wq_buf* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct vnic_wq *VAR_2)
{
 struct vnic_wq_buf *VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6 = VAR_2->ring.desc_count;
 unsigned int VAR_7 = FUNC_0(VAR_6);

 for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
  VAR_2->bufs[VAR_4] = FUNC_3(FUNC_2(VAR_6), VAR_1);
  if (!VAR_2->bufs[VAR_4])
   return -VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
  VAR_3 = VAR_2->bufs[VAR_4];
  for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_6); VAR_5++) {
   VAR_3->index = VAR_4 * FUNC_1(VAR_6) + VAR_5;
   VAR_3->desc = (u8 *)VAR_2->ring.descs +
    VAR_2->ring.desc_size * VAR_3->index;
   if (VAR_3->index + 1 == VAR_6) {
    VAR_3->next = VAR_2->bufs[0];
    VAR_3->next->prev = VAR_3;
    break;
   } else if (VAR_5 + 1 == FUNC_1(VAR_6)) {
    VAR_3->next = VAR_2->bufs[VAR_4 + 1];
    VAR_3->next->prev = VAR_3;
   } else {
    VAR_3->next = VAR_3 + 1;
    VAR_3->next->prev = VAR_3;
    VAR_3++;
   }
  }
 }

 VAR_2->to_use = VAR_2->to_clean = VAR_2->bufs[0];

 return 0;
}
