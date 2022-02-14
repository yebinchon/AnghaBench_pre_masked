
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct filter_ctx {int result; int completion; } ;
struct ch_filter_specification {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int,struct ch_filter_specification*,struct filter_ctx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(struct net_device *VAR_2, int VAR_3,
       struct ch_filter_specification *VAR_4)
{
 struct filter_ctx VAR_5;
 int VAR_6;

 FUNC_1(&VAR_5.completion);

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_5);
 if (VAR_6)
  goto out;


 VAR_6 = FUNC_2(&VAR_5.completion, 10 * VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6 = VAR_5.result;
out:
 return VAR_6;
}
