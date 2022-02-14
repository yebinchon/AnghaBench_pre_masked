
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtllib_network {int dummy; } ;
struct rtllib_device {TYPE_1__* pHTInfo; } ;
struct TYPE_2__ {scalar_t__ IOTPeer; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct rtllib_device *VAR_1,
     struct rtllib_network *VAR_2)
{
 u8 VAR_3 = 0;


 if (VAR_1->pHTInfo->IOTPeer == VAR_0)
  VAR_3 = 1;

 return VAR_3;
}
