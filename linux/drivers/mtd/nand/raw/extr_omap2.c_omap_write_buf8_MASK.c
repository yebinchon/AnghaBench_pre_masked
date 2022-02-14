
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int IO_ADDR_W; } ;
struct TYPE_5__ {TYPE_1__ legacy; } ;
struct omap_nand_info {TYPE_3__* ops; TYPE_2__ nand; } ;
struct mtd_info {int dummy; } ;
struct TYPE_6__ {int (* nand_writebuffer_empty ) () ;} ;


 int FUNC_0 (int ,int ) ;
 struct omap_nand_info* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_0, const u_char *VAR_1, int VAR_2)
{
 struct omap_nand_info *VAR_3 = FUNC_1(VAR_0);
 u_char *VAR_4 = (u_char *)VAR_1;
 bool VAR_5;

 while (VAR_2--) {
  FUNC_0(*VAR_4++, VAR_3->nand.legacy.IO_ADDR_W);

  do {
   VAR_5 = VAR_3->ops->nand_writebuffer_empty();
  } while (!VAR_5);
 }
}
