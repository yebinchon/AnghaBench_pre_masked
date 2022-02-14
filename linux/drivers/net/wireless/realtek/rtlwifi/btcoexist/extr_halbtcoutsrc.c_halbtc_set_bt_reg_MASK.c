
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct btc_coexist {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct btc_coexist*,int ,scalar_t__*,int,int) ;

__attribute__((used)) static
void FUNC_2(void *VAR_2, u8 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct btc_coexist *VAR_6 = (struct btc_coexist *)VAR_2;
 u8 VAR_7[4] = {0};
 u8 VAR_8[4] = {0};


 *((__le16 *)&VAR_7[2]) = FUNC_0((u16)VAR_5);
 if (!FUNC_1(VAR_6, VAR_1,
      VAR_7, 4, 200))
  return;


 VAR_8[2] = VAR_3;
 *((u8 *)&VAR_8[3]) = (u8)VAR_4;
 FUNC_1(VAR_6, VAR_0,
        VAR_8, 4, 200);
}
