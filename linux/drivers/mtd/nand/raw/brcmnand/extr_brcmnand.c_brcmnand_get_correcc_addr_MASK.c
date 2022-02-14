
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct brcmnand_controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmnand_controller*,int ) ;

__attribute__((used)) static u64 FUNC_1(struct brcmnand_controller *VAR_2)
{
 u64 VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 VAR_3 |= ((u64)(FUNC_0(VAR_2,
          VAR_1)
          & 0xffff) << 32);

 return VAR_3;
}
