
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bank_lock; } ;
typedef TYPE_1__ mace_private ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(mace_private *VAR_1, unsigned int VAR_2, int VAR_3,
         int VAR_4)
{
  unsigned long VAR_5;

  switch (VAR_3 >> 4) {
    case 0:
      FUNC_1(VAR_4 & 0xFF, VAR_2 + VAR_0 + VAR_3);
      break;
    case 1:
      FUNC_2(&VAR_1->bank_lock, VAR_5);
      FUNC_0(1);
      FUNC_1(VAR_4 & 0xFF, VAR_2 + VAR_0 + (VAR_3 & 0x0F));
      FUNC_0(0);
      FUNC_3(&VAR_1->bank_lock, VAR_5);
      break;
  }
}
