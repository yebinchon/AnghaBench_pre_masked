
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct gtp_pktinfo {TYPE_1__* pctx; void* gtph_port; } ;
struct TYPE_3__ {int gtp_version; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct sk_buff*,TYPE_1__*) ;
 int FUNC_1 (struct sk_buff*,TYPE_1__*) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_2, struct gtp_pktinfo *VAR_3)
{
 switch (VAR_3->pctx->gtp_version) {
 case 129:
  VAR_3->gtph_port = FUNC_2(VAR_0);
  FUNC_0(VAR_2, VAR_3->pctx);
  break;
 case 128:
  VAR_3->gtph_port = FUNC_2(VAR_1);
  FUNC_1(VAR_2, VAR_3->pctx);
  break;
 }
}
