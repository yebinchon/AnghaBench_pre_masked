
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct idt_smb_seq {int bytecnt; scalar_t__ ccode; int data; } ;
struct idt_89hpesx_dev {int client; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,int,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__*,scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct idt_89hpesx_dev *VAR_7,
      struct idt_smb_seq *VAR_8)
{
 u8 VAR_9, VAR_10[VAR_5 + 1];
 s32 VAR_11;


 if (VAR_8->bytecnt > VAR_5)
  return -VAR_3;


 VAR_9 = VAR_8->ccode | VAR_0 | VAR_2 | VAR_1;


 VAR_11 = FUNC_0(VAR_6, VAR_7->client, VAR_9,
  VAR_8->bytecnt + 1, VAR_10);
 if (VAR_11 != VAR_8->bytecnt + 1)
  return (VAR_11 < 0 ? VAR_11 : -VAR_4);
 if (VAR_10[0] != VAR_8->bytecnt)
  return -VAR_4;


 FUNC_1(VAR_8->data, &VAR_10[1], VAR_8->bytecnt);

 return 0;
}
