
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wbcir_data {scalar_t__* txbuf; int txstate; size_t txoff; size_t txlen; scalar_t__ sbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (scalar_t__,int*,unsigned int) ;
 int FUNC_4 (struct wbcir_data*,int) ;

__attribute__((used)) static void
FUNC_5(struct wbcir_data *VAR_9)
{
 unsigned int VAR_10;
 unsigned int VAR_11;
 u8 VAR_12[16];
 u8 VAR_13;

 if (!VAR_9->txbuf)
  return;

 switch (VAR_9->txstate) {
 case 128:

  VAR_10 = 16;
  break;
 case 130:

  VAR_10 = 13;
  break;
 case 129:
  VAR_10 = 0;
  break;
 default:
  return;
 }






 for (VAR_11 = 0; VAR_11 < VAR_10 && VAR_9->txoff != VAR_9->txlen; VAR_11++) {
  if (VAR_9->txbuf[VAR_9->txoff] == 0) {
   VAR_9->txoff++;
   continue;
  }
  VAR_13 = FUNC_1((u32)0x80, VAR_9->txbuf[VAR_9->txoff]);
  VAR_9->txbuf[VAR_9->txoff] -= VAR_13;
  VAR_13--;
  VAR_13 |= (VAR_9->txoff % 2 ? 0x80 : 0x00);
  VAR_12[VAR_11] = VAR_13;
 }

 while (VAR_9->txoff != VAR_9->txlen && VAR_9->txbuf[VAR_9->txoff] == 0)
  VAR_9->txoff++;

 if (VAR_11 == 0) {

  if (VAR_9->txstate == 129)

   FUNC_2(VAR_8, VAR_9->sbase + VAR_4);
  FUNC_4(VAR_9, VAR_1 | VAR_0);
  FUNC_0(VAR_9->txbuf);
  VAR_9->txbuf = ((void*)0);
  VAR_9->txstate = 128;
 } else if (VAR_9->txoff == VAR_9->txlen) {

  FUNC_3(VAR_9->sbase + VAR_6, VAR_12, VAR_11 - 1);
  FUNC_2(VAR_7, VAR_9->sbase + VAR_4);
  FUNC_2(VAR_12[VAR_11 - 1], VAR_9->sbase + VAR_6);
  FUNC_4(VAR_9, VAR_1 | VAR_0 |
      VAR_2);
 } else {

  FUNC_3(VAR_9->sbase + VAR_5, VAR_12, VAR_11);
  if (VAR_9->txstate == 128) {
   FUNC_4(VAR_9, VAR_1 | VAR_0 |
       VAR_3);
   VAR_9->txstate = 130;
  }
 }
}
