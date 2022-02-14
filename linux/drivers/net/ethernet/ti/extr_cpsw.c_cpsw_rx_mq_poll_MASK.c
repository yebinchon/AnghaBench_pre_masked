
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct napi_struct {int dummy; } ;
struct cpsw_vector {int budget; int ch; } ;
struct cpsw_common {TYPE_1__* wr_regs; struct cpsw_vector* rxv; int dma; } ;
struct TYPE_2__ {int rx_en; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct napi_struct*,int) ;
 struct cpsw_common* FUNC_3 (struct napi_struct*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static int FUNC_6(struct napi_struct *VAR_0, int VAR_1)
{
 u32 VAR_2;
 int VAR_3, VAR_4, VAR_5;
 struct cpsw_common *VAR_6 = FUNC_3(VAR_0);
 struct cpsw_vector *VAR_7;


 VAR_2 = FUNC_1(VAR_6->dma);
 for (VAR_5 = 0, VAR_3 = 0; VAR_2; VAR_2 >>= 1, VAR_5++) {
  if (!(VAR_2 & 0x01))
   continue;

  VAR_7 = &VAR_6->rxv[VAR_5];
  if (FUNC_4(VAR_7->budget > VAR_1 - VAR_3))
   VAR_4 = VAR_1 - VAR_3;
  else
   VAR_4 = VAR_7->budget;

  VAR_3 += FUNC_0(VAR_7->ch, VAR_4);
  if (VAR_3 >= VAR_1)
   break;
 }

 if (VAR_3 < VAR_1) {
  FUNC_2(VAR_0, VAR_3);
  FUNC_5(0xff, &VAR_6->wr_regs->rx_en);
 }

 return VAR_3;
}
