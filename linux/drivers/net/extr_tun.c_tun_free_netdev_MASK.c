
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int filter_prog; int steering_prog; int security; int pcpu_stats; int disabled; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tun_struct*,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct tun_struct* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tun_struct*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_0)
{
 struct tun_struct *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(!(FUNC_3(&VAR_1->disabled)));
 FUNC_2(VAR_1->pcpu_stats);
 FUNC_6(VAR_1);
 FUNC_5(VAR_1->security);
 FUNC_1(VAR_1, &VAR_1->steering_prog, ((void*)0));
 FUNC_1(VAR_1, &VAR_1->filter_prog, ((void*)0));
}
