
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct idt_smb_seq {scalar_t__ bytecnt; int ccode; int data; } ;
struct idt_89hpesx_dev {int client; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_1(struct idt_89hpesx_dev *VAR_7,
         struct idt_smb_seq *VAR_8)
{
 s32 VAR_9;
 u8 VAR_10;


 if (VAR_8->bytecnt > VAR_5)
  return -VAR_3;


 VAR_10 = VAR_8->ccode | VAR_0 | VAR_2 | VAR_1;


 VAR_9 = FUNC_0(VAR_6, VAR_7->client, VAR_10, VAR_8->data);
 if (VAR_9 != VAR_8->bytecnt)
  return (VAR_9 < 0 ? VAR_9 : -VAR_4);

 return 0;
}
