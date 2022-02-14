
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int vtbl_slots; } ;


 int FUNC_0 (struct ubi_device*,int) ;
 int FUNC_1 (struct ubi_device*) ;

__attribute__((used)) static int FUNC_2(struct ubi_device *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 if (!FUNC_1(VAR_0))
  return 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->vtbl_slots; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2)
   break;
 }

 return VAR_2;
}
