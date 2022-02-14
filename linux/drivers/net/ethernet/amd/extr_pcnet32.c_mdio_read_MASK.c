
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pcnet32_private {TYPE_1__* a; int mii; } ;
struct net_device {unsigned long base_addr; } ;
struct TYPE_2__ {int (* read_bcr ) (unsigned long,int) ;int (* write_bcr ) (unsigned long,int,int) ;} ;


 struct pcnet32_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (unsigned long,int,int) ;
 int FUNC_2 (unsigned long,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, int VAR_1, int VAR_2)
{
 struct pcnet32_private *VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4 = VAR_0->base_addr;
 u16 VAR_5;

 if (!VAR_3->mii)
  return 0;

 VAR_3->a->write_bcr(VAR_4, 33, ((VAR_1 & 0x1f) << 5) | (VAR_2 & 0x1f));
 VAR_5 = VAR_3->a->read_bcr(VAR_4, 34);

 return VAR_5;
}
