
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahc_tmode_tstate {int dummy; } ;
struct ahc_softc {int flags; int features; int our_id; int our_id_b; } ;
struct ahc_initiator_tinfo {int dummy; } ;
struct ahc_devinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ahc_devinfo*,int,int,int ,char,int ) ;
 struct ahc_initiator_tinfo* FUNC_1 (struct ahc_softc*,char,int,int,struct ahc_tmode_tstate**) ;
 int FUNC_2 (struct ahc_softc*) ;
 int FUNC_3 (struct ahc_softc*) ;
 int FUNC_4 (struct ahc_softc*,unsigned long*) ;
 int FUNC_5 (struct ahc_softc*,char,int ) ;
 int FUNC_6 (struct ahc_softc*,unsigned long*) ;
 int FUNC_7 (struct ahc_softc*,struct ahc_devinfo*,struct ahc_tmode_tstate*,struct ahc_initiator_tinfo*,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct ahc_softc *VAR_10)
{
 int VAR_11;
 int VAR_12;
 unsigned long VAR_13;

 VAR_11 = 0;
 VAR_12 = 0;

 FUNC_4(VAR_10, &VAR_13);

 if (VAR_9 != 0)
  VAR_10->flags &= ~(VAR_1|VAR_2);

 if ((VAR_10->flags & VAR_1) != 0)
  FUNC_5(VAR_10, 'A', VAR_8);
 else
  VAR_12 = (VAR_10->features & VAR_4) ? 16 : 8;

 if ((VAR_10->features & VAR_3) != 0) {

  if ((VAR_10->flags & VAR_2) != 0) {
   FUNC_5(VAR_10, 'B', VAR_8);
  } else {
   if (VAR_12 == 0)
    VAR_11 = 8;
   VAR_12 += 8;
  }
 }





 for (; VAR_11 < VAR_12; VAR_11++) {
  struct ahc_devinfo VAR_14;
  struct ahc_initiator_tinfo *VAR_15;
  struct ahc_tmode_tstate *VAR_16;
  u_int VAR_17;
  u_int VAR_18;
  char VAR_19;

  VAR_19 = 'A';
  VAR_17 = VAR_10->our_id;
  VAR_18 = VAR_11;
  if (VAR_11 > 7 && (VAR_10->features & VAR_3) != 0) {
   VAR_19 = 'B';
   VAR_17 = VAR_10->our_id_b;
   VAR_18 = VAR_11 % 8;
  }
  VAR_15 = FUNC_1(VAR_10, VAR_19, VAR_17,
         VAR_18, &VAR_16);
  FUNC_0(&VAR_14, VAR_17, VAR_18,
        VAR_6, VAR_19, VAR_7);
  FUNC_7(VAR_10, &VAR_14, VAR_16,
           VAR_15, VAR_0);
 }
 FUNC_6(VAR_10, &VAR_13);

 if ((VAR_10->flags & (VAR_1|VAR_2)) != 0) {
  FUNC_2(VAR_10);
  FUNC_8(VAR_5);
  FUNC_3(VAR_10);
 }
}
