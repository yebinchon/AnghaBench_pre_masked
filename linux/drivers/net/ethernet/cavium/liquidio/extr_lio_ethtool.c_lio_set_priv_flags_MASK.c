
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct lio {int oct_dev; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, u32 VAR_2)
{
 struct lio *VAR_3 = FUNC_0(VAR_1);
 bool VAR_4 = !!(VAR_2 & (0x1 << VAR_0));

 FUNC_1(VAR_3->oct_dev, VAR_0,
     VAR_4);
 return 0;
}
