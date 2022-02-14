
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct cxl_context {unsigned long long pe; TYPE_3__* afu; TYPE_1__* elem; } ;
struct TYPE_9__ {int (* link_ok ) (int ,TYPE_3__*) ;} ;
struct TYPE_8__ {TYPE_2__* native; int dev; int adapter; int enabled; } ;
struct TYPE_7__ {int * sw_command_status; } ;
struct TYPE_6__ {int software_state; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int) ;
 unsigned long long FUNC_1 (int *) ;
 int FUNC_2 (unsigned long long) ;
 int FUNC_3 (unsigned long long) ;
 TYPE_5__* VAR_8 ;
 int FUNC_4 (TYPE_3__*,int ,unsigned long long) ;
 int FUNC_5 (int *,char*) ;
 unsigned long VAR_9 ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_11 (unsigned long,unsigned long) ;
 int FUNC_12 (struct cxl_context*,unsigned long long) ;
 int FUNC_13 (struct cxl_context*,unsigned long long,int) ;

__attribute__((used)) static int FUNC_14(struct cxl_context *VAR_10,
      u64 VAR_11, u64 VAR_12)
{
 u64 VAR_13;
 unsigned long VAR_14 = VAR_9 + (VAR_7 * VAR_4);
 int VAR_15 = 0;

 FUNC_12(VAR_10, VAR_11);

 FUNC_0(!VAR_10->afu->enabled);

 VAR_10->elem->software_state = FUNC_2(VAR_12);
 FUNC_9();
 *(VAR_10->afu->native->sw_command_status) = FUNC_3(VAR_11 | 0 | VAR_10->pe);
 FUNC_8();
 FUNC_4(VAR_10->afu, VAR_0, VAR_11 | VAR_10->pe);
 while (1) {
  if (FUNC_11(VAR_9, VAR_14)) {
   FUNC_5(&VAR_10->afu->dev, "WARNING: Process Element Command timed out!\n");
   VAR_15 = -VAR_5;
   goto out;
  }
  if (!VAR_8->link_ok(VAR_10->afu->adapter, VAR_10->afu)) {
   FUNC_5(&VAR_10->afu->dev, "WARNING: Device link down, aborting Process Element Command!\n");
   VAR_15 = -VAR_6;
   goto out;
  }
  VAR_13 = FUNC_1(VAR_10->afu->native->sw_command_status);
  if (VAR_13 == ~0ULL) {
   FUNC_6("cxl: Error adding process element to AFU\n");
   VAR_15 = -1;
   goto out;
  }
  if ((VAR_13 & (VAR_1 | VAR_3 | VAR_2)) ==
      (VAR_11 | (VAR_11 >> 16) | VAR_10->pe))
   break;







  FUNC_7();

 }
out:
 FUNC_13(VAR_10, VAR_11, VAR_15);
 return VAR_15;
}
