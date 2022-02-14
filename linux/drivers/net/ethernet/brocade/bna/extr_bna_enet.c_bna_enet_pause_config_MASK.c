
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_pause_config {int dummy; } ;
struct bna_enet {struct bna_pause_config pause_config; } ;


 int VAR_0 ;
 int FUNC_0 (struct bna_enet*,int ) ;

void
FUNC_1(struct bna_enet *VAR_1,
        struct bna_pause_config *VAR_2)
{
 VAR_1->pause_config = *VAR_2;

 FUNC_0(VAR_1, VAR_0);
}
