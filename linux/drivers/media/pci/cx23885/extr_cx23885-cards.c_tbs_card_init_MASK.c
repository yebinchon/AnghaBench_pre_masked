
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx23885_dev {int board; } ;




 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct cx23885_dev *VAR_1)
{
 int VAR_2;
 static const u8 VAR_3[] = {
  0xe0, 0x06, 0x66, 0x33, 0x65,
  0x01, 0x17, 0x06, 0xde};

 switch (VAR_1->board) {
 case 129:
 case 128:
  FUNC_1(VAR_0, 0x00070007);
  FUNC_2(1000, 10000);
  FUNC_0(VAR_0, 2);
  FUNC_2(1000, 10000);
  for (VAR_2 = 0; VAR_2 < 9 * 8; VAR_2++) {
   FUNC_0(VAR_0, 7);
   FUNC_2(1000, 10000);
   FUNC_1(VAR_0,
    ((VAR_3[VAR_2 >> 3] >> (7 - (VAR_2 & 7))) & 1) | 4);
   FUNC_2(1000, 10000);
  }
  FUNC_1(VAR_0, 7);
  break;
 }
}
