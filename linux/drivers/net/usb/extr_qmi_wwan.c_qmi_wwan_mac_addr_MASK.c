
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,void*) ;
 int FUNC_1 (struct net_device*,void*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, void *VAR_2)
{
 int VAR_3;
 struct sockaddr *VAR_4 = VAR_2;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 if (FUNC_2(VAR_4->sa_data))
  return -VAR_0;
 FUNC_0(VAR_1, VAR_2);
 return 0;
}
