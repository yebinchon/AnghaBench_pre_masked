
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int stopped; int flags; } ;
struct dasd_ccw_req {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct dasd_device *VAR_6,
         struct dasd_ccw_req *VAR_7)
{
 int VAR_8 = ~(VAR_3 | VAR_5 | VAR_4);

 if (FUNC_0(VAR_1, &VAR_6->flags) &&
     !FUNC_0(VAR_2, &VAR_6->flags)) {




  return 1;
 }
 if (VAR_6->stopped) {
  if (VAR_6->stopped & VAR_8) {

   return 1;
  }
  if (!FUNC_0(VAR_0, &VAR_7->flags)) {


   return 1;
  }

 }
 return 0;
}
