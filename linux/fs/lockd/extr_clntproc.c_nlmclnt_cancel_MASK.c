
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; } ;
struct TYPE_4__ {int block; } ;
struct nlm_rqst {TYPE_1__ a_res; int a_count; TYPE_2__ a_args; int a_flags; } ;
struct nlm_host {int dummy; } ;
struct file_lock {int fl_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 struct nlm_rqst* FUNC_2 (struct nlm_host*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,struct nlm_rqst*,int ,int *) ;
 int VAR_5 ;
 int FUNC_4 (struct nlm_rqst*) ;
 int FUNC_5 (struct nlm_rqst*,struct file_lock*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct nlm_host *VAR_6, int VAR_7, struct file_lock *VAR_8)
{
 struct nlm_rqst *VAR_9;
 int VAR_10;

 FUNC_0("lockd: blocking lock attempt was interrupted by a signal.\n"
  "       Attempting to cancel lock.\n");

 VAR_9 = FUNC_2(VAR_6);
 if (!VAR_9)
  return -VAR_1;
 VAR_9->a_flags = VAR_3;

 FUNC_5(VAR_9, VAR_8);
 VAR_9->a_args.block = VAR_7;

 FUNC_6(&VAR_9->a_count);
 VAR_10 = FUNC_3(FUNC_1(VAR_8->fl_file), VAR_9,
   VAR_2, &VAR_5);
 if (VAR_10 == 0 && VAR_9->a_res.status == VAR_4)
  VAR_10 = -VAR_0;
 FUNC_4(VAR_9);
 return VAR_10;
}
