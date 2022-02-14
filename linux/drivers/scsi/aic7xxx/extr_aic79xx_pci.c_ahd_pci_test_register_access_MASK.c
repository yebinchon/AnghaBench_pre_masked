
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct ahd_softc {int dev_softc; } ;


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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 int FUNC_1 (struct ahd_softc*,int ) ;
 scalar_t__ FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (struct ahd_softc*,int ,int) ;
 int FUNC_4 (struct ahd_softc*,int ,int) ;
 int FUNC_5 (int ,scalar_t__,int) ;
 int FUNC_6 (int ,scalar_t__,int,int) ;
 int FUNC_7 (struct ahd_softc*,int ,int ) ;

int
FUNC_8(struct ahd_softc *VAR_19)
{
 uint32_t VAR_20;
 u_int VAR_21;
 u_int VAR_22;
 int VAR_23;
 uint8_t VAR_24;

 VAR_23 = VAR_5;





 VAR_20 = FUNC_5(VAR_19->dev_softc, VAR_12, 2);
 FUNC_6(VAR_19->dev_softc, VAR_12,
        VAR_20 & ~VAR_11, 2);
 VAR_24 = FUNC_0(VAR_19, VAR_7);
 if (VAR_24 == 0xFF)
  goto fail;
 VAR_24 &= ~VAR_2;
 FUNC_3(VAR_19, VAR_7, VAR_24|VAR_9);
 while (FUNC_2(VAR_19) == 0)
  ;


 FUNC_7(VAR_19, VAR_0, VAR_0);
 VAR_21 = FUNC_0(VAR_19, VAR_18);
 FUNC_3(VAR_19, VAR_18, VAR_21);
 VAR_22 = FUNC_5(VAR_19->dev_softc,
       VAR_13 + 1, 1);
 FUNC_6(VAR_19->dev_softc, VAR_13 + 1,
        VAR_22, 1);
 FUNC_7(VAR_19, VAR_1, VAR_1);
 FUNC_3(VAR_19, VAR_3, VAR_4);

 FUNC_3(VAR_19, VAR_15, VAR_14);
 FUNC_4(VAR_19, VAR_16, 0x5aa555aa);
 if (FUNC_1(VAR_19, VAR_16) != 0x5aa555aa)
  goto fail;

 if ((FUNC_0(VAR_19, VAR_8) & VAR_10) != 0) {
  FUNC_7(VAR_19, VAR_0, VAR_0);
  VAR_21 = FUNC_0(VAR_19, VAR_18);
  if ((VAR_21 & VAR_17) != 0)
   goto fail;
 }

 VAR_23 = 0;

fail:
 if ((FUNC_0(VAR_19, VAR_8) & VAR_10) != 0) {

  FUNC_7(VAR_19, VAR_0, VAR_0);
  VAR_21 = FUNC_0(VAR_19, VAR_18);


  FUNC_3(VAR_19, VAR_18, VAR_21);
  VAR_22 = FUNC_5(VAR_19->dev_softc,
        VAR_13 + 1, 1);
  FUNC_6(VAR_19->dev_softc, VAR_13 + 1,
         VAR_22, 1);
  FUNC_3(VAR_19, VAR_3, VAR_4);
 }
 FUNC_3(VAR_19, VAR_15, VAR_14|VAR_6);
 FUNC_6(VAR_19->dev_softc, VAR_12, VAR_20, 2);
 return (VAR_23);
}
