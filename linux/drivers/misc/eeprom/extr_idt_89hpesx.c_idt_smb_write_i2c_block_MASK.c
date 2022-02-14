
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct idt_smb_seq {int bytecnt; int ccode; int data; } ;
struct idt_89hpesx_dev {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int,int*) ;
 int FUNC_1 (int*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct idt_89hpesx_dev *VAR_6,
       const struct idt_smb_seq *VAR_7)
{
 u8 VAR_8, VAR_9[VAR_4 + 1];


 if (VAR_7->bytecnt > VAR_4)
  return -VAR_3;


 VAR_9[0] = VAR_7->bytecnt;
 FUNC_1(&VAR_9[1], VAR_7->data, VAR_7->bytecnt);


 VAR_8 = VAR_7->ccode | VAR_0 | VAR_2 | VAR_1;


 return FUNC_0(VAR_5, VAR_6->client, VAR_8,
  VAR_7->bytecnt + 1, VAR_9);
}
