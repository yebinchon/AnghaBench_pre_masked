
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_data {scalar_t__ M; scalar_t__ nBytesInM; int K1; int R; int K0; int L; } ;



__attribute__((used)) static void FUNC_0(struct mic_data *VAR_0)
{

 VAR_0->L = VAR_0->K0;
 VAR_0->R = VAR_0->K1;
 VAR_0->nBytesInM = 0;
 VAR_0->M = 0;
}
