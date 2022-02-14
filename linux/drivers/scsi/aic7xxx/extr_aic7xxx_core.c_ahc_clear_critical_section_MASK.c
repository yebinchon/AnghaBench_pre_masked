
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct cs {int begin; int end; } ;
struct ahc_softc {scalar_t__ num_critical_sections; int features; int seqctl; int unpause; struct cs* critical_sections; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*,int ) ;
 int FUNC_3 (struct ahc_softc*) ;
 int FUNC_4 (struct ahc_softc*) ;
 int FUNC_5 (struct ahc_softc*,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void
FUNC_8(struct ahc_softc *VAR_16)
{
 int VAR_17;
 int VAR_18;
 u_int VAR_19;
 u_int VAR_20;

 if (VAR_16->num_critical_sections == 0)
  return;

 VAR_17 = VAR_7;
 VAR_18 = 0;
 VAR_19 = 0;
 VAR_20 = 0;
 for (;;) {
  struct cs *VAR_21;
  u_int VAR_22;
  u_int VAR_23;

  VAR_22 = FUNC_2(VAR_16, VAR_9)
   | (FUNC_2(VAR_16, VAR_10) << 8);






  if (VAR_22 != 0)
   VAR_22 -= 1;
  VAR_21 = VAR_16->critical_sections;
  for (VAR_23 = 0; VAR_23 < VAR_16->num_critical_sections; VAR_23++, VAR_21++) {

   if (VAR_21->begin < VAR_22 && VAR_21->end >= VAR_22)
    break;
  }

  if (VAR_23 == VAR_16->num_critical_sections)
   break;

  if (VAR_18 > VAR_1) {
   FUNC_7("%s: Infinite loop in critical section\n",
          FUNC_4(VAR_16));
   FUNC_1(VAR_16);
   FUNC_6("critical section loop");
  }

  VAR_18++;
  if (VAR_17 == VAR_7) {







   VAR_19 = FUNC_2(VAR_16, VAR_12);
   FUNC_5(VAR_16, VAR_12, 0);
   VAR_20 = FUNC_2(VAR_16, VAR_13);
   if ((VAR_16->features & VAR_0) != 0)
    FUNC_5(VAR_16, VAR_13, VAR_20 & VAR_6);
   else
    FUNC_5(VAR_16, VAR_13, 0);
   FUNC_5(VAR_16, VAR_3, VAR_4);
   FUNC_5(VAR_16, VAR_11, VAR_16->seqctl | VAR_14);
   VAR_17 = VAR_15;
  }
  if ((VAR_16->features & VAR_0) != 0) {
   FUNC_5(VAR_16, VAR_5, VAR_2);
   FUNC_5(VAR_16, VAR_3, VAR_4);
  }
  FUNC_5(VAR_16, VAR_8, VAR_16->unpause);
  while (!FUNC_3(VAR_16))
   FUNC_0(200);
 }
 if (VAR_17) {
  FUNC_5(VAR_16, VAR_12, VAR_19);
  FUNC_5(VAR_16, VAR_13, VAR_20);
  FUNC_5(VAR_16, VAR_11, VAR_16->seqctl);
 }
}
