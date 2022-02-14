
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* path; } ;
struct TYPE_2__ {int chpid; int cssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct dasd_device *VAR_2,
           unsigned long VAR_3, int VAR_4)
{
 int VAR_5;

 while (VAR_3) {

  VAR_5 = 8 - FUNC_1(VAR_3);

  if (VAR_4 == VAR_0)
   FUNC_3("Service on the storage server caused path %x.%02x to go offline",
    VAR_2->path[VAR_5].cssid,
    VAR_2->path[VAR_5].chpid);
  else if (VAR_4 == VAR_1)
   FUNC_2("Path %x.%02x is back online after service on the storage server",
    VAR_2->path[VAR_5].cssid,
    VAR_2->path[VAR_5].chpid);
  FUNC_0(7 - VAR_5, &VAR_3);
 }
}
