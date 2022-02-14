
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsi721_dma_desc {int bcount; int type_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct tsi721_dma_desc *VAR_3, u32 VAR_4, bool VAR_5)
{
 if (!VAR_3)
  return -VAR_0;


 if (VAR_5)
  VAR_3->type_id |= FUNC_0(VAR_2);
 VAR_3->bcount |= FUNC_0(VAR_4 & VAR_1);

 return 0;
}
