
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;
struct cx25840_state {scalar_t__ aud_input; int audclk_freq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (struct i2c_client*) ;
 struct cx25840_state* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1, u32 VAR_2)
{
 struct cx25840_state *VAR_3 = FUNC_2(FUNC_1(VAR_1));

 if (VAR_3->aud_input != VAR_0) {
  switch (VAR_2) {
  case 32000:


   FUNC_0(VAR_1, 0x900, 0x0801f77f);
   FUNC_0(VAR_1, 0x904, 0x0801f77f);
   FUNC_0(VAR_1, 0x90c, 0x0801f77f);
   break;

  case 44100:


   FUNC_0(VAR_1, 0x900, 0x08016d59);
   FUNC_0(VAR_1, 0x904, 0x08016d59);
   FUNC_0(VAR_1, 0x90c, 0x08016d59);
   break;

  case 48000:


   FUNC_0(VAR_1, 0x900, 0x08014faa);
   FUNC_0(VAR_1, 0x904, 0x08014faa);
   FUNC_0(VAR_1, 0x90c, 0x08014faa);
   break;
  }
 } else {
  switch (VAR_2) {

  case 32000:


   FUNC_0(VAR_1, 0x8f8, 0x08010000);



   FUNC_0(VAR_1, 0x900, 0x08020000);
   FUNC_0(VAR_1, 0x904, 0x08020000);
   FUNC_0(VAR_1, 0x90c, 0x08020000);
   break;

  case 44100:


   FUNC_0(VAR_1, 0x8f8, 0x080160cd);



   FUNC_0(VAR_1, 0x900, 0x08017385);
   FUNC_0(VAR_1, 0x904, 0x08017385);
   FUNC_0(VAR_1, 0x90c, 0x08017385);
   break;

  case 48000:


   FUNC_0(VAR_1, 0x8f8, 0x0801867c);



   FUNC_0(VAR_1, 0x900, 0x08014faa);
   FUNC_0(VAR_1, 0x904, 0x08014faa);
   FUNC_0(VAR_1, 0x90c, 0x08014faa);
   break;
  }
 }

 VAR_3->audclk_freq = VAR_2;

 return 0;
}
