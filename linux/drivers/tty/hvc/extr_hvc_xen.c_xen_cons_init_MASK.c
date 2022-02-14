
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_ops {int dummy; } ;


 int VAR_0 ;
 struct hv_ops VAR_1 ;
 struct hv_ops VAR_2 ;
 int FUNC_0 (int ,int ,struct hv_ops const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(void)
{
 const struct hv_ops *VAR_3;

 if (!FUNC_1())
  return 0;

 if (FUNC_4())
  VAR_3 = &VAR_1;
 else {
  int VAR_4;
  VAR_3 = &VAR_2;

  if (FUNC_3())
   VAR_4 = FUNC_2();
  else
   VAR_4 = FUNC_5();
  if (VAR_4 < 0)
   return VAR_4;
 }

 FUNC_0(VAR_0, 0, VAR_3);
 return 0;
}
