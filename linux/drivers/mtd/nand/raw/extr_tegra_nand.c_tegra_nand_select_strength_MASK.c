
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int algo; } ;
struct nand_chip {int options; TYPE_1__ ecc; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_1 (struct nand_chip*,int const*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_8, int VAR_9)
{
 const int *VAR_10;
 int VAR_11, VAR_12;

 switch (VAR_8->ecc.algo) {
 case 128:
  VAR_12 = VAR_1;
  if (VAR_8->options & VAR_3) {
   VAR_10 = VAR_7;
   VAR_11 = FUNC_0(VAR_7);
  } else {
   VAR_10 = VAR_6;
   VAR_11 = FUNC_0(VAR_6);
  }
  break;
 case 129:
  VAR_12 = VAR_0;
  if (VAR_8->options & VAR_3) {
   VAR_10 = VAR_5;
   VAR_11 = FUNC_0(VAR_5);
  } else {
   VAR_10 = VAR_4;
   VAR_11 = FUNC_0(VAR_4);
  }
  break;
 default:
  return -VAR_2;
 }

 return FUNC_1(VAR_8, VAR_10, VAR_11,
           VAR_12, VAR_9);
}
