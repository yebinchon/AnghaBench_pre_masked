
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {scalar_t__ status; scalar_t__ refers; int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct dasd_ccw_req *VAR_4)
{
 if (FUNC_0(VAR_3, &VAR_4->flags)) {
  if (VAR_4->refers)
   return 1;
  return ((VAR_4->status != VAR_0) &&
   (VAR_4->status != VAR_1));
 } else
  return (VAR_4->status == VAR_2);
}
