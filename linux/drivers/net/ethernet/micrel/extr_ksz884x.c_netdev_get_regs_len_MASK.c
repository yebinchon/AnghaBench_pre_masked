
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct hw_regs {scalar_t__ end; scalar_t__ start; } ;


 struct hw_regs* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_1)
{
 struct hw_regs *VAR_2 = VAR_0;
 int VAR_3 = 0x10 * sizeof(u32);

 while (VAR_2->end > VAR_2->start) {
  VAR_3 += (VAR_2->end - VAR_2->start + 3) / 4 * 4;
  VAR_2++;
 }
 return VAR_3;
}
