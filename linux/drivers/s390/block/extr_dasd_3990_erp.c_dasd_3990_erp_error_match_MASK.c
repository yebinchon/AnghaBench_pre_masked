
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scsw; } ;
struct dasd_ccw_req {scalar_t__ startdev; TYPE_1__ irb; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dasd_ccw_req *VAR_2,
         struct dasd_ccw_req *VAR_3)
{
 char *VAR_4, *VAR_5;

 if (VAR_2->startdev != VAR_3->startdev)
  return 0;

 VAR_4 = FUNC_0(&VAR_2->irb);
 VAR_5 = FUNC_0(&VAR_3->irb);


 if (!VAR_4 != !VAR_5)
  return 0;

 if (!VAR_4 && !VAR_5) {
  if ((FUNC_2(&VAR_2->irb.scsw) & (VAR_1 |
          VAR_0)) ==
      (FUNC_2(&VAR_3->irb.scsw) & (VAR_1 |
          VAR_0)))
   return 1;
 }

 if (!(VAR_4 && VAR_5 &&
       (FUNC_1(VAR_4, VAR_5, 3) == 0) &&
       (VAR_4[27] == VAR_5[27]) &&
       (VAR_4[25] == VAR_5[25]))) {

  return 0;
 }

 return 1;

}
