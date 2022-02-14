
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bnx2x_ilt {int start_line; TYPE_1__* lines; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int page_mapping; } ;





 int FUNC_0 (struct bnx2x*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_0,
       struct bnx2x_ilt *VAR_1, int VAR_2, u8 VAR_3)
{
 dma_addr_t VAR_4;
 int VAR_5 = VAR_1->start_line + VAR_2;


 switch (VAR_3) {
 case 129:

 case 128:
  FUNC_0(VAR_0, VAR_5, VAR_1->lines[VAR_2].page_mapping);
  break;
 case 130:
  VAR_4 = 0;
  FUNC_0(VAR_0, VAR_5, VAR_4);
  break;
 }
}
