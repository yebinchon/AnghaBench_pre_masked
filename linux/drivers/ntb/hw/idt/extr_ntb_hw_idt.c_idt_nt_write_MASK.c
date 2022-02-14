
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idt_ntb_dev {scalar_t__ cfgspc; } ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 unsigned int const VAR_1 ;
 int FUNC_0 (unsigned int const,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int const,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct idt_ntb_dev *VAR_2,
    const unsigned int VAR_3, const u32 VAR_4)
{




 if (FUNC_1(VAR_3 > VAR_1 || !FUNC_0(VAR_3, VAR_0)))
  return;


 FUNC_2(VAR_4, VAR_2->cfgspc + (ptrdiff_t)VAR_3);
}
