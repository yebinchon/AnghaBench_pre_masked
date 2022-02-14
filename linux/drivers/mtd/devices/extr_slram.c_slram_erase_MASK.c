
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {TYPE_1__* priv; } ;
struct erase_info {int len; scalar_t__ addr; } ;
struct TYPE_2__ {scalar_t__ start; } ;
typedef TYPE_1__ slram_priv_t ;


 int FUNC_0 (scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_0, struct erase_info *VAR_1)
{
 slram_priv_t *VAR_2 = VAR_0->priv;

 FUNC_0(VAR_2->start + VAR_1->addr, 0xff, VAR_1->len);

 return(0);
}
