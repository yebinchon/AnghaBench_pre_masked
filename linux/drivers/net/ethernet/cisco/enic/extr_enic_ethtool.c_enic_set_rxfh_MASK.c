
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct enic {int rss_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int FUNC_0 (struct enic*) ;
 int FUNC_1 (int ,scalar_t__ const*,int ) ;
 struct enic* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, const u32 *VAR_5,
    const u8 *VAR_6, const u8 VAR_7)
{
 struct enic *VAR_8 = FUNC_2(VAR_4);

 if ((VAR_7 != VAR_2 && VAR_7 != VAR_3) ||
     VAR_5)
  return -VAR_0;

 if (VAR_6)
  FUNC_1(VAR_8->rss_key, VAR_6, VAR_1);

 return FUNC_0(VAR_8);
}
