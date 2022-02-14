
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct adapter {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int,int,int *) ;
 int FUNC_1 (struct adapter*,int ,int *,int*) ;
 scalar_t__ FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (struct adapter*,scalar_t__,int ) ;

__attribute__((used)) static s32 FUNC_5(struct adapter *VAR_6, u8 VAR_7, u16 VAR_8, u16 VAR_9, u8 *VAR_10)
{
 s32 VAR_11 = VAR_4;
 u8 VAR_12[512];
 u16 VAR_13 = 512;

 FUNC_4(VAR_6, VAR_2 + 1, VAR_7);
 FUNC_3(VAR_12, 0xFF, 512);
 FUNC_4(VAR_6, VAR_1, VAR_3);
 VAR_11 = FUNC_2(VAR_6, VAR_0);
 if (VAR_11 == VAR_5)
  FUNC_1(VAR_6, VAR_7, VAR_12, &VAR_13);
 FUNC_0(VAR_12, VAR_8, VAR_9, VAR_10);
 return VAR_11;
}
