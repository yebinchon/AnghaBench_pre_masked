
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2 {int flags; int bus_speed_mhz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static char *
FUNC_1(struct bnx2 *VAR_3, char *VAR_4)
{
 char *VAR_5 = VAR_4;

 if (VAR_3->flags & VAR_0) {
  VAR_5 += FUNC_0(VAR_5, "PCI Express");
 } else {
  VAR_5 += FUNC_0(VAR_5, "PCI");
  if (VAR_3->flags & VAR_1)
   VAR_5 += FUNC_0(VAR_5, "-X");
  if (VAR_3->flags & VAR_2)
   VAR_5 += FUNC_0(VAR_5, " 32-bit");
  else
   VAR_5 += FUNC_0(VAR_5, " 64-bit");
  VAR_5 += FUNC_0(VAR_5, " %dMHz", VAR_3->bus_speed_mhz);
 }
 return VAR_4;
}
