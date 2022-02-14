
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int *,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(u32 VAR_5)
{
 if (VAR_5 != VAR_2
     && VAR_5 != VAR_1
     && VAR_5 != VAR_0)
  return -VAR_3;

 return FUNC_0("audit_failure", &VAR_4, VAR_5);
}
