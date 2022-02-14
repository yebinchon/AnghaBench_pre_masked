
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct c2h_evt_hdr_88xx {scalar_t__ id; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;

s32 FUNC_0(u8 *VAR_1)
{
 struct c2h_evt_hdr_88xx *VAR_2 = (struct c2h_evt_hdr_88xx *)VAR_1;
 s32 VAR_3 = 0;
 if (VAR_2->id == VAR_0)
  VAR_3 = 1;

 return VAR_3;
}
