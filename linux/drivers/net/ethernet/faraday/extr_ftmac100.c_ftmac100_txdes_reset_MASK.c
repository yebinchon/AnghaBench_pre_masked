
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftmac100_txdes {scalar_t__ txdes3; scalar_t__ txdes2; int txdes1; scalar_t__ txdes0; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ftmac100_txdes *VAR_1)
{

 VAR_1->txdes0 = 0;
 VAR_1->txdes1 &= FUNC_0(VAR_0);
 VAR_1->txdes2 = 0;
 VAR_1->txdes3 = 0;
}
