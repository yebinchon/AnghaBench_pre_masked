
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct ocxl_context {scalar_t__ status; int status_mutex; int tidr; int pasid; TYPE_3__* afu; } ;
struct TYPE_4__ {unsigned long id; } ;
struct mm_struct {TYPE_1__ context; } ;
struct TYPE_6__ {TYPE_2__* fn; } ;
struct TYPE_5__ {int link; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,unsigned long,int ,int ,struct mm_struct*,int ,struct ocxl_context*) ;
 int VAR_3 ;

int FUNC_3(struct ocxl_context *VAR_4, u64 VAR_5, struct mm_struct *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8 = 0;


 FUNC_0(&VAR_4->status_mutex);
 if (VAR_4->status != VAR_2) {
  VAR_7 = -VAR_1;
  goto out;
 }

 if (VAR_6)
  VAR_8 = VAR_6->context.id;

 VAR_7 = FUNC_2(VAR_4->afu->fn->link, VAR_4->pasid, VAR_8, VAR_4->tidr,
         VAR_5, VAR_6, VAR_3, VAR_4);
 if (VAR_7)
  goto out;

 VAR_4->status = VAR_0;
out:
 FUNC_1(&VAR_4->status_mutex);
 return VAR_7;
}
