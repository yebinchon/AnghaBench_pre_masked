
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct io_ring_ctx {TYPE_2__* ring_sock; } ;
struct file {int dummy; } ;
struct TYPE_5__ {TYPE_1__* sk; struct file* file; } ;
struct TYPE_4__ {struct io_ring_ctx* sk_user_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct file*) ;
 int VAR_4 ;
 struct file* FUNC_2 (char*,int *,struct io_ring_ctx*,int) ;
 int FUNC_3 (int,struct file*) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int ,int ,int ,TYPE_2__**) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct io_ring_ctx *VAR_7)
{
 struct file *VAR_8;
 int VAR_9;
 VAR_9 = FUNC_4(VAR_2 | VAR_1);
 if (VAR_9 < 0)
  goto err;

 VAR_8 = FUNC_2("[io_uring]", &VAR_6, VAR_7,
     VAR_2 | VAR_1);
 if (FUNC_0(VAR_8)) {
  FUNC_5(VAR_9);
  VAR_9 = FUNC_1(VAR_8);
  goto err;
 }





 FUNC_3(VAR_9, VAR_8);
 return VAR_9;
err:




 return VAR_9;
}
