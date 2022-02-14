
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct _adapter*,int ) ;
 int FUNC_1 (struct _adapter*,int ,int ) ;

void FUNC_2(struct _adapter *VAR_1, u32 *VAR_2, u8 VAR_3)
{
 if (VAR_3 == 0)
  FUNC_1(VAR_1, VAR_0, *VAR_2);
 else
  *VAR_2 = FUNC_0(VAR_1, VAR_0);
}
