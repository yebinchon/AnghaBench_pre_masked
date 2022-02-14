
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int options; int steps; } ;
struct TYPE_4__ {int strength; } ;
struct TYPE_5__ {TYPE_1__ eccreq; } ;
struct nand_chip {TYPE_3__ ecc; TYPE_2__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_4, const int *VAR_5,
       int VAR_6, int VAR_7,
       int VAR_8)
{
 bool VAR_9 = VAR_4->ecc.options & VAR_2;
 int VAR_10;





 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  int VAR_11, VAR_12, VAR_13;

  if (VAR_9) {
   VAR_11 = VAR_5[VAR_6 - VAR_10 - 1];
  } else {
   VAR_11 = VAR_5[VAR_10];

   if (VAR_11 < VAR_4->base.eccreq.strength)
    continue;
  }

  VAR_12 = FUNC_0(VAR_7 * VAR_11,
           VAR_0);
  VAR_13 = FUNC_1(VAR_12 * VAR_4->ecc.steps, 4);


  if (VAR_13 < (VAR_8 - VAR_3))
   return VAR_11;
 }

 return -VAR_1;
}
