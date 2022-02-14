
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vivid_rds_gen {int dyn_pty; int compressed; int art_head; int mono_stereo; } ;



__attribute__((used)) static u8 FUNC_0(const struct vivid_rds_gen *VAR_0, unsigned VAR_1)
{
 switch (VAR_1) {
 case 0:
  return (VAR_0->dyn_pty << 2) | (VAR_1 & 3);
 case 1:
  return (VAR_0->compressed << 2) | (VAR_1 & 3);
 case 2:
  return (VAR_0->art_head << 2) | (VAR_1 & 3);
 case 3:
  return (VAR_0->mono_stereo << 2) | (VAR_1 & 3);
 }
 return 0;
}
