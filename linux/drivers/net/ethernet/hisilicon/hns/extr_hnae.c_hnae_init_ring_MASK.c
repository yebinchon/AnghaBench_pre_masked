
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae_ring {scalar_t__ desc_num; scalar_t__ buf_size; int flags; scalar_t__ next_to_use; scalar_t__ next_to_clean; int * desc_cb; int desc_dma_addr; int desc; int coal_param; struct hnae_queue* q; } ;
struct hnae_queue {TYPE_1__* handle; } ;
struct TYPE_2__ {int coal_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hnae_ring*) ;
 int FUNC_2 (struct hnae_ring*) ;
 int FUNC_3 (struct hnae_ring*) ;
 scalar_t__ FUNC_4 (struct hnae_ring*) ;
 int * FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct hnae_queue *VAR_3, struct hnae_ring *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_4->desc_num <= 0 || VAR_4->buf_size <= 0)
  return -VAR_0;

 VAR_4->q = VAR_3;
 VAR_4->flags = VAR_5;
 VAR_4->coal_param = VAR_3->handle->coal_param;
 FUNC_0(!VAR_4->desc && !VAR_4->desc_cb && !VAR_4->desc_dma_addr);


 FUNC_0(VAR_4->next_to_use == 0);
 FUNC_0(VAR_4->next_to_clean == 0);

 VAR_4->desc_cb = FUNC_5(VAR_4->desc_num, sizeof(VAR_4->desc_cb[0]),
   VAR_2);
 if (!VAR_4->desc_cb) {
  VAR_6 = -VAR_1;
  goto out;
 }

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  goto out_with_desc_cb;

 if (FUNC_4(VAR_4)) {
  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6)
   goto out_with_desc;
 }

 return 0;

out_with_desc:
 FUNC_3(VAR_4);
out_with_desc_cb:
 FUNC_6(VAR_4->desc_cb);
 VAR_4->desc_cb = ((void*)0);
out:
 return VAR_6;
}
