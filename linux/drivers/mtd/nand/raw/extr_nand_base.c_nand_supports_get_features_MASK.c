
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int get_feature_list; scalar_t__ supports_set_get_features; } ;
struct nand_chip {TYPE_1__ parameters; } ;


 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static bool FUNC_1(struct nand_chip *VAR_0, int VAR_1)
{
 return (VAR_0->parameters.supports_set_get_features &&
  FUNC_0(VAR_1, VAR_0->parameters.get_feature_list));
}
