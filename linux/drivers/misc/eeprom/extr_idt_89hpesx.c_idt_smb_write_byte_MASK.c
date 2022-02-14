
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct idt_smb_seq {int bytecnt; int ccode; int * data; } ;
struct idt_89hpesx_dev {int client; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct idt_89hpesx_dev *VAR_4,
         const struct idt_smb_seq *VAR_5)
{
 s32 VAR_6;
 u8 VAR_7;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_5->bytecnt; VAR_8++) {

  VAR_7 = VAR_5->ccode | VAR_0;
  if (VAR_8 == 0)
   VAR_7 |= VAR_2;
  if (VAR_8 == VAR_5->bytecnt - 1)
   VAR_7 |= VAR_1;


  VAR_6 = FUNC_0(VAR_3, VAR_4->client, VAR_7,
   VAR_5->data[VAR_8]);
  if (VAR_6 != 0)
   return (int)VAR_6;
 }

 return 0;
}
