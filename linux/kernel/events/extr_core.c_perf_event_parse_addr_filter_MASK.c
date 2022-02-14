
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int from; int * to; } ;
typedef TYPE_4__ substring_t ;
struct TYPE_11__ {int nr_file_filters; } ;
struct TYPE_9__ {scalar_t__ exclude_kernel; } ;
struct perf_event {TYPE_3__ addr_filters; TYPE_2__* ctx; TYPE_1__ attr; } ;
struct TYPE_13__ {int dentry; } ;
struct perf_addr_filter {int action; TYPE_7__ path; int size; int offset; } ;
struct list_head {int dummy; } ;
typedef enum perf_addr_filter_action_t { ____Placeholder_perf_addr_filter_action_t } perf_addr_filter_action_t ;
struct TYPE_14__ {int i_mode; } ;
struct TYPE_10__ {int task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (int ) ;
 TYPE_8__* FUNC_1 (int ) ;
 int FUNC_2 (struct list_head*) ;
 int VAR_9 ;
 int FUNC_3 (char*,int ,TYPE_7__*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int ,int *) ;
 char* FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (char*,int ,TYPE_4__*) ;
 struct perf_addr_filter* FUNC_9 (struct perf_event*,struct list_head*) ;
 char* FUNC_10 (char**,char*) ;

__attribute__((used)) static int
FUNC_11(struct perf_event *VAR_10, char *VAR_11,
        struct list_head *VAR_12)
{
 struct perf_addr_filter *VAR_13 = ((void*)0);
 char *VAR_14, *VAR_15, *VAR_16 = ((void*)0);
 substring_t VAR_17[VAR_8];
 int VAR_18 = VAR_4, VAR_19;
 unsigned int VAR_20 = 0;
 int VAR_21 = -VAR_0;

 VAR_15 = VAR_11 = FUNC_5(VAR_11, VAR_3);
 if (!VAR_11)
  return -VAR_1;

 while ((VAR_14 = FUNC_10(&VAR_11, " ,\n")) != ((void*)0)) {
  static const enum perf_addr_filter_action_t VAR_22[] = {
   [137] = 130,
   [136] = 129,
   [135] = 128,
  };
  VAR_21 = -VAR_0;

  if (!*VAR_14)
   continue;


  if (VAR_18 == VAR_4) {
   VAR_13 = FUNC_9(VAR_10, VAR_12);
   if (!VAR_13)
    goto fail;
  }

  VAR_19 = FUNC_8(VAR_14, VAR_9, VAR_17);
  switch (VAR_19) {
  case 137:
  case 136:
  case 135:
   if (VAR_18 != VAR_4)
    goto fail;

   VAR_13->action = VAR_22[VAR_19];
   VAR_18 = VAR_6;
   break;

  case 131:
  case 132:
   VAR_20 = 1;


  case 133:
  case 134:
   if (VAR_18 != VAR_6)
    goto fail;

   *VAR_17[0].to = 0;
   VAR_21 = FUNC_6(VAR_17[0].from, 0, &VAR_13->offset);
   if (VAR_21)
    goto fail;

   if (VAR_19 == 132 || VAR_19 == 134) {
    *VAR_17[1].to = 0;
    VAR_21 = FUNC_6(VAR_17[1].from, 0, &VAR_13->size);
    if (VAR_21)
     goto fail;
   }

   if (VAR_19 == 134 || VAR_19 == 133) {
    int VAR_23 = VAR_19 == 134 ? 2 : 1;

    VAR_16 = FUNC_7(&VAR_17[VAR_23]);
    if (!VAR_16) {
     VAR_21 = -VAR_1;
     goto fail;
    }
   }

   VAR_18 = VAR_5;
   break;

  default:
   goto fail;
  }






  if (VAR_18 == VAR_5) {
   VAR_21 = -VAR_0;
   if (VAR_20 && VAR_10->attr.exclude_kernel)
    goto fail;





   if (VAR_13->action == 130 &&
       !VAR_13->size)
    goto fail;

   if (!VAR_20) {
    if (!VAR_16)
     goto fail;
    VAR_21 = -VAR_2;
    if (!VAR_10->ctx->task)
     goto fail_free_name;


    VAR_21 = FUNC_3(VAR_16, VAR_7,
      &VAR_13->path);
    if (VAR_21)
     goto fail_free_name;

    FUNC_4(VAR_16);
    VAR_16 = ((void*)0);

    VAR_21 = -VAR_0;
    if (!VAR_13->path.dentry ||
        !FUNC_0(FUNC_1(VAR_13->path.dentry)
          ->i_mode))
     goto fail;

    VAR_10->addr_filters.nr_file_filters++;
   }


   VAR_18 = VAR_4;
   VAR_13 = ((void*)0);
  }
 }

 if (VAR_18 != VAR_4)
  goto fail;

 FUNC_4(VAR_15);

 return 0;

fail_free_name:
 FUNC_4(VAR_16);
fail:
 FUNC_2(VAR_12);
 FUNC_4(VAR_15);

 return VAR_21;
}
