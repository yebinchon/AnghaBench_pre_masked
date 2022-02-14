
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mic_data {void* K1; void* K0; } ;


 int FUNC_0 (struct mic_data*) ;
 void* FUNC_1 (int *) ;

void FUNC_2(struct mic_data *VAR_0, u8 *VAR_1)
{

 VAR_0->K0 = FUNC_1(VAR_1);
 VAR_0->K1 = FUNC_1(VAR_1 + 4);

 FUNC_0(VAR_0);
}
