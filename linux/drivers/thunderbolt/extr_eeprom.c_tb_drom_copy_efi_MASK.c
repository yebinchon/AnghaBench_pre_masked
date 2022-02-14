
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct tb_switch {int * drom; TYPE_2__* tb; } ;
struct tb_drom_header {int data_len; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;
struct TYPE_5__ {TYPE_1__* nhi; } ;
struct TYPE_4__ {TYPE_3__* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int *,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct tb_switch *VAR_4, u16 *VAR_5)
{
 struct device *VAR_6 = &VAR_4->tb->nhi->pdev->dev;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_6, "ThunderboltDROM");
 if (VAR_7 < 0 || VAR_7 < sizeof(struct tb_drom_header))
  return -VAR_0;

 VAR_4->drom = FUNC_3(VAR_7, VAR_2);
 if (!VAR_4->drom)
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_6, "ThunderboltDROM", VAR_4->drom,
         VAR_7);
 if (VAR_8)
  goto err;

 *VAR_5 = ((struct tb_drom_header *)VAR_4->drom)->data_len +
         VAR_3;
 if (*VAR_5 > VAR_7)
  goto err;

 return 0;

err:
 FUNC_2(VAR_4->drom);
 VAR_4->drom = ((void*)0);
 return -VAR_0;
}
