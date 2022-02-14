
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mic_data {scalar_t__ nBytesInM; int R; int L; } ;


 int FUNC_0 (struct mic_data*,int) ;
 int FUNC_1 (struct mic_data*) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct mic_data *VAR_0, u8 *VAR_1)
{

 FUNC_0(VAR_0, 0x5a);
 FUNC_0(VAR_0, 0);
 FUNC_0(VAR_0, 0);
 FUNC_0(VAR_0, 0);
 FUNC_0(VAR_0, 0);

 while (VAR_0->nBytesInM != 0)
  FUNC_0(VAR_0, 0);

 FUNC_2(VAR_1, VAR_0->L);
 FUNC_2(VAR_1+4, VAR_0->R);

 FUNC_1(VAR_0);
}
