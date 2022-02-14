
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int VDB; int VSS; int HBE; int HSS; int VFT; int HHT; } ;
struct TYPE_3__ {int vdb; int vss; int hbe; int hss; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_0(int VAR_5)
{




 int VAR_6, VAR_7, VAR_8, VAR_9;

 if (VAR_3 == VAR_0)
  return 1;

 VAR_6 = VAR_2.VDB;
 VAR_7 = VAR_2.VSS;
 VAR_8 = VAR_2.HBE;
 VAR_9 = VAR_2.HSS;

 if (VAR_5 >= 1) {

  VAR_6 = VAR_2.VFT + 1;

  VAR_8 = VAR_2.HHT + 2;
 }

 if (VAR_3 == VAR_1) {
  if (VAR_5 == 2 || VAR_5 == 4)
   VAR_7 = VAR_2.VFT + 1;
  if (VAR_5 == 3 || VAR_5 == 4)
   VAR_9 = VAR_2.HHT + 2;
 }

 VAR_4.vdb = VAR_6;
 VAR_4.vss = VAR_7;
 VAR_4.hbe = VAR_8;
 VAR_4.hss = VAR_9;

 return 0;
}
