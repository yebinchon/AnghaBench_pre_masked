
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct ucounts {int dummy; } ;
struct TYPE_3__ {int * ops; } ;
struct ipc_namespace {TYPE_1__ ns; int user_ns; struct ucounts* ucounts; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipc_namespace* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct ucounts*) ;
 int FUNC_2 (struct user_namespace*) ;
 struct ucounts* FUNC_3 (struct user_namespace*) ;
 int VAR_3 ;
 int FUNC_4 (struct ipc_namespace*) ;
 struct ipc_namespace* FUNC_5 (int,int ) ;
 int FUNC_6 (struct ipc_namespace*) ;
 int FUNC_7 (struct ipc_namespace*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (struct ipc_namespace*) ;
 int FUNC_13 (struct ipc_namespace*) ;

__attribute__((used)) static struct ipc_namespace *FUNC_14(struct user_namespace *VAR_4,
        struct ipc_namespace *VAR_5)
{
 struct ipc_namespace *VAR_6;
 struct ucounts *VAR_7;
 int VAR_8;

 VAR_8 = -VAR_1;
 VAR_7 = FUNC_3(VAR_4);
 if (!VAR_7)
  goto fail;

 VAR_8 = -VAR_0;
 VAR_6 = FUNC_5(sizeof(struct ipc_namespace), VAR_2);
 if (VAR_6 == ((void*)0))
  goto fail_dec;

 VAR_8 = FUNC_8(&VAR_6->ns);
 if (VAR_8)
  goto fail_free;
 VAR_6->ns.ops = &VAR_3;

 FUNC_11(&VAR_6->count, 1);
 VAR_6->user_ns = FUNC_2(VAR_4);
 VAR_6->ucounts = VAR_7;

 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8)
  goto fail_put;

 FUNC_12(VAR_6);
 FUNC_7(VAR_6);
 FUNC_13(VAR_6);

 return VAR_6;

fail_put:
 FUNC_10(VAR_6->user_ns);
 FUNC_9(&VAR_6->ns);
fail_free:
 FUNC_4(VAR_6);
fail_dec:
 FUNC_1(VAR_7);
fail:
 return FUNC_0(VAR_8);
}
