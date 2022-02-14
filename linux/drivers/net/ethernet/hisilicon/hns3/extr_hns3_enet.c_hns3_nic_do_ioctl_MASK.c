
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;
struct hnae3_handle {TYPE_2__* ae_algo; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* do_ioctl ) (struct hnae3_handle*,struct ifreq*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct hnae3_handle*,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
        struct ifreq *VAR_3, int VAR_4)
{
 struct hnae3_handle *VAR_5 = FUNC_0(VAR_2);

 if (!FUNC_1(VAR_2))
  return -VAR_0;

 if (!VAR_5->ae_algo->ops->do_ioctl)
  return -VAR_1;

 return VAR_5->ae_algo->ops->do_ioctl(VAR_5, VAR_3, VAR_4);
}
