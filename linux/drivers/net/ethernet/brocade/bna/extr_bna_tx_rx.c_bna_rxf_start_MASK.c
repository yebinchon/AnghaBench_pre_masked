
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_rxf {int rx; int start_cbarg; int start_cbfn; } ;


 int VAR_0 ;
 int FUNC_0 (struct bna_rxf*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct bna_rxf *VAR_2)
{
 VAR_2->start_cbfn = VAR_1;
 VAR_2->start_cbarg = VAR_2->rx;
 FUNC_0(VAR_2, VAR_0);
}
