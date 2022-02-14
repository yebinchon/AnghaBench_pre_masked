
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_tse_private {int txdescmem; scalar_t__ txdescphys; int device; int rxdescmem; scalar_t__ rxdescphys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;

void FUNC_1(struct altera_tse_private *VAR_2)
{
 if (VAR_2->rxdescphys)
  FUNC_0(VAR_2->device, VAR_2->rxdescphys,
     VAR_2->rxdescmem, VAR_0);

 if (VAR_2->txdescphys)
  FUNC_0(VAR_2->device, VAR_2->txdescphys,
     VAR_2->txdescmem, VAR_1);
}
