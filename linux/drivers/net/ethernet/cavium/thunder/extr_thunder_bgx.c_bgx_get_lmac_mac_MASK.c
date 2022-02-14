
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bgx {TYPE_1__* lmac; } ;
struct TYPE_2__ {int const* mac; } ;


 struct bgx* FUNC_0 (int,int) ;

const u8 *FUNC_1(int VAR_0, int VAR_1, int VAR_2)
{
 struct bgx *VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (VAR_3)
  return VAR_3->lmac[VAR_2].mac;

 return ((void*)0);
}
