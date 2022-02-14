
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ns83820 {scalar_t__ base; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ns83820* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_3)
{
 struct ns83820 *VAR_4 = FUNC_0(VAR_3);
 u32 VAR_5 = FUNC_1(VAR_4->base + VAR_0) ^ VAR_2;
 return VAR_5 & VAR_1 ? 1 : 0;
}
