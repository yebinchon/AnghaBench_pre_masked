
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

const char *FUNC_2(u32 VAR_0)
{
 if (VAR_0 & FUNC_1(7, 0)) {
  if (VAR_0 & FUNC_0(29))
   return "Event pending (ACK completed)";
  if (VAR_0 & FUNC_0(31))
   return "Event pending (command completed)";
  return "Connector Change";
 }
 if (VAR_0 & FUNC_0(29))
  return "ACK completed";
 if (VAR_0 & FUNC_0(31))
  return "Command completed";

 return "";
}
