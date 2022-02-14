
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rndis_params {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct rndis_params*,int *) ;
 int * FUNC_1 (struct rndis_params*,int *) ;

void FUNC_2(struct rndis_params *VAR_1)
{
 u8 *VAR_2;
 u32 VAR_3;

 if (!VAR_1)
  return;
 VAR_1->state = VAR_0;


 while ((VAR_2 = FUNC_1(VAR_1, &VAR_3)))
  FUNC_0(VAR_1, VAR_2);
}
