
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bsg_buffer {int sg_cnt; size_t payload_len; int sg_list; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct device*,size_t,int *,int ) ;
 int FUNC_1 (struct device*,int ,int,int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct device *VAR_3, struct bsg_buffer *VAR_4,
  dma_addr_t *VAR_5, size_t *VAR_6, void **VAR_7)
{

 if (VAR_4->sg_cnt > 1) {
  *VAR_7 = FUNC_0(VAR_3, VAR_4->payload_len, VAR_5,
    VAR_2);
  if (!*VAR_7)
   return -VAR_1;
  *VAR_6 = VAR_4->payload_len;
 } else {
  if (!FUNC_1(VAR_3, VAR_4->sg_list, 1, VAR_0))
   return -VAR_1;
  *VAR_5 = FUNC_2(VAR_4->sg_list);
  *VAR_6 = FUNC_3(VAR_4->sg_list);
  *VAR_7 = ((void*)0);
 }

 return 0;
}
