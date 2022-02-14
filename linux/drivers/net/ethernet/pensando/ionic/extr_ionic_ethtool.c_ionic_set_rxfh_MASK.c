
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ionic_lif {int rss_types; } ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (struct ionic_lif*,int ,scalar_t__ const*,int const*) ;
 struct ionic_lif* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, const u32 *VAR_4,
     const u8 *VAR_5, const u8 VAR_6)
{
 struct ionic_lif *VAR_7 = FUNC_1(VAR_3);
 int VAR_8;

 if (VAR_6 != VAR_1 && VAR_6 != VAR_2)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_7, VAR_7->rss_types, VAR_5, VAR_4);
 if (VAR_8)
  return VAR_8;

 return 0;
}
