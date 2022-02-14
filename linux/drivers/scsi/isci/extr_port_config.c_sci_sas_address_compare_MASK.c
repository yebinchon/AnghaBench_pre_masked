
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_sas_address {scalar_t__ high; scalar_t__ low; } ;
typedef int s32 ;



__attribute__((used)) static s32 FUNC_0(
 struct sci_sas_address VAR_0,
 struct sci_sas_address VAR_1)
{
 if (VAR_0.high > VAR_1.high) {
  return 1;
 } else if (VAR_0.high < VAR_1.high) {
  return -1;
 } else if (VAR_0.low > VAR_1.low) {
  return 1;
 } else if (VAR_0.low < VAR_1.low) {
  return -1;
 }


 return 0;
}
