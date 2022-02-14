
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_network {int dummy; } ;
struct rtllib_device {scalar_t__ networks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct rtllib_device *VAR_3)
{
 if (VAR_3->networks)
  return 0;

 VAR_3->networks = FUNC_0(VAR_2,
     sizeof(struct rtllib_network), VAR_1);
 if (!VAR_3->networks)
  return -VAR_0;

 return 0;
}
