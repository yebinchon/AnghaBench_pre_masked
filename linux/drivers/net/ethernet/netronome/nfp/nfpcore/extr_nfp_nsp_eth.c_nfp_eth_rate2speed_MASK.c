
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum nfp_eth_rate { ____Placeholder_nfp_eth_rate } nfp_eth_rate ;
struct TYPE_3__ {int rate; unsigned int speed; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(enum nfp_eth_rate VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].rate == VAR_1)
   return VAR_0[VAR_2].speed;

 return 0;
}
