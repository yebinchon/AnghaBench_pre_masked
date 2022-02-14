
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct dpaa2_eth_priv {size_t num_fqs; TYPE_1__* fq; } ;
struct TYPE_2__ {void* flowid; int consume; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dpaa2_eth_priv*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dpaa2_eth_priv*) ;

__attribute__((used)) static void FUNC_2(struct dpaa2_eth_priv *VAR_4)
{
 int VAR_5;





 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++) {
  VAR_4->fq[VAR_4->num_fqs].type = VAR_1;
  VAR_4->fq[VAR_4->num_fqs].consume = VAR_3;
  VAR_4->fq[VAR_4->num_fqs++].flowid = (u16)VAR_5;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++) {
  VAR_4->fq[VAR_4->num_fqs].type = VAR_0;
  VAR_4->fq[VAR_4->num_fqs].consume = VAR_2;
  VAR_4->fq[VAR_4->num_fqs++].flowid = (u16)VAR_5;
 }


 FUNC_1(VAR_4);
}
