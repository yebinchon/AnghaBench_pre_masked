
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int csr; scalar_t__ cardtype; int port; } ;
typedef TYPE_1__ avmcard ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int) ;

void FUNC_3(avmcard *VAR_5)
{
 VAR_5->csr = 0x0;
 FUNC_0(VAR_5, VAR_5->csr, VAR_0);
 FUNC_0(VAR_5, 0, VAR_1);
 FUNC_0(VAR_5, 0, VAR_2);
 FUNC_0(VAR_5, 0, VAR_3);

 FUNC_2(VAR_5->port, 0x10, 0x00);
 FUNC_2(VAR_5->port, 0x07, 0x00);

 FUNC_0(VAR_5, 0, VAR_1);
 FUNC_1(10);
 FUNC_0(VAR_5, 0x0f000000, VAR_1);
 FUNC_1(10);
 FUNC_0(VAR_5, 0, VAR_1);
 if (VAR_5->cardtype == VAR_4)
  FUNC_1(42);
 else
  FUNC_1(10);
}
