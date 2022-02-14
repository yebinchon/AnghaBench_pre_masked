
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs_request {int dummy; } ;
struct tcs_group {int offset; int lock; struct tcs_request const** req; } ;
struct rsc_drv {int lock; int tcs_in_use; } ;


 scalar_t__ FUNC_0 (struct tcs_group*) ;
 int FUNC_1 (struct tcs_group*) ;
 int FUNC_2 (struct rsc_drv*,int,int ,struct tcs_request const*) ;
 int FUNC_3 (struct rsc_drv*,int) ;
 int FUNC_4 (struct rsc_drv*,struct tcs_group*,struct tcs_request const*) ;
 int FUNC_5 (struct tcs_group*) ;
 struct tcs_group* FUNC_6 (struct rsc_drv*,struct tcs_request const*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct rsc_drv *VAR_0, const struct tcs_request *VAR_1)
{
 struct tcs_group *VAR_2;
 int VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 VAR_2 = FUNC_6(VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_9(&VAR_2->lock, VAR_4);
 FUNC_8(&VAR_0->lock);




 VAR_5 = FUNC_4(VAR_0, VAR_2, VAR_1);
 if (VAR_5) {
  FUNC_10(&VAR_0->lock);
  goto done_write;
 }

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3 < 0) {
  VAR_5 = VAR_3;
  FUNC_10(&VAR_0->lock);
  goto done_write;
 }

 VAR_2->req[VAR_3 - VAR_2->offset] = VAR_1;
 FUNC_7(VAR_3, VAR_0->tcs_in_use);
 FUNC_10(&VAR_0->lock);

 FUNC_2(VAR_0, VAR_3, 0, VAR_1);
 FUNC_3(VAR_0, VAR_3);

done_write:
 FUNC_11(&VAR_2->lock, VAR_4);
 return VAR_5;
}
