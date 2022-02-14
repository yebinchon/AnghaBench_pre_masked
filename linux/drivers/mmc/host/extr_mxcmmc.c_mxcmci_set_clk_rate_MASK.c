
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxcmci_host {int mmc; int clk_per; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mxcmci_host*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct mxcmci_host *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = 0;
 unsigned int VAR_5 = FUNC_0(VAR_1->clk_per);

 while (VAR_4 <= 0x800) {
  for (VAR_3 = 1; VAR_3 <= 0xF; VAR_3++) {
   int VAR_6;

   VAR_6 = (VAR_5 / (VAR_3 + 1));

   if (VAR_4)
    VAR_6 /= (VAR_4 * 2);

   if (VAR_6 <= VAR_2)
    break;
  }
  if (VAR_3 < 0x10)
   break;

  if (VAR_4 == 0)
   VAR_4 = 1;
  else
   VAR_4 <<= 1;
 }

 FUNC_3(VAR_1, (VAR_4 << 4) | VAR_3, VAR_0);

 FUNC_1(FUNC_2(VAR_1->mmc), "scaler: %d divider: %d in: %d out: %d\n",
   VAR_4, VAR_3, VAR_5, VAR_2);
}
