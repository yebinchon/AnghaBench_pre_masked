
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r852_device {int dummy; } ;
struct nand_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nand_chip*) ;
 struct r852_device* FUNC_1 (int ) ;
 int FUNC_2 (struct r852_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_2)
{
 struct r852_device *VAR_3 = FUNC_1(FUNC_0(VAR_2));
 return !(FUNC_2(VAR_3, VAR_0) & VAR_1);
}
