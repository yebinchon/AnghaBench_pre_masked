
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6(int VAR_25)
{
 if (!(VAR_8 & VAR_9))
  return;

 FUNC_5("Phase=0x%x, ", FUNC_2(VAR_25, VAR_14));
 FUNC_5("OldPhase=0x%x, ", FUNC_0(VAR_25, VAR_10));
 FUNC_5("syncreg=0x%x, ", FUNC_2(VAR_25, VAR_23));
 FUNC_5("ackwidth=0x%x, ", FUNC_2(VAR_25, VAR_0));
 FUNC_5("sgtpaddr=0x%lx, ", FUNC_4(VAR_25, VAR_20));
 FUNC_5("scsioutlatch=0x%x, ", FUNC_2(VAR_25, VAR_18));
 FUNC_5("msgout=0x%lx, ", FUNC_4(VAR_25, VAR_17));
 FUNC_5("miscrd=0x%x, ", FUNC_1(VAR_25, VAR_7));
 FUNC_5("seltimeout=0x%x, ", FUNC_3(VAR_25, VAR_19));
 FUNC_5("sreqrate=0x%x, ", FUNC_2(VAR_25, VAR_22));
 FUNC_5("transStatus=0x%x, ", FUNC_3(VAR_25, VAR_24));
 FUNC_5("reselectid=0x%x, ", FUNC_3(VAR_25, VAR_4));
 FUNC_5("arbit=0x%x, ", FUNC_2(VAR_25, VAR_1));
 FUNC_5("BmStart=0x%lx, ", FUNC_4(VAR_25, VAR_3));
 FUNC_5("BmCount=0x%lx, ", FUNC_4(VAR_25, VAR_2));
 FUNC_5("SackCnt=0x%lx, ", FUNC_4(VAR_25, VAR_11));
 FUNC_5("SReqCnt=0x%lx, ", FUNC_4(VAR_25, VAR_21));
 FUNC_5("SavedSackCnt=0x%lx, ", FUNC_4(VAR_25, VAR_12));
 FUNC_5("ScsiBusControl=0x%x, ", FUNC_2(VAR_25, VAR_13));
 FUNC_5("FifoRestCnt=0x%x, ", FUNC_3(VAR_25, VAR_5));
 FUNC_5("CdbIn=0x%x, ", FUNC_2(VAR_25, VAR_15));
 FUNC_5("\n");

 if (0) {
  FUNC_5("execph=0x%x, ", FUNC_3(VAR_25, VAR_16));
  FUNC_5("IrqStatus=0x%x, ", FUNC_3(VAR_25, VAR_6));
  FUNC_5("\n");
 }
}
