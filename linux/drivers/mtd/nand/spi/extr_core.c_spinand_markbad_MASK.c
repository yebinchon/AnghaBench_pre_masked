
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spinand_device {int oobbuf; } ;
struct nand_pos {int target; } ;
struct TYPE_2__ {int out; } ;
struct nand_page_io_req {int ooblen; TYPE_1__ oobbuf; int ooboffs; struct nand_pos const pos; } ;
struct nand_device {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 struct spinand_device* FUNC_1 (struct nand_device*) ;
 int FUNC_2 (struct spinand_device*,struct nand_pos const*) ;
 int FUNC_3 (struct spinand_device*,int ) ;
 int FUNC_4 (struct spinand_device*) ;
 int FUNC_5 (struct spinand_device*,struct nand_page_io_req*) ;

__attribute__((used)) static int FUNC_6(struct nand_device *VAR_0, const struct nand_pos *VAR_1)
{
 struct spinand_device *VAR_2 = FUNC_1(VAR_0);
 struct nand_page_io_req VAR_3 = {
  .pos = *VAR_1,
  .ooboffs = 0,
  .ooblen = 2,
  .oobbuf.out = VAR_2->oobbuf,
 };
 int VAR_4;


 VAR_4 = FUNC_3(VAR_2, VAR_1->target);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_2, VAR_1);

 FUNC_0(VAR_2->oobbuf, 0, 2);
 return FUNC_5(VAR_2, &VAR_3);
}
