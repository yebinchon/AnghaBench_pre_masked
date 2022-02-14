
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct ravb_private {int clk; } ;
struct TYPE_2__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_2 (unsigned long long,unsigned long) ;
 struct ravb_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,unsigned long long,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4)
{
 struct ravb_private *VAR_5 = FUNC_3(VAR_4);
 struct device *VAR_6 = VAR_4->dev.parent;
 unsigned long VAR_7;
 uint64_t VAR_8;

 VAR_7 = FUNC_0(VAR_5->clk);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = 1000000000ULL << 20;
 FUNC_2(VAR_8, VAR_7);

 if (VAR_8 < VAR_3 || VAR_8 > VAR_2) {
  FUNC_1(VAR_6, "gti.tiv increment 0x%llx is outside the range 0x%x - 0x%x\n",
   VAR_8, VAR_3, VAR_2);
  return -VAR_0;
 }

 FUNC_4(VAR_4, VAR_8, VAR_1);

 return 0;
}
