
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int set_feature_list; int supports_set_get_features; } ;
struct nand_chip {TYPE_1__ parameters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nand_chip*,int ,int*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_3, int VAR_4)
{
 u8 VAR_5[VAR_2];

 if (!VAR_3->parameters.supports_set_get_features ||
     !FUNC_1(VAR_1,
        VAR_3->parameters.set_feature_list))
  return -VAR_0;

 VAR_5[0] = VAR_4;
 return FUNC_0(VAR_3, VAR_1, VAR_5);
}
