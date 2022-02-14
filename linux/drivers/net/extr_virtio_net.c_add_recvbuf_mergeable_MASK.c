
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {int dummy; } ;
struct skb_shared_info {int dummy; } ;
struct page_frag {int offset; unsigned int size; int page; } ;
struct receive_queue {int sg; int vq; int mrg_avg_pkt_len; struct page_frag alloc_frag; } ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct receive_queue*,int *,unsigned int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,unsigned int) ;
 int FUNC_7 (unsigned int,struct page_frag*,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 unsigned int FUNC_10 (struct virtnet_info*) ;
 int FUNC_11 (int ,int ,int,char*,void*,int ) ;

__attribute__((used)) static int FUNC_12(struct virtnet_info *VAR_1,
     struct receive_queue *VAR_2, gfp_t VAR_3)
{
 struct page_frag *VAR_4 = &VAR_2->alloc_frag;
 unsigned int VAR_5 = FUNC_10(VAR_1);
 unsigned int VAR_6 = VAR_5 ? sizeof(struct skb_shared_info) : 0;
 unsigned int VAR_7 = FUNC_0(VAR_5 + VAR_6);
 char *VAR_8;
 void *VAR_9;
 int VAR_10;
 unsigned int VAR_11, VAR_12;





 VAR_11 = FUNC_1(VAR_2, &VAR_2->mrg_avg_pkt_len, VAR_7);
 if (FUNC_8(!FUNC_7(VAR_11 + VAR_7, VAR_4, VAR_3)))
  return -VAR_0;

 VAR_8 = (char *)FUNC_4(VAR_4->page) + VAR_4->offset;
 VAR_8 += VAR_5;
 FUNC_2(VAR_4->page);
 VAR_4->offset += VAR_11 + VAR_7;
 VAR_12 = VAR_4->size - VAR_4->offset;
 if (VAR_12 < VAR_11 + VAR_7) {




  VAR_11 += VAR_12;
  VAR_4->offset += VAR_12;
 }

 FUNC_6(VAR_2->sg, VAR_8, VAR_11);
 VAR_9 = FUNC_3(VAR_11, VAR_5);
 VAR_10 = FUNC_11(VAR_2->vq, VAR_2->sg, 1, VAR_8, VAR_9, VAR_3);
 if (VAR_10 < 0)
  FUNC_5(FUNC_9(VAR_8));

 return VAR_10;
}
