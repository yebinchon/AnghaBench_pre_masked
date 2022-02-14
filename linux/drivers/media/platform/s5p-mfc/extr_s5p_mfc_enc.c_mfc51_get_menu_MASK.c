
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;





__attribute__((used)) static const char * const *FUNC_0(u32 VAR_0)
{
 static const char * const VAR_1[] = {
  "Disabled",
  "Level Limit",
  "VBV/CPB Limit",
  ((void*)0),
 };
 static const char * const VAR_2[] = {
  "Disabled",
  "I Frame",
  "Not Coded",
  ((void*)0),
 };
 switch (VAR_0) {
 case 128:
  return VAR_1;
 case 129:
  return VAR_2;
 }
 return ((void*)0);
}
