
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct hnae3_handle {TYPE_2__* pdev; TYPE_1__* ae_algo; } ;
struct hnae3_ae_ops {int (* get_fec ) (struct hnae3_handle*,int *,int *) ;} ;
struct ethtool_fecparam {void* active_fec; void* fec; } ;
struct TYPE_4__ {int revision; } ;
struct TYPE_3__ {struct hnae3_ae_ops* ops; } ;


 int VAR_0 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct hnae3_handle*,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
        struct ethtool_fecparam *VAR_2)
{
 struct hnae3_handle *VAR_3 = FUNC_0(VAR_1);
 const struct hnae3_ae_ops *VAR_4 = VAR_3->ae_algo->ops;
 u8 VAR_5;
 u8 VAR_6;

 if (VAR_3->pdev->revision == 0x20)
  return -VAR_0;

 if (!VAR_4->get_fec)
  return -VAR_0;

 VAR_4->get_fec(VAR_3, &VAR_5, &VAR_6);

 VAR_2->fec = FUNC_1(VAR_5);
 VAR_2->active_fec = FUNC_1(VAR_6);

 return 0;
}
