
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; } ;
struct bttv {scalar_t__ cardid; TYPE_1__ c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bttv*,int,int *) ;
 int FUNC_4 (struct bttv*,int,unsigned char,unsigned char,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct bttv *VAR_7, unsigned int VAR_8)
{
 int VAR_9;
 long VAR_10;
 int VAR_11;
 unsigned char VAR_12[2];



 VAR_12[0]=0;
 VAR_12[1]=0;
 VAR_9=FUNC_4(VAR_7,(VAR_5<<1),VAR_12[0],VAR_12[1],1);
 if (VAR_9) {
  FUNC_6("%d: PXC200_muxsel: pic cfg write failed:%d\n",
    VAR_7->c.nr, VAR_9);

  return;
 }

 VAR_9=FUNC_3(VAR_7,(VAR_5<<1),((void*)0));
 if (!(VAR_9 & VAR_4)) {
  FUNC_6("%d: PXC200_muxsel: not PXC200F rc:%d\n",
    VAR_7->c.nr, VAR_9);
  return;
 }






 VAR_10 = VAR_8;



 VAR_11=0x302;

 if (VAR_7->cardid == VAR_6) {
    VAR_11 ^= 0x180;
    VAR_11 |= 7<<4;
 }
 FUNC_5(VAR_11, VAR_1);

 VAR_11 = FUNC_2(VAR_0);
 if (VAR_7->cardid == VAR_6)
   VAR_11 = (VAR_11 & ~0x280) | ((VAR_10 & 2) << 8) | ((VAR_10 & 1) << 7);
 else
   VAR_11 = (VAR_11 & ~0x300) | ((VAR_10 & 3) << 8);
 FUNC_5(VAR_11,VAR_0);
 if (VAR_7->cardid == VAR_6)
   FUNC_1(2<<5, ~VAR_3, VAR_2);
 else
   FUNC_0(~VAR_3,VAR_2);

 FUNC_6("%d: setting input channel to:%d\n", VAR_7->c.nr, (int)VAR_10);
}
