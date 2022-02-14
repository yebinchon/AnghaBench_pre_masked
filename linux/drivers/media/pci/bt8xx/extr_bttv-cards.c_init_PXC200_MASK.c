
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bttv {int dummy; } ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bttv*,int,int *) ;
 int FUNC_3 (struct bttv*,int,int ,int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct bttv*,char*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct bttv *VAR_6)
{
 static int VAR_7[] = { 0x08, 0x09, 0x0a, 0x0b, 0x0d, 0x0d, 0x01, 0x02,
         0x03, 0x04, 0x05, 0x06, 0x00 };
 unsigned int VAR_8;
 int VAR_9;
 u32 VAR_10;


 FUNC_7(0xffffff, (1<<13));
 FUNC_8(0);
 FUNC_10(3);
 FUNC_8(1<<13);


 FUNC_6(0xffffff, 0);
 if (VAR_5)
  FUNC_4(VAR_6,"pxc200");
 FUNC_5(VAR_2|VAR_1, VAR_0);


 FUNC_9("Setting DAC reference voltage level ...\n");
 FUNC_3(VAR_6,0x5E,0,0x80,1);







 FUNC_9("Initialising 12C508 PIC chip ...\n");


 VAR_10 = FUNC_1(VAR_3);
 VAR_10 |= VAR_4;
 FUNC_5(VAR_10, VAR_3);





 FUNC_7(0xffffff,(1<<2));
 FUNC_8(0);
 FUNC_10(10);
 FUNC_8(1<<2);

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7); VAR_8++) {
  VAR_9=FUNC_3(VAR_6,0x1E,0,VAR_7[VAR_8],1);
  if (VAR_9 != -1) {
   FUNC_9("I2C Write(%2.2x) = %i\nI2C Read () = %2.2x\n\n",
          VAR_7[VAR_8],VAR_9,FUNC_2(VAR_6,0x1F,((void*)0)));
  }
 }

 FUNC_9("PXC200 Initialised\n");
}
