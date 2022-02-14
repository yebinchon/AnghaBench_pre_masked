
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,int) ;
 int FUNC_2 (struct adapter*,scalar_t__,int ) ;

__attribute__((used)) static s32 FUNC_3(struct adapter *VAR_3, u8 VAR_4)
{
 s32 VAR_5 = VAR_2;

 FUNC_1(VAR_3, 1);
 FUNC_2(VAR_3, VAR_1+1, VAR_4);
 VAR_5 = FUNC_0(VAR_3, VAR_0);
 FUNC_1(VAR_3, 0);
 return VAR_5;
}
