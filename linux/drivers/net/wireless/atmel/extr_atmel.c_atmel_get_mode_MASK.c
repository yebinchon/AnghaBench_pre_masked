
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct atmel_private {int operating_mode; } ;
typedef int __u32 ;


 struct atmel_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
     struct iw_request_info *VAR_1,
     __u32 *VAR_2,
     char *VAR_3)
{
 struct atmel_private *VAR_4 = FUNC_0(VAR_0);

 *VAR_2 = VAR_4->operating_mode;
 return 0;
}
