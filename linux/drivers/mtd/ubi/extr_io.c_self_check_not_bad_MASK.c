
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ubi_device const*) ;
 int FUNC_2 (struct ubi_device const*,char*,int) ;
 int FUNC_3 (struct ubi_device const*,int) ;

__attribute__((used)) static int FUNC_4(const struct ubi_device *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!FUNC_1(VAR_1))
  return 0;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (!VAR_3)
  return VAR_3;

 FUNC_2(VAR_1, "self-check failed for PEB %d", VAR_2);
 FUNC_0();
 return VAR_3 > 0 ? -VAR_0 : VAR_3;
}
