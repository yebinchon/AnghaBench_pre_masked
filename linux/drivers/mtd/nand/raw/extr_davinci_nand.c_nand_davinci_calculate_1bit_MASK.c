
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct nand_chip {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_0,
           const u_char *VAR_1, u_char *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(FUNC_1(VAR_0));
 unsigned int VAR_4 = (VAR_3 & 0x0fff) | ((VAR_3 & 0x0fff0000) >> 4);


 VAR_4 = ~VAR_4;
 VAR_2[0] = (u_char)(VAR_4);
 VAR_2[1] = (u_char)(VAR_4 >> 8);
 VAR_2[2] = (u_char)(VAR_4 >> 16);

 return 0;
}
