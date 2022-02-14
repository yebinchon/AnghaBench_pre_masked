
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int options; } ;
struct hynix_nand {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*) ;
 struct hynix_nand* FUNC_2 (int,int ) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,struct hynix_nand*) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_5)
{
 struct hynix_nand *VAR_6;
 int VAR_7;

 if (!FUNC_3(VAR_5))
  VAR_5->options |= VAR_3;
 else
  VAR_5->options |= VAR_2 | VAR_4;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_4(VAR_5, VAR_6);

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7)
  FUNC_0(VAR_5);

 return VAR_7;
}
