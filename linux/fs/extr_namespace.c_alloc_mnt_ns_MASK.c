
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct ucounts {int dummy; } ;
struct TYPE_2__ {int * ops; } ;
struct mnt_namespace {struct ucounts* ucounts; int user_ns; int poll; int list; int count; int seq; TYPE_1__ ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mnt_namespace* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct ucounts*) ;
 int FUNC_5 (struct user_namespace*) ;
 struct ucounts* FUNC_6 (struct user_namespace*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mnt_namespace*) ;
 struct mnt_namespace* FUNC_9 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static struct mnt_namespace *FUNC_11(struct user_namespace *VAR_5, bool VAR_6)
{
 struct mnt_namespace *VAR_7;
 struct ucounts *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_6(VAR_5);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_9(sizeof(struct mnt_namespace), VAR_2);
 if (!VAR_7) {
  FUNC_4(VAR_8);
  return FUNC_0(-VAR_0);
 }
 if (!VAR_6) {
  VAR_9 = FUNC_10(&VAR_7->ns);
  if (VAR_9) {
   FUNC_8(VAR_7);
   FUNC_4(VAR_8);
   return FUNC_0(VAR_9);
  }
 }
 VAR_7->ns.ops = &VAR_4;
 if (!VAR_6)
  VAR_7->seq = FUNC_2(1, &VAR_3);
 FUNC_3(&VAR_7->count, 1);
 FUNC_1(&VAR_7->list);
 FUNC_7(&VAR_7->poll);
 VAR_7->user_ns = FUNC_5(VAR_5);
 VAR_7->ucounts = VAR_8;
 return VAR_7;
}
