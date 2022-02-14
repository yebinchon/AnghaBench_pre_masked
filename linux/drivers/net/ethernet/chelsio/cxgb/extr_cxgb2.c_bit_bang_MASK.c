
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ,int*) ;
 int FUNC_1 (struct adapter*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;
 u32 VAR_6;

 enum {
  S_CLOCK = 1 << 3,
  S_DATA = 1 << 4
 };

 for (VAR_5 = (VAR_3 - 1); VAR_5 > -1; VAR_5--) {

  FUNC_2(50);

  VAR_4 = ((VAR_2 >> VAR_5) & 0x1);
  FUNC_0(VAR_1, VAR_0, &VAR_6);

  if (VAR_4)
   VAR_6 |= S_DATA;
  else
   VAR_6 &= ~S_DATA;

  FUNC_2(50);


  VAR_6 &= ~S_CLOCK;
  FUNC_1(VAR_1, VAR_0, VAR_6);

  FUNC_2(50);


  VAR_6 |= S_CLOCK;
  FUNC_1(VAR_1, VAR_0, VAR_6);

 }
}
