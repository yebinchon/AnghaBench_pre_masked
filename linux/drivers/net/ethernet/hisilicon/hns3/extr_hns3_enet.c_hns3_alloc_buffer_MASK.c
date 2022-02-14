
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hns3_enet_ring {int dummy; } ;
struct hns3_desc_cb {int type; int length; int buf; scalar_t__ reuse_flag; scalar_t__ page_offset; struct page* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct hns3_enet_ring*) ;
 int FUNC_2 (struct hns3_enet_ring*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct hns3_enet_ring *VAR_2,
        struct hns3_desc_cb *VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_2);
 struct page *VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return -VAR_1;

 VAR_3->priv = VAR_5;
 VAR_3->page_offset = 0;
 VAR_3->reuse_flag = 0;
 VAR_3->buf = FUNC_3(VAR_5);
 VAR_3->length = FUNC_2(VAR_2);
 VAR_3->type = VAR_0;

 return 0;
}
