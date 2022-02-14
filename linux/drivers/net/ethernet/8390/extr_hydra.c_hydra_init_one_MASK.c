
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zorro_device_id {int dummy; } ;
struct TYPE_2__ {int start; } ;
struct zorro_dev {TYPE_1__ resource; } ;


 int VAR_0 ;
 int FUNC_0 (struct zorro_dev*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,char*) ;

__attribute__((used)) static int FUNC_3(struct zorro_dev *VAR_1,
     const struct zorro_device_id *VAR_2)
{
    int VAR_3;

    if (!FUNC_2(VAR_1->resource.start, 0x10000, "Hydra"))
 return -VAR_0;
    if ((VAR_3 = FUNC_0(VAR_1))) {
 FUNC_1(VAR_1->resource.start, 0x10000);
 return -VAR_0;
    }
    return 0;
}
