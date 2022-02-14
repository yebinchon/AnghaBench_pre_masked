
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct carl9170_sta_tid {int bsn; scalar_t__ snx; int bitmap; } ;
struct ar9170 {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct ar9170 *VAR_1,
 struct carl9170_sta_tid *VAR_2, u16 VAR_3)
{
 u16 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2->bsn);

 if (FUNC_1(VAR_4 >= VAR_0))
  return;







 FUNC_1(!FUNC_5(VAR_4, VAR_2->bitmap));

 VAR_4 = FUNC_0(VAR_2->snx, VAR_2->bsn);
 if (FUNC_1(VAR_4 >= VAR_0))
  return;

 if (!FUNC_2(VAR_2->bitmap, VAR_4))
  VAR_4 = FUNC_4(VAR_2->bitmap, VAR_4);

 VAR_2->bsn += VAR_4;
 VAR_2->bsn &= 0x0fff;

 FUNC_3(VAR_2->bitmap, VAR_2->bitmap,
      VAR_4, VAR_0);
}
