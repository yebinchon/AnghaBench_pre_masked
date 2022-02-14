
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct scb {int flags; } ;
struct ahd_softc {int flags; int pending_scbs; } ;
typedef int role_t ;
typedef scalar_t__ cam_status ;
typedef int ahd_mode_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct scb* FUNC_1 (int *) ;
 struct scb* FUNC_2 (struct scb*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct ahd_softc*,struct scb*) ;
 int FUNC_4 (struct ahd_softc*,int) ;
 int FUNC_5 (struct ahd_softc*) ;
 int FUNC_6 (struct scb*) ;
 scalar_t__ FUNC_7 (struct scb*) ;
 struct scb* FUNC_8 (struct ahd_softc*,int) ;
 scalar_t__ FUNC_9 (struct ahd_softc*,struct scb*,int,char,int,int,int ) ;
 int FUNC_10 (struct ahd_softc*,int,char,int,int,int ,int ) ;
 int FUNC_11 (struct ahd_softc*,int ) ;
 int FUNC_12 (struct ahd_softc*) ;
 int FUNC_13 (struct ahd_softc*,int,char,int,int ,int ,int ,int ) ;
 int FUNC_14 (struct ahd_softc*,int ,int ) ;
 int FUNC_15 (struct scb*,int ) ;
 int FUNC_16 (struct ahd_softc*,int) ;
 int VAR_12 ;
 int FUNC_17 (char*) ;

__attribute__((used)) static int
FUNC_18(struct ahd_softc *VAR_13, int VAR_14, char VAR_15,
        int VAR_16, u_int VAR_17, role_t VAR_18, uint32_t VAR_19)
{
 struct scb *VAR_20;
 struct scb *VAR_21;
 u_int VAR_22, VAR_23;
 u_int VAR_24;
 u_int VAR_25;
 u_int VAR_26;
 int VAR_27;
 ahd_mode_state VAR_28;


 VAR_28 = FUNC_12(VAR_13);
 FUNC_14(VAR_13, VAR_0, VAR_0);

 VAR_27 = FUNC_13(VAR_13, VAR_14, VAR_15, VAR_16, VAR_10,
       VAR_18, VAR_4, VAR_11);




 VAR_22 = 0;
 VAR_24 = 16;
 if (VAR_14 != VAR_7) {
  VAR_22 = VAR_14;
  if (VAR_15 == 'B')
   VAR_22 += 8;
  VAR_24 = VAR_22 + 1;
 }

 if (VAR_16 == VAR_3) {
  VAR_25 = 0;
  VAR_26 = VAR_1;
 } else if (VAR_16 >= VAR_1) {
  VAR_25 = VAR_26 = 0;
 } else {
  VAR_25 = VAR_16;
  VAR_26 = VAR_16 + 1;
 }

 if (VAR_18 != VAR_8) {
  for (;VAR_22 < VAR_24; VAR_22++) {
   for (VAR_23 = VAR_25;VAR_23 < VAR_26; VAR_23++) {
    u_int VAR_29;
    u_int VAR_30;

    VAR_30 = FUNC_0(VAR_22, 'A', VAR_23);
    VAR_29 = FUNC_4(VAR_13, VAR_30);
    VAR_20 = FUNC_8(VAR_13, VAR_29);
    if (VAR_20 == ((void*)0)
     || FUNC_9(VAR_13, VAR_20, VAR_14, VAR_15,
        VAR_16, VAR_17, VAR_18) == 0)
     continue;
    FUNC_16(VAR_13, FUNC_0(VAR_22, 'A', VAR_23));
   }
  }
 }





 FUNC_5(VAR_13);







 VAR_21 = FUNC_1(&VAR_13->pending_scbs);
 while (VAR_21 != ((void*)0)) {
  VAR_20 = VAR_21;
  VAR_21 = FUNC_2(VAR_20, VAR_12);
  if (FUNC_9(VAR_13, VAR_20, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18)) {
   cam_status VAR_31;

   VAR_31 = FUNC_7(VAR_20);
   if (VAR_31 == VAR_6)
    FUNC_15(VAR_20, VAR_19);
   if (FUNC_7(VAR_20) != VAR_5)
    FUNC_6(VAR_20);
   if ((VAR_20->flags & VAR_9) == 0)
    FUNC_17("Inactive SCB on pending list\n");
   FUNC_3(VAR_13, VAR_20);
   VAR_27++;
  }
 }
 FUNC_11(VAR_13, VAR_28);
 FUNC_10(VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);
 VAR_13->flags |= VAR_2;
 return VAR_27;
}
