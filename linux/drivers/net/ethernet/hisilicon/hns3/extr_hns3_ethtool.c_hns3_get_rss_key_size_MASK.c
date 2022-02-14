
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct hnae3_handle {TYPE_2__* ae_algo; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_rss_key_size ) (struct hnae3_handle*) ;} ;


 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_0)
{
 struct hnae3_handle *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->ae_algo->ops->get_rss_key_size)
  return 0;

 return VAR_1->ae_algo->ops->get_rss_key_size(VAR_1);
}
