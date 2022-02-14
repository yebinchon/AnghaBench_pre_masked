
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dasd_device {scalar_t__ path_thrhld; int path_interval; TYPE_5__* path; } ;
struct dasd_ccw_req {TYPE_4__* refers; struct dasd_device* startdev; } ;
typedef int __u8 ;
struct TYPE_10__ {unsigned long errorclk; int error_count; } ;
struct TYPE_6__ {int lpum; } ;
struct TYPE_7__ {TYPE_1__ esw1; } ;
struct TYPE_8__ {TYPE_2__ esw; } ;
struct TYPE_9__ {TYPE_3__ irb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct dasd_device*,int ) ;
 unsigned long FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static void FUNC_7(struct dasd_ccw_req *VAR_1)
{
 struct dasd_device *VAR_2 = VAR_1->startdev;
 __u8 VAR_3 = VAR_1->refers->irb.esw.esw1.lpum;
 int VAR_4 = FUNC_5(VAR_3);
 unsigned long VAR_5;

 if (!VAR_2->path_thrhld)
  return;

 VAR_5 = FUNC_4();




 if ((FUNC_6(VAR_5 - VAR_2->path[VAR_4].errorclk) / VAR_0)
     >= VAR_2->path_interval) {
  FUNC_2(&VAR_2->path[VAR_4].error_count, 0);
  VAR_2->path[VAR_4].errorclk = 0;
 }
 FUNC_0(&VAR_2->path[VAR_4].error_count);
 VAR_2->path[VAR_4].errorclk = VAR_5;

 if (FUNC_1(&VAR_2->path[VAR_4].error_count) >=
     VAR_2->path_thrhld)
  FUNC_3(VAR_2, VAR_3);
}
