
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int card_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static inline int FUNC_5(card_t *VAR_3)
{
 u8 VAR_4 = 0;
 u8 VAR_5 = FUNC_4(VAR_1, VAR_3);
 u8 VAR_6 = FUNC_4(VAR_2, VAR_3);

 if (VAR_6 & 0x03) VAR_4 |= FUNC_1(0);
 if (VAR_6 & 0x0C) VAR_4 |= FUNC_2(0);
 if (VAR_6 & 0x30) VAR_4 |= FUNC_1(1);
 if (VAR_6 & 0xC0) VAR_4 |= FUNC_2(1);
 if (VAR_5 & 0x0F) VAR_4 |= FUNC_3(0);
 if (VAR_5 & 0xF0) VAR_4 |= FUNC_3(1);

 if (!(VAR_4 & FUNC_2(0)))
  if (FUNC_4(FUNC_0(0), VAR_3) & VAR_0)
   VAR_4 |= FUNC_2(0);
 if (!(VAR_4 & FUNC_2(1)))
  if (FUNC_4(FUNC_0(1), VAR_3) & VAR_0)
   VAR_4 |= FUNC_2(1);

 return VAR_4;
}
