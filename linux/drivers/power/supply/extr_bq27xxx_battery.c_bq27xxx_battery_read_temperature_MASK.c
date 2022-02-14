
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq27xxx_device_info {int opts; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bq27xxx_device_info*,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct bq27xxx_device_info *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1, 0);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2->dev, "error reading temperature\n");
  return VAR_3;
 }

 if (VAR_2->opts & VAR_0)
  VAR_3 = 5 * VAR_3 / 2;

 return VAR_3;
}
