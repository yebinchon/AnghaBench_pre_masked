
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct port_info {unsigned int rss_size; int * rss; TYPE_1__* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;
 int FUNC_0 (struct port_info*,int *) ;
 struct port_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5, const u32 *VAR_6, const u8 *VAR_7,
    const u8 VAR_8)
{
 unsigned int VAR_9;
 struct port_info *VAR_10 = FUNC_1(VAR_5);




 if (VAR_7 ||
     (VAR_8 != VAR_3 && VAR_8 != VAR_4))
  return -VAR_1;
 if (!VAR_6)
  return 0;


 if (VAR_10->adapter->flags & VAR_0) {
  for (VAR_9 = 0; VAR_9 < VAR_10->rss_size; VAR_9++)
   VAR_10->rss[VAR_9] = VAR_6[VAR_9];

  return FUNC_0(VAR_10, VAR_10->rss);
 }

 return -VAR_2;
}
