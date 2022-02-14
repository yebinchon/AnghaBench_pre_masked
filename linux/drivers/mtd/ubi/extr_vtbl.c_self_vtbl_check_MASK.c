
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int vtbl; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ubi_device const*) ;
 int FUNC_2 (struct ubi_device const*,char*) ;
 scalar_t__ FUNC_3 (struct ubi_device const*,int ) ;

__attribute__((used)) static void FUNC_4(const struct ubi_device *VAR_0)
{
 if (!FUNC_1(VAR_0))
  return;

 if (FUNC_3(VAR_0, VAR_0->vtbl)) {
  FUNC_2(VAR_0, "self-check failed");
  FUNC_0();
 }
}
