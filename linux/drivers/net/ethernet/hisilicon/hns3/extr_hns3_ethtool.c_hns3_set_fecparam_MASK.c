
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct hnae3_handle {TYPE_2__* pdev; TYPE_1__* ae_algo; } ;
struct hnae3_ae_ops {int (* set_fec ) (struct hnae3_handle*,int ) ;} ;
struct ethtool_fecparam {int fec; } ;
struct TYPE_4__ {int revision; } ;
struct TYPE_3__ {struct hnae3_ae_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct hnae3_handle* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct hnae3_handle*,int ,struct net_device*,char*,int ) ;
 int FUNC_3 (struct hnae3_handle*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
        struct ethtool_fecparam *VAR_3)
{
 struct hnae3_handle *VAR_4 = FUNC_1(VAR_2);
 const struct hnae3_ae_ops *VAR_5 = VAR_4->ae_algo->ops;
 u32 VAR_6;

 if (VAR_4->pdev->revision == 0x20)
  return -VAR_0;

 if (!VAR_5->set_fec)
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_3->fec);

 FUNC_2(VAR_4, VAR_1, VAR_2, "set fecparam: mode=%u\n", VAR_6);

 return VAR_5->set_fec(VAR_4, VAR_6);
}
