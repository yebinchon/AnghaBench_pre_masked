
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int num_tqps; } ;
struct hnae3_handle {TYPE_2__ kinfo; TYPE_1__* ae_algo; } ;
struct hnae3_ae_ops {int (* get_sset_count ) (struct hnae3_handle*,int) ;} ;
struct TYPE_3__ {struct hnae3_ae_ops* ops; } ;


 int VAR_0 ;


 int VAR_1 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*,int) ;
 int FUNC_2 (struct hnae3_handle*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, int VAR_3)
{
 struct hnae3_handle *VAR_4 = FUNC_0(VAR_2);
 const struct hnae3_ae_ops *VAR_5 = VAR_4->ae_algo->ops;

 if (!VAR_5->get_sset_count)
  return -VAR_0;

 switch (VAR_3) {
 case 129:
  return ((VAR_1 * VAR_4->kinfo.num_tqps) +
   VAR_5->get_sset_count(VAR_4, VAR_3));

 case 128:
  return VAR_5->get_sset_count(VAR_4, VAR_3);

 default:
  return -VAR_0;
 }
}
