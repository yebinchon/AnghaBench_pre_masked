
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs_request {int dummy; } ;
struct tcs_group {int lock; } ;
struct rsc_drv {int dummy; } ;


 scalar_t__ FUNC_0 (struct tcs_group*) ;
 int FUNC_1 (struct tcs_group*) ;
 int FUNC_2 (struct rsc_drv*,int,int,struct tcs_request const*) ;
 int FUNC_3 (struct tcs_group*,struct tcs_request const*,int*,int*) ;
 struct tcs_group* FUNC_4 (struct rsc_drv*,struct tcs_request const*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct rsc_drv *VAR_0, const struct tcs_request *VAR_1)
{
 struct tcs_group *VAR_2;
 int VAR_3 = 0, VAR_4 = 0;
 unsigned long VAR_5;
 int VAR_6;

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_5(&VAR_2->lock, VAR_5);

 VAR_6 = FUNC_3(VAR_2, VAR_1, &VAR_3, &VAR_4);
 if (!VAR_6)
  FUNC_2(VAR_0, VAR_3, VAR_4, VAR_1);
 FUNC_6(&VAR_2->lock, VAR_5);

 return VAR_6;
}
