
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ btdmAntNum; scalar_t__ pgAntNum; } ;
struct TYPE_4__ {TYPE_1__ boardInfo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_0(u8 VAR_4, u8 VAR_5)
{
 if (VAR_2 == VAR_4) {
  VAR_3.boardInfo.pgAntNum = VAR_5;
  VAR_3.boardInfo.btdmAntNum = VAR_5;
 } else if (VAR_0 == VAR_4) {
  VAR_3.boardInfo.btdmAntNum = VAR_5;

 } else if (VAR_1 == VAR_4) {
  VAR_3.boardInfo.btdmAntNum = VAR_5;

 }
}
