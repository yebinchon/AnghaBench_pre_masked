
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct hnae3_handle {TYPE_2__* ae_algo; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_rss ) (struct hnae3_handle*,int *,int *,int *) ;} ;


 int VAR_0 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, u32 *VAR_2, u8 *VAR_3,
   u8 *VAR_4)
{
 struct hnae3_handle *VAR_5 = FUNC_0(VAR_1);

 if (!VAR_5->ae_algo->ops->get_rss)
  return -VAR_0;

 return VAR_5->ae_algo->ops->get_rss(VAR_5, VAR_2, VAR_3, VAR_4);
}
