
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcnet32_private {TYPE_1__* a; int mii; } ;
struct net_device {unsigned long base_addr; } ;
struct TYPE_2__ {int (* write_bcr ) (unsigned long,int,int) ;} ;


 struct pcnet32_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (unsigned long,int,int) ;
 int FUNC_2 (unsigned long,int,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct pcnet32_private *VAR_4 = FUNC_0(VAR_0);
 unsigned long VAR_5 = VAR_0->base_addr;

 if (!VAR_4->mii)
  return;

 VAR_4->a->write_bcr(VAR_5, 33, ((VAR_1 & 0x1f) << 5) | (VAR_2 & 0x1f));
 VAR_4->a->write_bcr(VAR_5, 34, VAR_3);
}
