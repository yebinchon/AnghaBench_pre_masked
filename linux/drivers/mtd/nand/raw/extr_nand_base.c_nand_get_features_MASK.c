
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* get_features ) (struct nand_chip*,int,int *) ;} ;
struct nand_chip {TYPE_1__ legacy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nand_chip*,int,int *) ;
 int FUNC_1 (struct nand_chip*,int) ;
 int FUNC_2 (struct nand_chip*,int,int *) ;

int FUNC_3(struct nand_chip *VAR_1, int VAR_2,
        u8 *VAR_3)
{
 if (!FUNC_1(VAR_1, VAR_2))
  return -VAR_0;

 if (VAR_1->legacy.get_features)
  return VAR_1->legacy.get_features(VAR_1, VAR_2, VAR_3);

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
