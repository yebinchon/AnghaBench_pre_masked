
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct scb {struct ahd_dma_seg* sg_list; } ;
struct ahd_softc {int flags; } ;
struct ahd_dma_seg {int addr; int len; } ;
struct ahd_dma64_seg {int addr; int len; } ;
struct ahd_devinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ahd_softc*) ;
 scalar_t__ FUNC_1 (struct scb*) ;
 int FUNC_2 (struct ahd_softc*,int ) ;
 int FUNC_3 (struct ahd_softc*,int ) ;
 int FUNC_4 (struct ahd_softc*,int ) ;
 int FUNC_5 (struct ahd_softc*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct scb* FUNC_8 (struct ahd_softc*,int ) ;
 int FUNC_9 (struct ahd_softc*,int ,int) ;
 int FUNC_10 (struct ahd_softc*,int ,int) ;
 struct ahd_dma_seg* FUNC_11 (struct ahd_softc*,struct scb*,int) ;
 int FUNC_12 (struct ahd_softc*,struct scb*,struct ahd_dma_seg*) ;

__attribute__((used)) static void
FUNC_13(struct ahd_softc *VAR_12, struct ahd_devinfo *VAR_13)
{
 u_int VAR_14;
 struct scb *VAR_15;

 VAR_14 = FUNC_0(VAR_12);
 VAR_15 = FUNC_8(VAR_12, VAR_14);




 if ((FUNC_2(VAR_12, VAR_8) & VAR_3) == 0
  || FUNC_1(VAR_15) != VAR_2) {




 } else {







  uint32_t VAR_16;

  VAR_16 = FUNC_3(VAR_12, VAR_5);
  if ((VAR_16 & VAR_9) != 0
   && (FUNC_3(VAR_12, VAR_6)
       & VAR_7) != 0) {






  } else {
   uint32_t VAR_17;
   uint64_t VAR_18;
   uint32_t VAR_19;


   VAR_16 = FUNC_4(VAR_12, VAR_5);
   VAR_17 = FUNC_4(VAR_12, VAR_4);
   if ((VAR_16 & VAR_9) != 0) {





    VAR_17 &= ~VAR_1;
   }
   VAR_18 = FUNC_5(VAR_12, VAR_11);
   VAR_17 += 1;
   VAR_18 -= 1;
   VAR_16 &= VAR_10;
   if ((VAR_12->flags & VAR_0) != 0) {
    struct ahd_dma64_seg *VAR_20;

    VAR_20 = FUNC_11(VAR_12, VAR_15, VAR_16);





    VAR_20--;
    VAR_19 = FUNC_6(VAR_20->len) & VAR_1;
    if (VAR_20 != VAR_15->sg_list
     && VAR_19 < (VAR_17 & VAR_1)) {

     VAR_20--;
     VAR_19 = FUNC_6(VAR_20->len);




     VAR_17 = 1|(VAR_19&(~VAR_1));
     VAR_18 = FUNC_7(VAR_20->addr)
        + (VAR_19 & VAR_1)
        - 1;





     VAR_20++;
     VAR_16 = FUNC_12(VAR_12, VAR_15,
           VAR_20);
    }
   } else {
    struct ahd_dma_seg *VAR_21;

    VAR_21 = FUNC_11(VAR_12, VAR_15, VAR_16);





    VAR_21--;
    VAR_19 = FUNC_6(VAR_21->len) & VAR_1;
    if (VAR_21 != VAR_15->sg_list
     && VAR_19 < (VAR_17 & VAR_1)) {

     VAR_21--;
     VAR_19 = FUNC_6(VAR_21->len);




     VAR_17 = 1|(VAR_19&(~VAR_1));
     VAR_18 = FUNC_6(VAR_21->addr)
        + (VAR_19 & VAR_1)
        - 1;





     VAR_21++;
     VAR_16 = FUNC_12(VAR_12, VAR_15,
          VAR_21);
    }
   }






   FUNC_9(VAR_12, VAR_6,
       FUNC_3(VAR_12, VAR_6)
       ^ VAR_7);

   FUNC_10(VAR_12, VAR_5, VAR_16);
   FUNC_10(VAR_12, VAR_4, VAR_17);




  }
 }
}
