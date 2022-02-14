
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nr_file_filters; } ;
struct perf_event {TYPE_1__ addr_filters; TYPE_3__* pmu; int parent; TYPE_2__* ctx; } ;
struct TYPE_6__ {int (* addr_filters_validate ) (int *) ;} ;
struct TYPE_5__ {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct perf_event*,int *) ;
 int VAR_2 ;
 int FUNC_5 (struct perf_event*,int ) ;
 int FUNC_6 (struct perf_event*,char*,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct perf_event *VAR_3, char *VAR_4)
{
 FUNC_0(VAR_1);
 int VAR_5;





 FUNC_3(&VAR_3->ctx->mutex);

 if (FUNC_1(VAR_3->parent))
  return -VAR_0;

 VAR_5 = FUNC_6(VAR_3, VAR_4, &VAR_1);
 if (VAR_5)
  goto fail_clear_files;

 VAR_5 = VAR_3->pmu->addr_filters_validate(&VAR_1);
 if (VAR_5)
  goto fail_free_filters;


 FUNC_4(VAR_3, &VAR_1);


 FUNC_5(VAR_3, VAR_2);

 return VAR_5;

fail_free_filters:
 FUNC_2(&VAR_1);

fail_clear_files:
 VAR_3->addr_filters.nr_file_filters = 0;

 return VAR_5;
}
