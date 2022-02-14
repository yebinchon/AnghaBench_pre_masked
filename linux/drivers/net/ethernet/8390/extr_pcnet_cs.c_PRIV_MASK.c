
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcnet_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ei_device {int dummy; } ;


 char* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline struct pcnet_dev *FUNC_1(struct net_device *VAR_0)
{
 char *VAR_1 = FUNC_0(VAR_0);
 return (struct pcnet_dev *)(VAR_1 + sizeof(struct ei_device));
}
