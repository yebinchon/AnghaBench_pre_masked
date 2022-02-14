
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {unsigned int hdr_len; } ;
struct skb_shared_info {int dummy; } ;
struct page_frag {int offset; int page; } ;
struct receive_queue {int sg; int vq; struct page_frag alloc_frag; } ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,unsigned int) ;
 int FUNC_5 (int,struct page_frag*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 unsigned int FUNC_8 (struct virtnet_info*) ;
 int FUNC_9 (int ,int ,int,char*,void*,int ) ;

__attribute__((used)) static int FUNC_10(struct virtnet_info *VAR_3, struct receive_queue *VAR_4,
        gfp_t VAR_5)
{
 struct page_frag *VAR_6 = &VAR_4->alloc_frag;
 char *VAR_7;
 unsigned int VAR_8 = FUNC_8(VAR_3);
 void *VAR_9 = (void *)(unsigned long)VAR_8;
 int VAR_10 = VAR_3->hdr_len + VAR_2 + VAR_1 + VAR_8;
 int VAR_11;

 VAR_10 = FUNC_0(VAR_10) +
       FUNC_0(sizeof(struct skb_shared_info));
 if (FUNC_6(!FUNC_5(VAR_10, VAR_6, VAR_5)))
  return -VAR_0;

 VAR_7 = (char *)FUNC_2(VAR_6->page) + VAR_6->offset;
 FUNC_1(VAR_6->page);
 VAR_6->offset += VAR_10;
 FUNC_4(VAR_4->sg, VAR_7 + VAR_2 + VAR_8,
      VAR_3->hdr_len + VAR_1);
 VAR_11 = FUNC_9(VAR_4->vq, VAR_4->sg, 1, VAR_7, VAR_9, VAR_5);
 if (VAR_11 < 0)
  FUNC_3(FUNC_7(VAR_7));
 return VAR_11;
}
