
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int type; int pulse_val; int lock; int sioaddr; scalar_t__ pulse_mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;


 int FUNC_1 (int ) ;







 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int) ;
 TYPE_1__ VAR_17 ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(void)
{
 int VAR_18;
 u8 VAR_19;


 VAR_18 = FUNC_11();
 if (VAR_18)
  return VAR_18;

 FUNC_2(&VAR_17.lock);
 VAR_18 = FUNC_5(VAR_17.sioaddr);
 if (VAR_18)
  goto exit_unlock;
 FUNC_9(VAR_17.sioaddr, VAR_8);


 switch (VAR_17.type) {
 case 136:

  FUNC_4(VAR_17.sioaddr, VAR_14, 3);
  FUNC_4(VAR_17.sioaddr, VAR_15, 3);
  break;

 case 135:
  VAR_18 = FUNC_1(VAR_17.sioaddr);
  if (VAR_18)
   goto exit_superio;
  break;

 case 134:
 case 133:

  FUNC_4(VAR_17.sioaddr, VAR_13, 4);
  break;

 case 132:

  FUNC_10(VAR_17.sioaddr, VAR_13, 1);
  break;

 case 131:

  FUNC_8(VAR_17.sioaddr, VAR_15,
   FUNC_7(VAR_17.sioaddr, VAR_15) & 0xcf);
  break;

 case 130:

  FUNC_4(VAR_17.sioaddr, VAR_11, 3);

  FUNC_8(VAR_17.sioaddr, VAR_16, 0x5f &
   FUNC_7(VAR_17.sioaddr, VAR_16));
  break;

 case 129:

  FUNC_4(VAR_17.sioaddr, VAR_15, 5);
  break;

 case 128:






  VAR_19 = FUNC_7(VAR_17.sioaddr, VAR_10);
  VAR_19 &= ~(FUNC_0(3) | FUNC_0(0));
  VAR_19 |= FUNC_0(2);
  FUNC_8(VAR_17.sioaddr, VAR_10, VAR_19);

  FUNC_4(VAR_17.sioaddr, VAR_9, 5);
  break;

 default:




  VAR_18 = -VAR_0;
  goto exit_superio;
 }

 FUNC_9(VAR_17.sioaddr, VAR_8);
 FUNC_10(VAR_17.sioaddr, VAR_12, 0);

 if (VAR_17.type == 129 || VAR_17.type == 128)
  FUNC_10(VAR_17.sioaddr, VAR_7,
    VAR_6);
 else
  FUNC_10(VAR_17.sioaddr, VAR_4,
    VAR_1);

 FUNC_10(VAR_17.sioaddr, VAR_5,
   VAR_2);

 if (VAR_17.pulse_mode) {

  u8 VAR_20 = FUNC_7(VAR_17.sioaddr,
    VAR_5);


  VAR_20 = (VAR_20 & 0xfc) | (VAR_17.pulse_val & 0x03);

  VAR_20 |= FUNC_0(VAR_3);

  FUNC_8(VAR_17.sioaddr, VAR_5,
    VAR_20);
 } else {

  FUNC_4(VAR_17.sioaddr, VAR_5,
    VAR_3);
 }

exit_superio:
 FUNC_6(VAR_17.sioaddr);
exit_unlock:
 FUNC_3(&VAR_17.lock);

 return VAR_18;
}
