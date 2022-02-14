
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* data; } ;
struct nand_chip {int options; TYPE_1__ id; int base; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nand_chip *VAR_1,
             bool VAR_2)
{
 u8 VAR_3;


 if (FUNC_0(&VAR_1->base) > 2)
  VAR_1->options |= VAR_0;


 if (VAR_2) {
  VAR_3 = VAR_1->id.data[5] >> 4;


  if (VAR_3 > 0)
   VAR_1->options |= VAR_0;
 } else {
  VAR_3 = VAR_1->id.data[5] & 0x7;


  if (VAR_3 > 2)
   VAR_1->options |= VAR_0;
 }
}
