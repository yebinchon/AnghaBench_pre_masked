
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct adapter {int dummy; } ;
typedef int s32 ;
typedef int PGPKT_STRUCT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int *) ;
 int FUNC_1 (struct adapter*,int ,int *,int *,int) ;
 int FUNC_2 (struct adapter*,int ,int) ;
 int FUNC_3 (struct adapter*,int ,int *,int *,int) ;
 int FUNC_4 (struct adapter*,int ,int *,int *,int) ;

__attribute__((used)) static s32 FUNC_5(
 struct adapter *VAR_1,
 u8 VAR_2,
 u8 VAR_3,
 u8 *VAR_4,
 bool VAR_5
)
{
 PGPKT_STRUCT VAR_6;
 u16 VAR_7 = 0;
 u8 VAR_8 = VAR_0;

 if (!FUNC_2(VAR_1, VAR_8, VAR_5))
  return 0;

 FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_6);

 if (!FUNC_1(VAR_1, VAR_8, &VAR_7, &VAR_6, VAR_5))
  return 0;

 if (!FUNC_4(VAR_1, VAR_8, &VAR_7, &VAR_6, VAR_5))
  return 0;

 if (!FUNC_3(VAR_1, VAR_8, &VAR_7, &VAR_6, VAR_5))
  return 0;

 return 1;
}
