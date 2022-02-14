
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef enum hnae3_loop { ____Placeholder_hnae3_loop } hnae3_loop ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int,int) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, enum hnae3_loop VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, 0);
 if (VAR_3) {
  FUNC_1(VAR_1, "lb_setup return error: %d\n", VAR_3);
  return VAR_3;
 }

 FUNC_2(VAR_0, VAR_0 * 2);

 return 0;
}
