
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tun_struct {TYPE_1__* dev; } ;
struct ifreq {int ifr_flags; int ifr_name; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct tun_struct*,char*) ;
 int FUNC_2 (struct tun_struct*) ;

__attribute__((used)) static void FUNC_3(struct tun_struct *VAR_1, struct ifreq *VAR_2)
{
 FUNC_1(VAR_0, VAR_1, "tun_get_iff\n");

 FUNC_0(VAR_2->ifr_name, VAR_1->dev->name);

 VAR_2->ifr_flags = FUNC_2(VAR_1);

}
