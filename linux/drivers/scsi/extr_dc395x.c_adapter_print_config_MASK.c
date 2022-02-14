
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct AdapterCtlBlk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct AdapterCtlBlk*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(struct AdapterCtlBlk *VAR_13)
{
 u8 VAR_14;

 VAR_14 = FUNC_0(VAR_13, VAR_10);
 FUNC_1(VAR_7, "%sConnectors: ",
  ((VAR_14 & VAR_12) ? "(Wide) " : ""));
 if (!(VAR_14 & VAR_2))
  FUNC_2("ext%s ", !(VAR_14 & VAR_5) ? "68" : "50");
 if (!(VAR_14 & VAR_3))
  FUNC_2("int68%s ", !(VAR_14 & VAR_6) ? "" : "(50)");
 if (!(VAR_14 & VAR_1))
  FUNC_2("int50 ");
 if ((VAR_14 & (VAR_2 | VAR_1 | VAR_3)) ==
     0 )
  FUNC_2(" Oops! (All 3?) ");
 VAR_14 = FUNC_0(VAR_13, VAR_9);
 FUNC_2(" Termination: ");
 if (VAR_14 & VAR_4)
  FUNC_2("Disabled\n");
 else {
  if (VAR_14 & VAR_0)
   FUNC_2("Auto ");
  if (VAR_14 & VAR_8)
   FUNC_2("Low ");
  if (VAR_14 & VAR_11)
   FUNC_2("High ");
  FUNC_2("\n");
 }
}
