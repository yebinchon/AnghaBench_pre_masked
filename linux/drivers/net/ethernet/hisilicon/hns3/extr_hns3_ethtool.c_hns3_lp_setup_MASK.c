
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int flags; } ;
struct hnae3_handle {int netdev_flags; TYPE_3__* ae_algo; TYPE_1__* pdev; } ;
typedef enum hnae3_loop { ____Placeholder_hnae3_loop } hnae3_loop ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* set_loopback ) (struct hnae3_handle*,int,int) ;int (* set_promisc_mode ) (struct hnae3_handle*,int,int) ;} ;
struct TYPE_4__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (struct net_device*,int) ;
 struct hnae3_handle* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct hnae3_handle*,int,int) ;
 int FUNC_4 (struct hnae3_handle*,int,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, enum hnae3_loop VAR_4, bool VAR_5)
{
 struct hnae3_handle *VAR_6 = FUNC_1(VAR_3);
 bool VAR_7;
 int VAR_8;

 if (!VAR_6->ae_algo->ops->set_loopback ||
     !VAR_6->ae_algo->ops->set_promisc_mode)
  return -VAR_1;

 switch (VAR_4) {
 case 128:
 case 130:
 case 131:
 case 129:
  VAR_8 = VAR_6->ae_algo->ops->set_loopback(VAR_6, VAR_4, VAR_5);
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }

 if (VAR_8 || VAR_6->pdev->revision >= 0x21)
  return VAR_8;

 if (VAR_5) {
  VAR_6->ae_algo->ops->set_promisc_mode(VAR_6, 1, 1);
 } else {

  FUNC_2(VAR_3, VAR_6->netdev_flags);
  VAR_7 = VAR_3->flags & VAR_2 ? 0 : 1;
  FUNC_0(VAR_3, VAR_7);
 }

 return VAR_8;
}
