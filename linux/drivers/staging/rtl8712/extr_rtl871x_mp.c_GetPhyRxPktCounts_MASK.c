
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct _adapter*,int ) ;
 int FUNC_1 (struct _adapter*,int ,int) ;

__attribute__((used)) static u32 FUNC_2(struct _adapter *VAR_2, u32 VAR_3)
{

 u32 VAR_4 = 0;
 u32 VAR_5;

 VAR_5 = VAR_3 << 28;
 VAR_4 |= (VAR_5 & 0xF0000000);
 FUNC_1(VAR_2, VAR_1, VAR_4);

 return FUNC_0(VAR_2, VAR_1) & VAR_0;
}
