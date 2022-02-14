
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct pvr2_hdw {int dummy; } ;


 int FUNC_0 (struct pvr2_hdw*,int ,int *,scalar_t__,int *,scalar_t__) ;
 int FUNC_1 (struct pvr2_hdw*,int ,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct pvr2_hdw *VAR_0,
        u8 VAR_1,
        u8 *VAR_2,
        u16 VAR_3,
        u8 *VAR_4,
        u16 VAR_5)
{
 if (!VAR_4) VAR_5 = 0;
 if (!VAR_2) VAR_3 = 0;
 if (VAR_5 || !VAR_3) {
  return FUNC_0(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,VAR_5);
 } else {
  return FUNC_1(VAR_0,VAR_1,VAR_2,VAR_3);
 }
}
