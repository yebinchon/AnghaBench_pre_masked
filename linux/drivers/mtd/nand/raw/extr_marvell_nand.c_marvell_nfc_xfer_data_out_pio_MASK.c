
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct marvell_nfc {scalar_t__ regs; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,int const*,int ) ;
 int FUNC_2 (int const*,int const*,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct marvell_nfc *VAR_2, const u8 *VAR_3,
      unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_4 % VAR_0;
 unsigned int VAR_6 = FUNC_3(VAR_4, VAR_0);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 += VAR_0)
  FUNC_1(VAR_2->regs + VAR_1, VAR_3 + VAR_7, FUNC_0(VAR_0));

 if (VAR_5) {
  u8 VAR_8[VAR_0];

  FUNC_2(VAR_8, VAR_3 + VAR_6, VAR_5);
  FUNC_1(VAR_2->regs + VAR_1, VAR_8, FUNC_0(VAR_0));
 }

 return 0;
}
