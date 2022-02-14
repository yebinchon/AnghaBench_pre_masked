
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_3__ {unsigned int icv_len; } ;
struct macsec_dev {TYPE_2__* real_dev; TYPE_1__ secy; } ;
struct TYPE_4__ {unsigned int mtu; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 struct macsec_dev* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, int VAR_2)
{
 struct macsec_dev *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4 = VAR_3->secy.icv_len + FUNC_0(1);

 if (VAR_3->real_dev->mtu - VAR_4 < VAR_2)
  return -VAR_0;

 VAR_1->mtu = VAR_2;

 return 0;
}
