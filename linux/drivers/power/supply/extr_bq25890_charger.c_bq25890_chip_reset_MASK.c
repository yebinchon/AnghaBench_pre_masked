
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq25890_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bq25890_device*,int ) ;
 int FUNC_1 (struct bq25890_device*,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct bq25890_device *VAR_2)
{
 int VAR_3;
 int VAR_4 = 10;

 VAR_3 = FUNC_1(VAR_2, VAR_1, 1);
 if (VAR_3 < 0)
  return VAR_3;

 do {
  VAR_3 = FUNC_0(VAR_2, VAR_1);
  if (VAR_3 < 0)
   return VAR_3;

  FUNC_2(5, 10);
 } while (VAR_3 == 1 && --VAR_4);

 if (!VAR_4)
  return -VAR_0;

 return 0;
}
