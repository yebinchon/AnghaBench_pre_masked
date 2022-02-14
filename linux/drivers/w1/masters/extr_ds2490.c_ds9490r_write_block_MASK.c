
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ds_device*,int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*,int,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, const u8 *VAR_2, int VAR_3)
{
 struct ds_device *VAR_4 = VAR_1;
 u8 *VAR_5;

 if (VAR_3 <= 0)
  return;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_0);
 if (!VAR_5)
  return;

 FUNC_0(VAR_4, VAR_5, VAR_3);

 FUNC_1(VAR_5);
}
