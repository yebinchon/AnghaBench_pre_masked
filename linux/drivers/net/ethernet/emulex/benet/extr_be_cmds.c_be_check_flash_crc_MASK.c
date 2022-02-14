
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct be_adapter {int dummy; } ;


 int FUNC_0 (struct be_adapter*,int *,int ,int,int) ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_2(struct be_adapter *VAR_0, const u8 *VAR_1,
         u32 VAR_2, u32 VAR_3, int VAR_4,
         u16 VAR_5, bool *VAR_6)
{
 u32 VAR_7;
 int VAR_8;
 u8 VAR_9[4];

 VAR_8 = FUNC_0(VAR_0, VAR_9, VAR_5, VAR_2,
          VAR_3 - 4);
 if (VAR_8)
  return VAR_8;

 VAR_7 = VAR_4 + VAR_2 + VAR_3 - 4;


 if (!FUNC_1(VAR_9, VAR_1 + VAR_7, 4))
  *VAR_6 = 1;
 else
  *VAR_6 = 0;

 return VAR_8;
}
