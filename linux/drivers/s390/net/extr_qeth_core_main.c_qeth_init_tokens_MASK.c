
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int issuer_rm_w; int cm_filter_w; int cm_connection_w; int ulp_filter_w; int ulp_connection_w; } ;
struct qeth_card {TYPE_1__ token; } ;



__attribute__((used)) static void FUNC_0(struct qeth_card *VAR_0)
{
 VAR_0->token.issuer_rm_w = 0x00010103UL;
 VAR_0->token.cm_filter_w = 0x00010108UL;
 VAR_0->token.cm_connection_w = 0x0001010aUL;
 VAR_0->token.ulp_filter_w = 0x0001010bUL;
 VAR_0->token.ulp_connection_w = 0x0001010dUL;
}
