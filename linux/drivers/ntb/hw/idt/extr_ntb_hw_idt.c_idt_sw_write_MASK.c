
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u32 ;
struct idt_ntb_dev {int gasa_lock; scalar_t__ cfgspc; } ;
typedef int ptrdiff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int const VAR_3 ;
 int FUNC_0 (unsigned int const,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int const,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct idt_ntb_dev *VAR_4,
    const unsigned int VAR_5, const u32 VAR_6)
{
 unsigned long VAR_7;





 if (FUNC_1(VAR_5 > VAR_3 || !FUNC_0(VAR_5, VAR_2)))
  return;


 FUNC_3(&VAR_4->gasa_lock, VAR_7);

 FUNC_2((u32)VAR_5, VAR_4->cfgspc + (ptrdiff_t)VAR_0);

 FUNC_2(VAR_6, VAR_4->cfgspc + (ptrdiff_t)VAR_1);

 FUNC_4(&VAR_4->gasa_lock, VAR_7);
}
