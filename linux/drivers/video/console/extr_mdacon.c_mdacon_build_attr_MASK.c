
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vc_data {int dummy; } ;



__attribute__((used)) static u8 FUNC_0(struct vc_data *VAR_0, u8 VAR_1, u8 VAR_2,
       u8 VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 return (VAR_2 & 3) |
  ((VAR_4 & 1) << 2) |
  ((VAR_5 & 1) << 3) |
  (!!VAR_6 << 4) |
  ((VAR_3 & 1) << 7);
}
