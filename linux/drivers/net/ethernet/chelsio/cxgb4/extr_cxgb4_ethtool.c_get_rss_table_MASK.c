
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct port_info {unsigned int rss_size; int * rss; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, u32 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 const struct port_info *VAR_5 = FUNC_0(VAR_1);
 unsigned int VAR_6 = VAR_5->rss_size;

 if (VAR_4)
  *VAR_4 = VAR_0;
 if (!VAR_2)
  return 0;
 while (VAR_6--)
  VAR_2[VAR_6] = VAR_5->rss[VAR_6];
 return 0;
}
