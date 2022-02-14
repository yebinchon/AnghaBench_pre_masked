
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xennet_gnttab_make_txreq {int skb; TYPE_1__* tx; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,unsigned int,unsigned int,void*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1, unsigned int VAR_2,
      unsigned int VAR_3, void *VAR_4)
{
 struct xennet_gnttab_make_txreq *VAR_5 = VAR_4;

 VAR_5->tx->flags |= VAR_0;
 FUNC_0(VAR_5->skb);
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
