
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ql3_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ql3_adapter*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct ql3_adapter *VAR_3)
{
 u16 VAR_4;

 if (FUNC_0(VAR_3, VAR_0, &VAR_4) < 0)
  return 0;

 return (VAR_4 & VAR_2) == VAR_1;
}
