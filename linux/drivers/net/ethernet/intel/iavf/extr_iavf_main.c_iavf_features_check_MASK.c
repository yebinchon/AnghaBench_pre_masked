
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; size_t data; scalar_t__ encapsulation; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int gso_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (struct sk_buff*) ;
 size_t FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 size_t FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 size_t FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static netdev_features_t FUNC_6(struct sk_buff *VAR_3,
          struct net_device *VAR_4,
          netdev_features_t VAR_5)
{
 size_t VAR_6;





 if (VAR_3->ip_summed != VAR_0)
  return VAR_5;




 if (FUNC_2(VAR_3) && (FUNC_4(VAR_3)->gso_size < 64))
  VAR_5 &= ~VAR_2;


 VAR_6 = FUNC_3(VAR_3) - VAR_3->data;
 if (VAR_6 & ~(63 * 2))
  goto out_err;


 VAR_6 = FUNC_5(VAR_3) - FUNC_3(VAR_3);
 if (VAR_6 & ~(127 * 4))
  goto out_err;

 if (VAR_3->encapsulation) {

  VAR_6 = FUNC_0(VAR_3) - FUNC_5(VAR_3);
  if (VAR_6 & ~(127 * 2))
   goto out_err;


  VAR_6 = FUNC_1(VAR_3) -
        FUNC_0(VAR_3);
  if (VAR_6 & ~(127 * 4))
   goto out_err;
 }






 return VAR_5;
out_err:
 return VAR_5 & ~(VAR_1 | VAR_2);
}
