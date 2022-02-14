
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gem {int dummy; } ;


 int FUNC_0 (struct gem*,int,int,int) ;
 struct gem* FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_2(struct net_device *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct gem *VAR_4 = FUNC_1(VAR_0);
 FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3 & 0xffff);
}
