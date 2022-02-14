
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xwdt_device {int spinlock; scalar_t__ base; int clk; } ;
struct watchdog_device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct xwdt_device* FUNC_6 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_7(struct watchdog_device *VAR_6)
{
 int VAR_7;
 u32 VAR_8;
 struct xwdt_device *VAR_9 = FUNC_6(VAR_6);

 VAR_7 = FUNC_0(VAR_9->clk);
 if (VAR_7) {
  FUNC_1(VAR_6->parent, "Failed to enable clock\n");
  return VAR_7;
 }

 FUNC_4(&VAR_9->spinlock);


 VAR_8 = FUNC_2(VAR_9->base + VAR_4);
 VAR_8 |= (VAR_2 | VAR_1);

 FUNC_3((VAR_8 | VAR_0),
    VAR_9->base + VAR_4);

 FUNC_3(VAR_3, VAR_9->base + VAR_5);

 FUNC_5(&VAR_9->spinlock);

 return 0;
}
