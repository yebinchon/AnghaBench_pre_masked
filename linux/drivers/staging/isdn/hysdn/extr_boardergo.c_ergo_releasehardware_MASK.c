
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * dpram; scalar_t__ iobase; int irq; } ;
typedef TYPE_1__ hysdn_card ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_4(hysdn_card *VAR_2)
{
 FUNC_0(VAR_2);
 FUNC_1(VAR_2->irq, VAR_2);
 FUNC_3(VAR_2->iobase + VAR_0, 1);
 FUNC_3(VAR_2->iobase + VAR_1, 1);
 FUNC_2(VAR_2->dpram);
 VAR_2->dpram = ((void*)0);
}
