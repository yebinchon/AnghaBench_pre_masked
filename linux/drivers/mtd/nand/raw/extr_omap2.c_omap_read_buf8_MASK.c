
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int IO_ADDR_R; } ;
struct nand_chip {TYPE_1__ legacy; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (int ,int *,int) ;
 struct nand_chip* FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_0, u_char *VAR_1, int VAR_2)
{
 struct nand_chip *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->legacy.IO_ADDR_R, VAR_1, VAR_2);
}
