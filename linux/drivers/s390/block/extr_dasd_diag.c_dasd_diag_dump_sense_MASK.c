
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irb {int dummy; } ;
struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int dummy; } ;


 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct dasd_device *VAR_1, struct dasd_ccw_req * VAR_2,
       struct irb *VAR_3)
{
 FUNC_0(VAR_0, VAR_1, "%s",
      "dump sense not available for DIAG data");
}
