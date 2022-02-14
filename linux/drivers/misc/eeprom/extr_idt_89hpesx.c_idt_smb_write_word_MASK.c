
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct idt_smb_seq {int bytecnt; int ccode; int * data; } ;
struct idt_89hpesx_dev {int client; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct idt_89hpesx_dev *VAR_6,
         const struct idt_smb_seq *VAR_7)
{
 s32 VAR_8;
 u8 VAR_9;
 int VAR_10, VAR_11;


 VAR_11 = VAR_7->bytecnt - (VAR_7->bytecnt % 2);


 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10 += 2) {

  VAR_9 = VAR_7->ccode | VAR_3;
  if (VAR_10 == 0)
   VAR_9 |= VAR_2;
  if (VAR_10 == VAR_11 - 2)
   VAR_9 |= VAR_1;


  VAR_8 = FUNC_0(VAR_5, VAR_6->client, VAR_9,
   *(u16 *)&VAR_7->data[VAR_10]);
  if (VAR_8 != 0)
   return (int)VAR_8;
 }


 if (VAR_7->bytecnt != VAR_11) {

  VAR_9 = VAR_7->ccode | VAR_0 | VAR_1;
  if (VAR_10 == 0)
   VAR_9 |= VAR_2;


  VAR_8 = FUNC_0(VAR_4, VAR_6->client, VAR_9,
   VAR_7->data[VAR_10]);
  if (VAR_8 != 0)
   return (int)VAR_8;
 }

 return 0;
}
