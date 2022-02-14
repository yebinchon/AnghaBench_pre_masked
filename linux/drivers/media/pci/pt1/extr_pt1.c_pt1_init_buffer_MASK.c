
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt1_buffer_page {scalar_t__* upackets; } ;
struct pt1_buffer {int addr; struct pt1_buffer_page* page; } ;
struct pt1 {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pt1_buffer_page* FUNC_0 (struct pt1*,int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct pt1 *VAR_2, struct pt1_buffer *VAR_3, u32 *VAR_4)
{
 struct pt1_buffer_page *VAR_5;
 dma_addr_t VAR_6;

 VAR_5 = FUNC_0(VAR_2, &VAR_6, VAR_4);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->upackets[VAR_1 - 1] = 0;

 VAR_3->page = VAR_5;
 VAR_3->addr = VAR_6;
 return 0;
}
