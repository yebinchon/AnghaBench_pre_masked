
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int type_flags; int dst_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct dst_state*) ;
 scalar_t__ FUNC_2 (struct dst_state*) ;
 scalar_t__ FUNC_3 (struct dst_state*) ;
 scalar_t__ FUNC_4 (struct dst_state*) ;
 scalar_t__ FUNC_5 (struct dst_state*) ;
 scalar_t__ FUNC_6 (struct dst_state*) ;
 scalar_t__ FUNC_7 (struct dst_state*) ;
 int FUNC_8 (struct dst_state*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (struct dst_state*) ;

__attribute__((used)) static int FUNC_13(struct dst_state *VAR_5)
{
 FUNC_10(&VAR_5->dst_mutex);
 if (VAR_4 & VAR_0) {
  if ((FUNC_12(VAR_5)) < 0) {
   FUNC_11("RDC 8820 RESET Failed.\n");
   return -1;
  }
  FUNC_9(4000);
 } else {
  FUNC_9(100);
 }
 if ((FUNC_2(VAR_5)) < 0) {
  FUNC_11("DST Initialization Failed.\n");
  return -1;
 }
 FUNC_9(100);
 if (FUNC_4(VAR_5) < 0) {
  FUNC_11("unknown device.\n");
  return -1;
 }
 if (FUNC_5(VAR_5) < 0) {
  FUNC_0(2, "MAC: Unsupported command\n");
 }
 if ((VAR_5->type_flags & VAR_2) || (VAR_5->type_flags & VAR_1)) {
  if (FUNC_6(VAR_5) < 0)
   FUNC_0(2, "Tuner: Unsupported command\n");
 }
 if (VAR_5->type_flags & VAR_3) {
  FUNC_8(VAR_5, 204);
 }
 if (VAR_5->type_flags & VAR_1) {
  if (FUNC_3(VAR_5) < 0) {
   FUNC_0(2, "FW: Unsupported command\n");
   return 0;
  }
  if (FUNC_1(VAR_5) < 0) {
   FUNC_0(2, "Card: Unsupported command\n");
   return 0;
  }
  if (FUNC_7(VAR_5) < 0) {
   FUNC_0(2, "Vendor: Unsupported command\n");
   return 0;
  }
 }

 return 0;
}
