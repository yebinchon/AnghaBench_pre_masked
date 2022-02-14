
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ql3_adapter {int dummy; } ;


 int FUNC_0 (struct ql3_adapter*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct ql3_adapter *VAR_0)
{
 u16 VAR_1;
 FUNC_0(VAR_0, 0x00, &VAR_1);
 return (VAR_1 & 0x1000) != 0;
}
