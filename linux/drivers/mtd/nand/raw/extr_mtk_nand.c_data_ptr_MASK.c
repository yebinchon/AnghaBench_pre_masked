
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;



__attribute__((used)) static inline u8 *FUNC_0(struct nand_chip *VAR_0, const u8 *VAR_1, int VAR_2)
{
 return (u8 *)VAR_1 + VAR_2 * VAR_0->ecc.size;
}
