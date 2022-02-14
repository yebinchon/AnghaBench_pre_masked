
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cstat; int dstat; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct irb {TYPE_2__ scsw; scalar_t__ ecw; } ;
struct ccw_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_1(struct ccw_device *VAR_14, struct irb *VAR_15)
{
 int VAR_16, VAR_17;
 char *VAR_18;

 VAR_18 = (char *) VAR_15->ecw;
 VAR_17 = VAR_15->scsw.cmd.cstat;
 VAR_16 = VAR_15->scsw.cmd.dstat;

 if (VAR_17 & (VAR_8 | VAR_10 |
       VAR_9 | VAR_7 |
       VAR_12 | VAR_11)) {
  FUNC_0(2, VAR_13, "CGENCHK");
  return 1;
 }
 if (VAR_16 & VAR_0) {
  if (VAR_18[VAR_2] &
      VAR_6) {
   FUNC_0(2, VAR_13, "REVIND");
   return 1;
  }
  if (VAR_18[VAR_1] &
      VAR_5) {
   FUNC_0(2, VAR_13, "CMDREJ");
   return 0;
  }
  if ((!VAR_18[VAR_1]) &&
      (!VAR_18[VAR_2]) &&
      (!VAR_18[VAR_3]) &&
      (!VAR_18[VAR_4])) {
   FUNC_0(2, VAR_13, "ZEROSEN");
   return 0;
  }
  FUNC_0(2, VAR_13, "DGENCHK");
  return 1;
 }
 return 0;
}
