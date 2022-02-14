
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct idt_89hpesx_dev {int smb_mtx; } ;


 int FUNC_0 (struct idt_89hpesx_dev*,size_t,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct idt_89hpesx_dev *VAR_0, u16 VAR_1, u16 VAR_2,
      u8 *VAR_3)
{
 int VAR_4;
 u16 VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_1++) {

  FUNC_1(&VAR_0->smb_mtx);


  VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3[VAR_5]);


  FUNC_2(&VAR_0->smb_mtx);


  if (VAR_4 != 0)
   return VAR_4;
 }

 return 0;
}
