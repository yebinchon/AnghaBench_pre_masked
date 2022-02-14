
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct _adapter {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct _adapter*,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(struct _adapter *VAR_0, u8 VAR_1, u8 VAR_2,
        u32 VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_5 = FUNC_0(VAR_3);
 return (VAR_4 & VAR_3) >> VAR_5;
}
