
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(u32 VAR_4)
{
 int VAR_5;
 if (VAR_4 > VAR_0)
  return -VAR_1;

 VAR_5 = FUNC_0("audit_enabled", &VAR_2, VAR_4);
 if (!VAR_5)
  VAR_3 |= !!VAR_4;

 return VAR_5;
}
