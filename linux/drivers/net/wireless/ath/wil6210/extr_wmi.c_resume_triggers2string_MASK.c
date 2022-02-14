
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void FUNC_1(u32 VAR_5, char *VAR_6, int VAR_7)
{
 VAR_6[0] = '\0';

 if (!VAR_5) {
  FUNC_0(VAR_6, " UNKNOWN", VAR_7);
  return;
 }

 if (VAR_5 & VAR_2)
  FUNC_0(VAR_6, " HOST", VAR_7);

 if (VAR_5 & VAR_3)
  FUNC_0(VAR_6, " UCAST_RX", VAR_7);

 if (VAR_5 & VAR_0)
  FUNC_0(VAR_6, " BCAST_RX", VAR_7);

 if (VAR_5 & VAR_4)
  FUNC_0(VAR_6, " WMI_EVT", VAR_7);

 if (VAR_5 & VAR_1)
  FUNC_0(VAR_6, " DISCONNECT", VAR_7);
}
