
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iwl_trans {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_trans*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct iwl_trans *VAR_0, u32 VAR_1,
    u32 VAR_2, __le32 *VAR_3)
{
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += 4)
  *VAR_3++ = FUNC_0(FUNC_1(VAR_0, VAR_1 + VAR_4));
}
