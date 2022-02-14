
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mic_data {unsigned long M; int nBytesInM; int L; int R; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

void FUNC_2(struct mic_data *VAR_0, u8 VAR_1)
{

 VAR_0->M |= ((unsigned long)VAR_1) << (8*VAR_0->nBytesInM);
 VAR_0->nBytesInM++;

 if (VAR_0->nBytesInM >= 4) {
  VAR_0->L ^= VAR_0->M;
  VAR_0->R ^= FUNC_0(VAR_0->L, 17);
  VAR_0->L += VAR_0->R;
  VAR_0->R ^= ((VAR_0->L & 0xff00ff00) >> 8) | ((VAR_0->L & 0x00ff00ff) << 8);
  VAR_0->L += VAR_0->R;
  VAR_0->R ^= FUNC_0(VAR_0->L, 3);
  VAR_0->L += VAR_0->R;
  VAR_0->R ^= FUNC_1(VAR_0->L, 2);
  VAR_0->L += VAR_0->R;

  VAR_0->M = 0;
  VAR_0->nBytesInM = 0;
 }
}
