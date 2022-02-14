
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipw_scan_request_ext {int* scan_type; } ;



__attribute__((used)) static inline u8 FUNC_0(struct ipw_scan_request_ext *VAR_0, u8 VAR_1)
{
 if (VAR_1 % 2)
  return VAR_0->scan_type[VAR_1 / 2] & 0x0F;
 else
  return (VAR_0->scan_type[VAR_1 / 2] & 0xF0) >> 4;
}
