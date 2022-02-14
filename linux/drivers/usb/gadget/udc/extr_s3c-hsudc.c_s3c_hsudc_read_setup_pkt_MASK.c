
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct s3c_hsudc {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct s3c_hsudc *VAR_3, u16 *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->regs + VAR_0);
 while (VAR_5--)
  *VAR_4++ = (u16)FUNC_1(VAR_3->regs + FUNC_0(0));

 FUNC_2(VAR_2, VAR_3->regs + VAR_1);
}
