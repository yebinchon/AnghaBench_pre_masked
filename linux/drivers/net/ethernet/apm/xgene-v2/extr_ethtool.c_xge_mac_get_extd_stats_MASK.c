
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xge_pdata {int dummy; } ;
struct TYPE_2__ {int value; int addr; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (struct xge_pdata*,int ) ;

__attribute__((used)) static void FUNC_1(struct xge_pdata *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = FUNC_0(VAR_2, VAR_1[VAR_4].addr);
  VAR_1[VAR_4].value += VAR_3;
 }
}
