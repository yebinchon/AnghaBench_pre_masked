
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spinand_device {int* oobbuf; } ;
struct nand_pos {int target; } ;
struct TYPE_2__ {int* in; } ;
struct nand_page_io_req {int ooblen; int mode; TYPE_1__ oobbuf; int ooboffs; struct nand_pos const pos; } ;
struct nand_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;
 struct spinand_device* FUNC_1 (struct nand_device*) ;
 int FUNC_2 (struct spinand_device*,struct nand_page_io_req*,int) ;
 int FUNC_3 (struct spinand_device*,int ) ;

__attribute__((used)) static bool FUNC_4(struct nand_device *VAR_1, const struct nand_pos *VAR_2)
{
 struct spinand_device *VAR_3 = FUNC_1(VAR_1);
 struct nand_page_io_req VAR_4 = {
  .pos = *VAR_2,
  .ooblen = 2,
  .ooboffs = 0,
  .oobbuf.in = VAR_3->oobbuf,
  .mode = VAR_0,
 };

 FUNC_0(VAR_3->oobbuf, 0, 2);
 FUNC_3(VAR_3, VAR_2->target);
 FUNC_2(VAR_3, &VAR_4, 0);
 if (VAR_3->oobbuf[0] != 0xff || VAR_3->oobbuf[1] != 0xff)
  return 1;

 return 0;
}
