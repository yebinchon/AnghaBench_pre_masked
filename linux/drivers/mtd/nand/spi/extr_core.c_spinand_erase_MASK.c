
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spinand_device {int dummy; } ;
struct nand_pos {int target; } ;
struct nand_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct spinand_device* FUNC_0 (struct nand_device*) ;
 int FUNC_1 (struct spinand_device*,struct nand_pos const*) ;
 int FUNC_2 (struct spinand_device*,int ) ;
 int FUNC_3 (struct spinand_device*,int*) ;
 int FUNC_4 (struct spinand_device*) ;

__attribute__((used)) static int FUNC_5(struct nand_device *VAR_2, const struct nand_pos *VAR_3)
{
 struct spinand_device *VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_3->target);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_4, &VAR_5);
 if (!VAR_6 && (VAR_5 & VAR_1))
  VAR_6 = -VAR_0;

 return VAR_6;
}
