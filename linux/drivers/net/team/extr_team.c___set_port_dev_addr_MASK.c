
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ss_family; int __data; } ;
struct sockaddr {int dummy; } ;
struct net_device {int type; int addr_len; } ;


 int FUNC_0 (struct net_device*,struct sockaddr*,int *) ;
 int FUNC_1 (int ,unsigned char const*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
          const unsigned char *VAR_1)
{
 struct sockaddr_storage VAR_2;

 FUNC_1(VAR_2.__data, VAR_1, VAR_0->addr_len);
 VAR_2.ss_family = VAR_0->type;
 return FUNC_0(VAR_0, (struct sockaddr *)&VAR_2, ((void*)0));
}
