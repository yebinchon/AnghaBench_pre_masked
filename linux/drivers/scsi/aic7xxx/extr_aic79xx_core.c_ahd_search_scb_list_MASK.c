
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct scb {int flags; } ;
struct TYPE_2__ {scalar_t__ numscbs; } ;
struct ahd_softc {TYPE_1__ scb_data; } ;
typedef int role_t ;
typedef int ahd_search_action ;


 int FUNC_0 (struct ahd_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;




 int FUNC_2 (struct ahd_softc*,struct scb*,int ) ;
 int FUNC_3 (struct ahd_softc*) ;
 scalar_t__ FUNC_4 (struct ahd_softc*,int ) ;
 scalar_t__ FUNC_5 (struct ahd_softc*,int ) ;
 struct scb* FUNC_6 (struct ahd_softc*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct ahd_softc*,struct scb*,int,char,int,scalar_t__,int ) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*,int ,scalar_t__) ;
 int FUNC_10 (struct ahd_softc*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct ahd_softc*,scalar_t__) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static int
FUNC_14(struct ahd_softc *VAR_6, int VAR_7, char VAR_8,
      int VAR_9, u_int VAR_10, role_t VAR_11, uint32_t VAR_12,
      ahd_search_action VAR_13, u_int *VAR_14,
      u_int *VAR_15, u_int VAR_16)
{
 struct scb *VAR_17;
 u_int VAR_18;
 u_int VAR_19;
 u_int VAR_20;
 int VAR_21;

 FUNC_0(VAR_6, VAR_0, VAR_0);
 VAR_21 = 0;
 VAR_20 = VAR_4;
 VAR_19 = *VAR_14;
 *VAR_15 = VAR_4;
 for (VAR_18 = VAR_19; !FUNC_1(VAR_18); VAR_18 = VAR_19) {
  if (VAR_18 >= VAR_6->scb_data.numscbs) {
   FUNC_13("%s:SCB List inconsistency. "
          "SCB == 0x%x, yet numscbs == 0x%x.",
          FUNC_8(VAR_6), VAR_18, VAR_6->scb_data.numscbs);
   FUNC_3(VAR_6);
   FUNC_12("for safety");
  }
  VAR_17 = FUNC_6(VAR_6, VAR_18);
  if (VAR_17 == ((void*)0)) {
   FUNC_13("%s: SCB = %d Not Active!\n",
          FUNC_8(VAR_6), VAR_18);
   FUNC_12("Waiting List traversal\n");
  }
  FUNC_11(VAR_6, VAR_18);
  *VAR_15 = VAR_18;
  VAR_19 = FUNC_5(VAR_6, VAR_5);
  if (FUNC_7(VAR_6, VAR_17, VAR_7, VAR_8,
      VAR_9, VAR_4, VAR_11) == 0) {
   VAR_20 = VAR_18;
   continue;
  }
  VAR_21++;
  switch (VAR_13) {
  case 131:
   if ((VAR_17->flags & VAR_3) == 0)
    FUNC_13("Inactive SCB in Waiting List\n");
   FUNC_2(VAR_6, VAR_17, VAR_12);

  case 128:
   FUNC_10(VAR_6, VAR_18, VAR_20, VAR_19, VAR_16);
   *VAR_15 = VAR_20;
   if (FUNC_1(VAR_20))
    *VAR_14 = VAR_19;
   break;
  case 129:
   FUNC_13("0x%x ", VAR_18);

  case 130:
   VAR_20 = VAR_18;
   break;
  }
  if (VAR_21 > VAR_1)
   FUNC_12("SCB LIST LOOP");
 }
 if (VAR_13 == 131
  || VAR_13 == 128)
  FUNC_9(VAR_6, VAR_2, FUNC_4(VAR_6, VAR_2) - VAR_21);
 return (VAR_21);
}
