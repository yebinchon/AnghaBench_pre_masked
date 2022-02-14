
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menelaus_chip {int mmc_callback_data; int (* mmc_callback ) (int ,unsigned char) ;} ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct menelaus_chip *VAR_3)
{
 int VAR_4;
 unsigned char VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 < 0)
  return;

 if (!(VAR_4 & 0x1))
  VAR_5 |= VAR_0;

 if (!(VAR_4 & 0x2))
  VAR_5 |= VAR_1;

 if (VAR_3->mmc_callback)
  VAR_3->mmc_callback(VAR_3->mmc_callback_data,
       VAR_5);
}
