
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct newport_regs {int dummy; } ;
struct gio_device_id {int dummy; } ;
struct TYPE_2__ {int start; } ;
struct gio_device {TYPE_1__ resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,scalar_t__,int) ;
 scalar_t__ FUNC_3 (unsigned long,int) ;
 int VAR_4 ;
 struct newport_regs* VAR_5 ;
 int FUNC_4 (unsigned long,int,char*) ;

__attribute__((used)) static int FUNC_5(struct gio_device *VAR_6,
    const struct gio_device_id *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;

 if (!VAR_6->resource.start)
  return -VAR_1;

 if (VAR_5)
  return -VAR_0;

 VAR_8 = VAR_6->resource.start + 0xF0000;
 if (!FUNC_4(VAR_8, 0x10000, "Newport"))
  return -VAR_2;

 VAR_5 = (struct newport_regs *)
  FUNC_3(VAR_8, sizeof(struct newport_regs));
 FUNC_0();
 VAR_9 = FUNC_2(&VAR_4, 0, VAR_3 - 1, 1);
 FUNC_1();
 return VAR_9;
}
