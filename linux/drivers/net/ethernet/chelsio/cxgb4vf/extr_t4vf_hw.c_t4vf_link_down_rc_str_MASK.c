
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (char const* const*) ;

__attribute__((used)) static const char *FUNC_1(unsigned char VAR_0)
{
 static const char * const VAR_1[] = {
  "Link Down",
  "Remote Fault",
  "Auto-negotiation Failure",
  "Reserved",
  "Insufficient Airflow",
  "Unable To Determine Reason",
  "No RX Signal Detected",
  "Reserved",
 };

 if (VAR_0 >= FUNC_0(VAR_1))
  return "Bad Reason Code";

 return VAR_1[VAR_0];
}
