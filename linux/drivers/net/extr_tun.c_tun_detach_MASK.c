
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {struct net_device* dev; } ;
struct tun_file {int tun; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct tun_file*,int) ;
 int FUNC_1 (struct net_device*) ;
 struct tun_struct* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct tun_file *VAR_0, bool VAR_1)
{
 struct tun_struct *VAR_2;
 struct net_device *VAR_3;

 FUNC_3();
 VAR_2 = FUNC_2(VAR_0->tun);
 VAR_3 = VAR_2 ? VAR_2->dev : ((void*)0);
 FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  FUNC_1(VAR_3);
 FUNC_4();
}
