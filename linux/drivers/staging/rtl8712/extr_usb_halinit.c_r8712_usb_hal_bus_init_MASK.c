
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct registry_priv {scalar_t__ chip_version; } ;
struct _adapter {struct registry_priv registrypriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct _adapter*,int) ;
 int FUNC_3 (struct _adapter*,int,int) ;
 int FUNC_4 (struct _adapter*,int,int) ;
 int FUNC_5 (int) ;

u8 FUNC_6(struct _adapter *VAR_30)
{
 u8 VAR_31 = 0;
 u8 VAR_32 = VAR_27;
 int VAR_33 = 20;
 struct registry_priv *VAR_34 = &VAR_30->registrypriv;

 if (VAR_34->chip_version == VAR_16) {
  VAR_31 = 0x01;

  FUNC_4(VAR_30, VAR_21, VAR_31);
  VAR_31 = FUNC_2(VAR_30, VAR_18);
  VAR_31 = VAR_31 | 0x01;

  FUNC_4(VAR_30, VAR_18, VAR_31);
  VAR_31 = FUNC_2(VAR_30, VAR_0);
  VAR_31 = VAR_31 | 0x01;

  FUNC_4(VAR_30, VAR_0, VAR_31);
  VAR_31 = FUNC_2(VAR_30, VAR_9);
  VAR_31 = VAR_31 | 0x01;

  FUNC_4(VAR_30, VAR_9, VAR_31);
  VAR_31 = FUNC_2(VAR_30, VAR_18);
  VAR_31 = VAR_31 | 0x02;

  FUNC_4(VAR_30, VAR_18, VAR_31);
  VAR_31 = FUNC_2(VAR_30, VAR_0);
  VAR_31 = VAR_31 | 0x02;

  FUNC_4(VAR_30, VAR_0, VAR_31);
  VAR_31 = FUNC_2(VAR_30, VAR_24 + 1);
  VAR_31 = VAR_31 | 0x08;

  FUNC_4(VAR_30, VAR_24 + 1, VAR_31);
  VAR_31 = FUNC_2(VAR_30, VAR_24 + 1);
  VAR_31 = VAR_31 & 0xEF;

  FUNC_4(VAR_30, VAR_24 + 1, VAR_31);
  VAR_31 = FUNC_2(VAR_30, VAR_5 + 1);
  VAR_31 = VAR_31 & 0xFB;

  FUNC_4(VAR_30, VAR_5 + 1, VAR_31);
  VAR_31 = FUNC_2(VAR_30, VAR_4);
  VAR_31 = VAR_31 | 0x01;

  FUNC_4(VAR_30, VAR_4, VAR_31);
  VAR_31 = 0xEE;

  FUNC_4(VAR_30, VAR_24, VAR_31);
  VAR_31 = FUNC_2(VAR_30, VAR_21 + 1);
  VAR_31 = VAR_31 | 0x08;

  FUNC_4(VAR_30, VAR_21 + 1, VAR_31);
  VAR_31 = FUNC_2(VAR_30, VAR_23 + 1);
  VAR_31 = VAR_31 | 0x08;

  FUNC_4(VAR_30, VAR_23 + 1, VAR_31);
  VAR_31 = VAR_31 | 0x80;

  FUNC_4(VAR_30, VAR_23 + 1, VAR_31);
  VAR_31 = FUNC_2(VAR_30, VAR_21 + 1);
  VAR_31 = (VAR_31 | 0x80) & 0xBF;

  FUNC_4(VAR_30, VAR_21 + 1, VAR_31);
  VAR_31 = 0xFC;
  FUNC_4(VAR_30, VAR_7, VAR_31);
  VAR_31 = 0x37;
  FUNC_4(VAR_30, VAR_7 + 1, VAR_31);

  FUNC_4(VAR_30, 0x102500ab, FUNC_2(VAR_30,
        0x102500ab) | FUNC_0(6) | FUNC_0(7));

  FUNC_4(VAR_30, 0x10250008, FUNC_2(VAR_30,
        0x10250008) & 0xfffffffb);
 } else if (VAR_34->chip_version == VAR_13) {

  FUNC_4(VAR_30, VAR_17 + 1, 0x53);
  FUNC_4(VAR_30, VAR_17, 0x57);



  VAR_31 = FUNC_2(VAR_30, VAR_0);
  FUNC_4(VAR_30, VAR_0, (VAR_31 | VAR_1 |
        VAR_3));

  VAR_31 = FUNC_2(VAR_30, VAR_9);
  FUNC_4(VAR_30, VAR_9, (VAR_31 | VAR_8));
  VAR_31 = FUNC_2(VAR_30, VAR_18);
  FUNC_4(VAR_30, VAR_18, (VAR_31 | VAR_19));
  FUNC_1(20);

  VAR_31 = FUNC_2(VAR_30, VAR_18);
  FUNC_4(VAR_30, VAR_18, (VAR_31 | VAR_20));
  FUNC_3(VAR_30, VAR_18, 0x00a7b267);
  VAR_31 = FUNC_2(VAR_30, VAR_24 + 1);
  FUNC_4(VAR_30, VAR_24 + 1, (VAR_31 | 0x08));

  VAR_31 = FUNC_2(VAR_30, VAR_23 + 1);
  FUNC_4(VAR_30, VAR_23 + 1, (VAR_31 | 0x20));
  VAR_31 = FUNC_2(VAR_30, VAR_24 + 1);
  FUNC_4(VAR_30, VAR_24 + 1, (VAR_31 & 0x6F));

  VAR_31 = FUNC_2(VAR_30, VAR_5 + 1);
  FUNC_4(VAR_30, VAR_5 + 1, (VAR_31 & 0xfb));

  VAR_31 = FUNC_2(VAR_30, VAR_4);
  FUNC_4(VAR_30, VAR_4, (VAR_31 | 0x11));

  VAR_31 = FUNC_2(VAR_30, VAR_24);
  FUNC_4(VAR_30, VAR_24, (VAR_31 & 0xEE));

  VAR_31 = FUNC_2(VAR_30, VAR_21);
  FUNC_4(VAR_30, VAR_21, VAR_31 & (~VAR_22));

  VAR_31 = FUNC_2(VAR_30, VAR_21);

  VAR_31 = FUNC_2(VAR_30, VAR_21 + 1);
  FUNC_4(VAR_30, VAR_21 + 1, (VAR_31 | 0x18));

  FUNC_4(VAR_30, VAR_12, 0x02);

  VAR_31 = FUNC_2(VAR_30, VAR_23 + 1);
  FUNC_4(VAR_30, VAR_23 + 1, (VAR_31 | 0x08));

  VAR_31 = FUNC_2(VAR_30, VAR_23 + 1);
  FUNC_4(VAR_30, VAR_23 + 1, (VAR_31 | 0x80));

  VAR_31 = FUNC_2(VAR_30, VAR_21 + 1);
  FUNC_4(VAR_30, VAR_21 + 1, (VAR_31 | 0x80) & 0xBF);
  FUNC_4(VAR_30, VAR_7, 0xFC);
  FUNC_4(VAR_30, VAR_7 + 1, 0x37);

  VAR_31 = FUNC_2(VAR_30, 0x1025FE5c);
  FUNC_4(VAR_30, 0x1025FE5c, (VAR_31 | FUNC_0(7)));
  VAR_31 = FUNC_2(VAR_30, 0x102500ab);
  FUNC_4(VAR_30, 0x102500ab, (VAR_31 | FUNC_0(6) | FUNC_0(7)));

  VAR_31 = FUNC_2(VAR_30, VAR_21);
  FUNC_4(VAR_30, VAR_21, VAR_31 & (~VAR_6));
 } else if (VAR_34->chip_version == VAR_14 ||
     VAR_34->chip_version == VAR_15) {



  FUNC_4(VAR_30, 0x37, 0xb0);
  FUNC_1(20);
  FUNC_4(VAR_30, 0x37, 0x30);




  VAR_31 = FUNC_2(VAR_30, VAR_21 + 1);
  if (VAR_31 & 0x80) {
   VAR_31 &= 0x3f;
   FUNC_4(VAR_30, VAR_21 + 1, VAR_31);
  }
  VAR_31 = FUNC_2(VAR_30, VAR_23 + 1);
  VAR_31 &= 0x73;
  FUNC_4(VAR_30, VAR_23 + 1, VAR_31);
  FUNC_1(20);




  FUNC_4(VAR_30, VAR_17 + 1, 0x53);
  FUNC_4(VAR_30, VAR_17, 0x57);
  VAR_31 = FUNC_2(VAR_30, VAR_0);

  FUNC_4(VAR_30, VAR_0, (VAR_31 | VAR_1));
  FUNC_4(VAR_30, VAR_0, (VAR_31 | VAR_1 |
        VAR_3 | VAR_2));

  VAR_31 = FUNC_2(VAR_30, VAR_9);
  FUNC_4(VAR_30, VAR_9, (VAR_31 | VAR_8));

  VAR_31 = FUNC_2(VAR_30, VAR_10);
  FUNC_4(VAR_30, VAR_10, (VAR_31 | VAR_11));
  VAR_31 = FUNC_2(VAR_30, VAR_24 + 1);
  FUNC_4(VAR_30, VAR_24 + 1, (VAR_31 | 0x08));

  VAR_31 = FUNC_2(VAR_30, VAR_23 + 1);
  FUNC_4(VAR_30, VAR_23 + 1, (VAR_31 | 0x20));

  VAR_31 = FUNC_2(VAR_30, VAR_24 + 1);
  FUNC_4(VAR_30, VAR_24 + 1, (VAR_31 & 0x68));

  VAR_31 = FUNC_2(VAR_30, VAR_5 + 1);
  FUNC_4(VAR_30, VAR_5 + 1, (VAR_31 & 0xfb));

  VAR_31 = FUNC_2(VAR_30, VAR_4);
  FUNC_4(VAR_30, VAR_4, (VAR_31 | 0x11));





  FUNC_5(500);
  FUNC_4(VAR_30, VAR_4, (VAR_31 | 0x51));
  FUNC_5(500);
  FUNC_4(VAR_30, VAR_4, (VAR_31 | 0x11));
  FUNC_5(500);

  VAR_31 = FUNC_2(VAR_30, VAR_24);
  FUNC_4(VAR_30, VAR_24, (VAR_31 & 0xEE));

  FUNC_4(VAR_30, VAR_21, 0x00);



  VAR_31 = FUNC_2(VAR_30, VAR_21);
  FUNC_4(VAR_30, VAR_21, (VAR_31 | 0xa0));

  VAR_31 = FUNC_2(VAR_30, VAR_21 + 1);
  FUNC_4(VAR_30, VAR_21 + 1, (VAR_31 | 0x18));

  FUNC_4(VAR_30, VAR_12, 0x02);

  VAR_31 = FUNC_2(VAR_30, VAR_23 + 1);
  FUNC_4(VAR_30, VAR_23 + 1, (VAR_31 | 0x08));

  VAR_31 = FUNC_2(VAR_30, VAR_23 + 1);
  FUNC_4(VAR_30, VAR_23 + 1, (VAR_31 | 0x80));

  VAR_31 = FUNC_2(VAR_30, VAR_21 + 1);
  FUNC_4(VAR_30, VAR_21 + 1, (VAR_31 | 0x80) & 0xBF);
  FUNC_4(VAR_30, VAR_7, 0xFC);
  FUNC_4(VAR_30, VAR_7 + 1, 0x37);

  VAR_31 = FUNC_2(VAR_30, 0x1025FE5c);
  FUNC_4(VAR_30, 0x1025FE5c, (VAR_31 | FUNC_0(7)));

  VAR_31 = FUNC_2(VAR_30, VAR_21);
  FUNC_4(VAR_30, VAR_21, VAR_31 & (~VAR_6));

  FUNC_4(VAR_30, 0x1025fe1c, 0x80);



  do {
   VAR_31 = FUNC_2(VAR_30, VAR_25);
   if ((VAR_31 & VAR_29) == VAR_29)
    break;
   FUNC_5(5);
  } while (VAR_33--);

  if (VAR_33 <= 0) {
   VAR_31 = FUNC_2(VAR_30, VAR_7);
   FUNC_4(VAR_30, VAR_7, VAR_31 & (~VAR_28));
   FUNC_5(2);

   FUNC_4(VAR_30, VAR_7, VAR_31 | VAR_28);
  }
 } else {
  VAR_32 = VAR_26;
 }
 return VAR_32;
}
