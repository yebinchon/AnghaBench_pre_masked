
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct venus_hfi_device {TYPE_1__* core; } ;
struct mem_desc {int kva; int attrs; int da; int size; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct venus_hfi_device *VAR_4, struct mem_desc *VAR_5,
         u32 VAR_6)
{
 struct device *VAR_7 = VAR_4->core->dev;

 VAR_5->attrs = VAR_0;
 VAR_5->size = FUNC_0(VAR_6, VAR_3);

 VAR_5->kva = FUNC_1(VAR_7, VAR_5->size, &VAR_5->da, VAR_2,
        VAR_5->attrs);
 if (!VAR_5->kva)
  return -VAR_1;

 return 0;
}
