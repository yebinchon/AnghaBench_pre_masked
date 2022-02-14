
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_enet {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bna_enet*,int ) ;

__attribute__((used)) static void
FUNC_1(struct bna_enet *VAR_3)
{
 VAR_3->flags |= VAR_1;
 if (VAR_3->flags & VAR_0)
  FUNC_0(VAR_3, VAR_2);
}
