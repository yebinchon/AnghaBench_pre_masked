
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_fastpath {scalar_t__ mode; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct bnx2x_fastpath*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int ,unsigned long*) ;
 unsigned long FUNC_4 (struct bnx2x*,struct bnx2x_fastpath*,int) ;

__attribute__((used)) static unsigned long FUNC_5(struct bnx2x *VAR_12,
           struct bnx2x_fastpath *VAR_13,
           bool VAR_14)
{
 unsigned long VAR_15 = 0;


 if (FUNC_2(VAR_12))
  FUNC_3(VAR_4, &VAR_15);

 if (FUNC_0(VAR_13)) {
  FUNC_3(VAR_0, &VAR_15);

  FUNC_3(VAR_1, &VAR_15);
 }

 if (VAR_13->mode != VAR_10) {
  FUNC_3(VAR_6, &VAR_15);
  FUNC_3(VAR_8, &VAR_15);
  if (VAR_13->mode == VAR_11)
   FUNC_3(VAR_7, &VAR_15);
 }

 if (VAR_14) {
  FUNC_3(VAR_2, &VAR_15);
  FUNC_3(VAR_3, &VAR_15);
 }


 FUNC_3(VAR_9, &VAR_15);


 if (FUNC_1(VAR_12))
  FUNC_3(VAR_5, &VAR_15);

 return VAR_15 | FUNC_4(VAR_12, VAR_13, 1);
}
