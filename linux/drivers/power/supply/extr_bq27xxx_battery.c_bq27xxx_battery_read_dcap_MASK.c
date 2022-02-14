
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq27xxx_device_info {int opts; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bq27xxx_device_info*,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct bq27xxx_device_info *VAR_4)
{
 int VAR_5;

 if (VAR_4->opts & VAR_1)
  VAR_5 = FUNC_0(VAR_4, VAR_2, 1);
 else
  VAR_5 = FUNC_0(VAR_4, VAR_2, 0);

 if (VAR_5 < 0) {
  FUNC_1(VAR_4->dev, "error reading initial last measured discharge\n");
  return VAR_5;
 }

 if (VAR_4->opts & VAR_1)
  VAR_5 = (VAR_5 << 8) * VAR_0 / VAR_3;
 else
  VAR_5 *= 1000;

 return VAR_5;
}
