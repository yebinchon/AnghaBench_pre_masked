
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq2415x_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bq2415x_device*,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct bq2415x_device *VAR_3, int VAR_4)
{
 int VAR_5;


 if (VAR_4 <= 3400 + 50)
  VAR_5 = 0;
 else if (VAR_4 <= 3500 + 50)
  VAR_5 = 1;
 else if (VAR_4 <= 3600 + 50)
  VAR_5 = 2;
 else
  VAR_5 = 3;

 return FUNC_0(VAR_3, VAR_1, VAR_5,
   VAR_0, VAR_2);
}
