
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_rx {int rx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bna_rx*,int ) ;

__attribute__((used)) static void
FUNC_1(struct bna_rx *VAR_2)
{

 VAR_2->rx_flags &= ~VAR_0;
 FUNC_0(VAR_2, VAR_1);
}
