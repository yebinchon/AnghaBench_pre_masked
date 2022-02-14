
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonic_local {int dma_bitmode; int cda; } ;
struct net_device {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 struct sonic_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline __u16 FUNC_2(struct net_device* VAR_1)
{
 struct sonic_local *VAR_2 = FUNC_0(VAR_1);
 return FUNC_1(VAR_2->cda, VAR_2->dma_bitmode, VAR_0);
}
