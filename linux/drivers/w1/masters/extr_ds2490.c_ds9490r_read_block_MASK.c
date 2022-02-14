
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ds_device*,int*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (int*,int*,int) ;

__attribute__((used)) static u8 FUNC_4(void *VAR_1, u8 *VAR_2, int VAR_3)
{
 struct ds_device *VAR_4 = VAR_1;
 int VAR_5;
 u8 *VAR_6;

 if (VAR_3 <= 0)
  return 0;

 VAR_6 = FUNC_2(VAR_3, VAR_0);
 if (!VAR_6)
  return 0;

 VAR_5 = FUNC_0(VAR_4, VAR_6, VAR_3);
 if (VAR_5 >= 0)
  FUNC_3(VAR_2, VAR_6, VAR_3);

 FUNC_1(VAR_6);

 return VAR_5 >= 0 ? VAR_3 : 0;
}
