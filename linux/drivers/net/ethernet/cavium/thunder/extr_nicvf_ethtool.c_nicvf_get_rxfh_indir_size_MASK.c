
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rss_size; } ;
struct nicvf {TYPE_1__ rss_info; } ;
struct net_device {int dummy; } ;


 struct nicvf* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_0)
{
 struct nicvf *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->rss_info.rss_size;
}
