
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct sockaddr_storage local_addr; } ;
struct cxgbit_np {TYPE_2__ com; } ;
struct cxgbit_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cxgbit_device* FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int ) ;
 struct net_device* FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static struct cxgbit_device *FUNC_5(struct cxgbit_np *VAR_2)
{
 struct sockaddr_storage *VAR_3 = &VAR_2->com.local_addr;
 int VAR_4 = VAR_3->ss_family;
 struct net_device *VAR_5 = ((void*)0);
 struct cxgbit_device *VAR_6 = ((void*)0);

 FUNC_3();
 if (VAR_4 == VAR_0) {
  struct sockaddr_in *VAR_7;

  VAR_7 = (struct sockaddr_in *)VAR_3;
  VAR_5 = FUNC_1(VAR_7->sin_addr.s_addr);
 } else if (VAR_4 == VAR_1) {
  struct sockaddr_in6 *VAR_8;

  VAR_8 = (struct sockaddr_in6 *)VAR_3;
  VAR_5 = FUNC_2(&VAR_8->sin6_addr);
 }
 if (!VAR_5)
  goto out;

 VAR_6 = FUNC_0(VAR_5, ((void*)0));
out:
 FUNC_4();
 return VAR_6;
}
