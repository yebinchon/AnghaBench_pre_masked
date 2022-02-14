
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct async_entry {int work; int global_list; int domain_list; scalar_t__ cookie; struct async_domain* domain; void* data; int (* func ) (void*,scalar_t__) ;} ;
struct async_domain {scalar_t__ registered; int pending; } ;
typedef int (* async_func_t ) (void*,scalar_t__) ;
typedef scalar_t__ async_cookie_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct async_entry*) ;
 struct async_entry* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_8 ;
 int FUNC_7 (int,int ,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_9 ;

async_cookie_t FUNC_10(async_func_t VAR_10, void *VAR_11,
       int VAR_12, struct async_domain *VAR_13)
{
 struct async_entry *VAR_14;
 unsigned long VAR_15;
 async_cookie_t VAR_16;


 VAR_14 = FUNC_5(sizeof(struct async_entry), VAR_0);





 if (!VAR_14 || FUNC_3(&VAR_7) > VAR_1) {
  FUNC_4(VAR_14);
  FUNC_8(&VAR_4, VAR_15);
  VAR_16 = VAR_8++;
  FUNC_9(&VAR_4, VAR_15);


  VAR_10(VAR_11, VAR_16);
  return VAR_16;
 }
 FUNC_0(&VAR_14->domain_list);
 FUNC_0(&VAR_14->global_list);
 FUNC_1(&VAR_14->work, VAR_5);
 VAR_14->func = VAR_10;
 VAR_14->data = VAR_11;
 VAR_14->domain = VAR_13;

 FUNC_8(&VAR_4, VAR_15);


 VAR_16 = VAR_14->cookie = VAR_8++;

 FUNC_6(&VAR_14->domain_list, &VAR_13->pending);
 if (VAR_13->registered)
  FUNC_6(&VAR_14->global_list, &VAR_3);

 FUNC_2(&VAR_7);
 FUNC_9(&VAR_4, VAR_15);


 VAR_6->flags |= VAR_2;


 FUNC_7(VAR_12, VAR_9, &VAR_14->work);

 return VAR_16;
}
