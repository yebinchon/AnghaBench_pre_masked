
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq2415x_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bq2415x_device*,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct bq2415x_device *VAR_4,
        int VAR_5)
{
 int VAR_6 = (VAR_5/10 - 350) / 2;





 if (VAR_6 < 0)
  VAR_6 = 0;
 else if (VAR_6 > 47)
  return -VAR_3;

 return FUNC_0(VAR_4, VAR_1, VAR_6,
   VAR_0, VAR_2);
}
