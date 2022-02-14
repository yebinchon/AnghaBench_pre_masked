
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pgpkt {int dummy; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct adapter*) ;
 int FUNC_1 (int ,int ,int *,struct pgpkt*) ;
 int FUNC_2 (struct adapter*,int ,int *,struct pgpkt*) ;
 int FUNC_3 (struct adapter*,int ,int *,struct pgpkt*) ;
 int FUNC_4 (struct adapter*,int ,int *,struct pgpkt*) ;

bool FUNC_5(struct adapter *VAR_2, u8 VAR_3, u8 VAR_4, u8 *VAR_5)
{
 struct pgpkt VAR_6;
 u16 VAR_7 = 0;
 u8 VAR_8 = VAR_1;

 if (FUNC_0(VAR_2) >= VAR_0)
  return 0;

 FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6);

 if (!FUNC_2(VAR_2, VAR_8, &VAR_7, &VAR_6))
  return 0;

 if (!FUNC_4(VAR_2, VAR_8, &VAR_7, &VAR_6))
  return 0;

 if (!FUNC_3(VAR_2, VAR_8, &VAR_7, &VAR_6))
  return 0;

 return 1;
}
