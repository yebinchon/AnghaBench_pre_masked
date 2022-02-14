
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel {int sense_rc; int fsm; int id; } ;
typedef int __u8 ;


 int FUNC_0 (int ,int ,char*,int ,int ,...) ;
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
 int FUNC_1 (int ,int ,struct channel*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct channel *VAR_16, __u8 VAR_17)
{
 FUNC_0(VAR_15, VAR_1,
   "%s(%s): %02x",
    VAR_0, VAR_16->id, VAR_17);

 if (VAR_17 & VAR_14) {
  if (VAR_17 & 0x01) {
   if (VAR_16->sense_rc != 0x01) {
    FUNC_2(
     "%s: The communication peer has "
     "disconnected\n", VAR_16->id);
    VAR_16->sense_rc = 0x01;
   }
   FUNC_1(VAR_16->fsm, VAR_4, VAR_16);
  } else {
   if (VAR_16->sense_rc != VAR_14) {
    FUNC_2(
     "%s: The remote operating system is "
     "not available\n", VAR_16->id);
    VAR_16->sense_rc = VAR_14;
   }
   FUNC_1(VAR_16->fsm, VAR_5, VAR_16);
  }
 } else if (VAR_17 & VAR_13) {
  if (VAR_17 & VAR_11) {
   if (VAR_16->sense_rc != VAR_11) {
    FUNC_0(VAR_15, VAR_2,
     "%s(%s): remote HW error %02x",
      VAR_0, VAR_16->id, VAR_17);
    VAR_16->sense_rc = VAR_11;
   }
   FUNC_1(VAR_16->fsm, VAR_3, VAR_16);
  } else {
   if (VAR_16->sense_rc != VAR_13) {
    FUNC_0(VAR_15, VAR_2,
     "%s(%s): remote read parity error %02x",
      VAR_0, VAR_16->id, VAR_17);
    VAR_16->sense_rc = VAR_13;
   }
   FUNC_1(VAR_16->fsm, VAR_6, VAR_16);
  }
 } else if (VAR_17 & VAR_11) {
  if (VAR_16->sense_rc != VAR_11) {
   FUNC_0(VAR_15, VAR_2,
    "%s(%s): BUS OUT error %02x",
     VAR_0, VAR_16->id, VAR_17);
   VAR_16->sense_rc = VAR_11;
  }
  if (VAR_17 & 0x04)
   FUNC_1(VAR_16->fsm, VAR_8, VAR_16);
  else
   FUNC_1(VAR_16->fsm, VAR_7, VAR_16);
 } else if (VAR_17 & VAR_12) {
  if (VAR_16->sense_rc != VAR_12) {
   FUNC_0(VAR_15, VAR_2,
    "%s(%s): Command rejected",
      VAR_0, VAR_16->id);
   VAR_16->sense_rc = VAR_12;
  }
 } else if (VAR_17 == 0) {
  FUNC_0(VAR_15, VAR_2,
   "%s(%s): Unit check ZERO",
     VAR_0, VAR_16->id);
  FUNC_1(VAR_16->fsm, VAR_10, VAR_16);
 } else {
  FUNC_0(VAR_15, VAR_2,
   "%s(%s): Unit check code %02x unknown",
     VAR_0, VAR_16->id, VAR_17);
  FUNC_1(VAR_16->fsm, VAR_9, VAR_16);
 }
}
