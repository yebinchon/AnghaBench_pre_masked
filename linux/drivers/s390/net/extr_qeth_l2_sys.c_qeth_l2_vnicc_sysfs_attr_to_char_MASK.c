
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
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static u32 FUNC_1(const char *VAR_7)
{
 if (FUNC_0(VAR_7, "flooding"))
  return VAR_1;
 else if (FUNC_0(VAR_7, "mcast_flooding"))
  return VAR_3;
 else if (FUNC_0(VAR_7, "learning"))
  return VAR_2;
 else if (FUNC_0(VAR_7, "takeover_setvmac"))
  return VAR_6;
 else if (FUNC_0(VAR_7, "takeover_learning"))
  return VAR_5;
 else if (FUNC_0(VAR_7, "bridge_invisible"))
  return VAR_0;
 else if (FUNC_0(VAR_7, "rx_bcast"))
  return VAR_4;

 return 0;
}
