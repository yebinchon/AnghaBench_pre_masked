
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct cx88_core {int tvnorm; void* tvaudio; int input; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_1 (struct cx88_core*) ;
 int FUNC_2 (struct cx88_core*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct cx88_core *VAR_21)
{
 v4l2_std_id VAR_22 = VAR_21->tvnorm;

 if (FUNC_0(VAR_21->input).type != VAR_1 &&
     FUNC_0(VAR_21->input).type != VAR_0)
  return 0;

 if (VAR_5 & VAR_22) {
  VAR_21->tvaudio = VAR_14;

 } else if (VAR_6 & VAR_22) {
  VAR_21->tvaudio = VAR_16;

 } else if (VAR_7 & VAR_22) {
  VAR_21->tvaudio = VAR_18;

 } else if (VAR_13 & VAR_22) {
  VAR_21->tvaudio = VAR_19;

 } else if ((VAR_9 | VAR_11 | VAR_12) &
     VAR_22) {
  VAR_21->tvaudio = VAR_14;

 } else if (VAR_10 & VAR_22) {
  VAR_21->tvaudio = VAR_16;

 } else if ((VAR_3 & VAR_22) ||
     (VAR_8 & VAR_22)) {
  VAR_21->tvaudio = VAR_15;

 } else if (VAR_4 & VAR_22) {
  VAR_21->tvaudio = VAR_17;

 } else {
  FUNC_4("tvaudio support needs work for this tv norm [%s], sorry\n",
   FUNC_5(VAR_21->tvnorm));
  VAR_21->tvaudio = VAR_20;
  return 0;
 }

 FUNC_3(VAR_2, 0x1f, 0x0);
 FUNC_1(VAR_21);






 FUNC_2(VAR_21);
 return 0;
}
