
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct hnae3_handle {TYPE_1__* ae_algo; } ;
struct TYPE_4__ {int (* set_mtu ) (struct hnae3_handle*,int) ;} ;
struct TYPE_3__ {TYPE_2__* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 int FUNC_3 (struct hnae3_handle*,int ,struct net_device*,char*,int,int) ;
 int FUNC_4 (struct hnae3_handle*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, int VAR_4)
{
 struct hnae3_handle *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 if (FUNC_1(VAR_3))
  return -VAR_0;

 if (!VAR_5->ae_algo->ops->set_mtu)
  return -VAR_1;

 FUNC_3(VAR_5, VAR_2, VAR_3,
    "change mtu from %u to %d\n", VAR_3->mtu, VAR_4);

 VAR_6 = VAR_5->ae_algo->ops->set_mtu(VAR_5, VAR_4);
 if (VAR_6)
  FUNC_2(VAR_3, "failed to change MTU in hardware %d\n",
      VAR_6);
 else
  VAR_3->mtu = VAR_4;

 return VAR_6;
}
