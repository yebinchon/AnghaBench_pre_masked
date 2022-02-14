
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct filter_ctx {int result; int completion; } ;
struct ch_filter_specification {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int,struct ch_filter_specification*,struct filter_ctx*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(struct net_device *VAR_3, int VAR_4,
       struct ch_filter_specification *VAR_5)
{
 struct filter_ctx VAR_6;
 int VAR_7;

 if (FUNC_2(VAR_3)->flags & VAR_0)
  return 0;

 FUNC_1(&VAR_6.completion);

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_6);
 if (VAR_7)
  goto out;


 VAR_7 = FUNC_3(&VAR_6.completion, 10 * VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7 = VAR_6.result;
out:
 return VAR_7;
}
