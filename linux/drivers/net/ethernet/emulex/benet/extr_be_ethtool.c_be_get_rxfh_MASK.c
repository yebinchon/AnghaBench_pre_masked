
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rss_info {int rss_hkey; int * rss_queue; } ;
struct net_device {int dummy; } ;
struct be_adapter {struct rss_info rss_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 struct be_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, u32 *VAR_4, u8 *VAR_5,
         u8 *VAR_6)
{
 struct be_adapter *VAR_7 = FUNC_1(VAR_3);
 int VAR_8;
 struct rss_info *VAR_9 = &VAR_7->rss_info;

 if (VAR_4) {
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
   VAR_4[VAR_8] = VAR_9->rss_queue[VAR_8];
 }

 if (VAR_5)
  FUNC_0(VAR_5, VAR_9->rss_hkey, VAR_1);

 if (VAR_6)
  *VAR_6 = VAR_0;

 return 0;
}
