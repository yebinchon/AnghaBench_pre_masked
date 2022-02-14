
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bna_rxq {int dummy; } ;
struct TYPE_6__ {struct bna_rxq* hdr; struct bna_rxq* data; } ;
struct TYPE_5__ {struct bna_rxq* small; struct bna_rxq* large; } ;
struct TYPE_7__ {int * reserved; struct bna_rxq* only; } ;
struct TYPE_8__ {TYPE_2__ hds; TYPE_1__ slr; TYPE_3__ single; } ;
struct bna_rxp {int type; TYPE_4__ rxq; } ;






__attribute__((used)) static void
FUNC_0(struct bna_rxp *VAR_0, struct bna_rxq *VAR_1,
  struct bna_rxq *VAR_2)
{
 switch (VAR_0->type) {
 case 129:
  VAR_0->rxq.single.only = VAR_1;
  VAR_0->rxq.single.reserved = ((void*)0);
  break;
 case 128:
  VAR_0->rxq.slr.large = VAR_1;
  VAR_0->rxq.slr.small = VAR_2;
  break;
 case 130:
  VAR_0->rxq.hds.data = VAR_1;
  VAR_0->rxq.hds.hdr = VAR_2;
  break;
 default:
  break;
 }
}
