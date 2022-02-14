
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int smem_len; int line_length; int accel; int visual; int type; scalar_t__* id; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ par; } ;
struct cg6_par {int fhc; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_6, int VAR_7)
{
 struct cg6_par *VAR_8 = (struct cg6_par *)VAR_6->par;
 const char *VAR_9, *VAR_10;
 u32 VAR_11;

 VAR_11 = FUNC_0(VAR_8->fhc);
 switch (VAR_11 & VAR_0) {
 case 128:
  VAR_9 = "sparc";
  break;
 case 129:
  VAR_9 = "68020";
  break;
 default:
  VAR_9 = "i386";
  break;
 }
 if (((VAR_11 >> VAR_2) & VAR_1) >= 11) {
  if (VAR_6->fix.smem_len <= 0x100000)
   VAR_10 = "TGX";
  else
   VAR_10 = "TGX+";
 } else {
  if (VAR_6->fix.smem_len <= 0x100000)
   VAR_10 = "GX";
  else
   VAR_10 = "GX+";
 }

 FUNC_1(VAR_6->fix.id, "%s %s", VAR_10, VAR_9);
 VAR_6->fix.id[sizeof(VAR_6->fix.id) - 1] = 0;

 VAR_6->fix.type = VAR_4;
 VAR_6->fix.visual = VAR_5;

 VAR_6->fix.line_length = VAR_7;

 VAR_6->fix.accel = VAR_3;
}
