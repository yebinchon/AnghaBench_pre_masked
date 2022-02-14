
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {scalar_t__ status; int irb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 char* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct dasd_ccw_req *VAR_7)
{
 char *VAR_8;
 if (VAR_7->status == VAR_0)
  return VAR_4;
 else if (VAR_7->status == VAR_2 ||
   VAR_7->status == VAR_1) {
  VAR_8 = FUNC_0(&VAR_7->irb);
  if (VAR_8 && (VAR_8[1] & VAR_6))
   return VAR_5;
  else
   return VAR_3;
 } else
  return VAR_3;
}
