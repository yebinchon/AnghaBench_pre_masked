
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cfv_info {int napi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cfv_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct cfv_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct cfv_info *VAR_2 = FUNC_3(VAR_1);

 if (FUNC_0(VAR_2))
  return -VAR_0;

 FUNC_4(VAR_1);
 FUNC_1(&VAR_2->napi);


 FUNC_2(&VAR_2->napi);
 return 0;
}
