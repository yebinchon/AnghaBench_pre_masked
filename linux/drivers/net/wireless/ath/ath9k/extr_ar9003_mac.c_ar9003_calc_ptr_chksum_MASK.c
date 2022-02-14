
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ar9003_txc {int info; int link; int data0; int ctl3; int data1; int ctl5; int data2; int ctl7; int data3; int ctl9; } ;


 int VAR_0 ;

__attribute__((used)) static u16 FUNC_0(struct ar9003_txc *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->info + VAR_1->link
  + VAR_1->data0 + VAR_1->ctl3
  + VAR_1->data1 + VAR_1->ctl5
  + VAR_1->data2 + VAR_1->ctl7
  + VAR_1->data3 + VAR_1->ctl9;

 return ((VAR_2 & 0xffff) + (VAR_2 >> 16)) & VAR_0;
}
