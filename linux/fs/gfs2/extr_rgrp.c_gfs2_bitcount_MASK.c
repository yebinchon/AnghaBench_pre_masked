
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct gfs2_rgrpd {int dummy; } ;



__attribute__((used)) static u32 FUNC_0(struct gfs2_rgrpd *VAR_0, const u8 *VAR_1,
    unsigned int VAR_2, u8 VAR_3)
{
 const u8 *VAR_4 = VAR_1;
 const u8 *VAR_5 = VAR_1 + VAR_2;
 const u8 VAR_6 = VAR_3 << 2;
 const u8 VAR_7 = VAR_3 << 4;
 const u8 VAR_8 = VAR_3 << 6;
 u32 VAR_9 = 0;

 for (; VAR_4 < VAR_5; VAR_4++) {
  if (((*VAR_4) & 0x03) == VAR_3)
   VAR_9++;
  if (((*VAR_4) & 0x0C) == VAR_6)
   VAR_9++;
  if (((*VAR_4) & 0x30) == VAR_7)
   VAR_9++;
  if (((*VAR_4) & 0xC0) == VAR_8)
   VAR_9++;
 }

 return VAR_9;
}
