
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct enic {int rss_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 struct enic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, u32 *VAR_3, u8 *VAR_4,
    u8 *VAR_5)
{
 struct enic *VAR_6 = FUNC_1(VAR_2);

 if (VAR_4)
  FUNC_0(VAR_4, VAR_6->rss_key, VAR_0);

 if (VAR_5)
  *VAR_5 = VAR_1;

 return 0;
}
