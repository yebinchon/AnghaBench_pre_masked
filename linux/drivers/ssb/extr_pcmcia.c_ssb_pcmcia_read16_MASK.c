
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ssb_device {struct ssb_bus* bus; } ;
struct ssb_bus {int mmio; int bar_lock; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ssb_device*,int*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static u16 FUNC_5(struct ssb_device *VAR_0, u16 VAR_1)
{
 struct ssb_bus *VAR_2 = VAR_0->bus;
 unsigned long VAR_3;
 int VAR_4;
 u16 VAR_5 = 0xFFFF;

 FUNC_3(&VAR_2->bar_lock, VAR_3);
 VAR_4 = FUNC_2(VAR_0, &VAR_1);
 if (FUNC_0(!VAR_4))
  VAR_5 = FUNC_1(VAR_2->mmio + VAR_1);
 FUNC_4(&VAR_2->bar_lock, VAR_3);

 return VAR_5;
}
