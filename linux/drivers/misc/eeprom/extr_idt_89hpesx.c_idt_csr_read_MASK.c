
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct idt_smb_seq {int ccode; int bytecnt; int * data; } ;
struct idt_csr_seq {int cmd; int data; int csraddr; } ;
struct idt_89hpesx_dev {int iniccode; int inicsrcmd; int (* smb_write ) (struct idt_89hpesx_dev*,struct idt_smb_seq*) ;int (* smb_read ) (struct idt_89hpesx_dev*,struct idt_smb_seq*) ;int smb_mtx; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct idt_89hpesx_dev*,struct idt_smb_seq*) ;
 int FUNC_7 (struct idt_89hpesx_dev*,struct idt_smb_seq*) ;

__attribute__((used)) static int FUNC_8(struct idt_89hpesx_dev *VAR_7, u16 VAR_8, u32 *VAR_9)
{
 struct device *VAR_10 = &VAR_7->client->dev;
 struct idt_csr_seq VAR_11;
 struct idt_smb_seq VAR_12;
 int VAR_13;


 VAR_12.ccode = VAR_7->iniccode | VAR_0;
 VAR_12.data = (u8 *)&VAR_11;


 FUNC_4(&VAR_7->smb_mtx);


 VAR_12.bytecnt = VAR_5;
 VAR_11.cmd = VAR_7->inicsrcmd | VAR_1;
 VAR_11.csraddr = FUNC_1(VAR_8);
 VAR_13 = VAR_7->smb_write(VAR_7, &VAR_12);
 if (VAR_13 != 0) {
  FUNC_2(VAR_10, "Failed to init csr address 0x%04x",
   FUNC_0(VAR_8));
  goto err_mutex_unlock;
 }


 VAR_12.bytecnt = VAR_2;
 VAR_13 = VAR_7->smb_read(VAR_7, &VAR_12);
 if (VAR_13 != 0) {
  FUNC_2(VAR_10, "Failed to read csr 0x%04hx",
   FUNC_0(VAR_8));
  goto err_mutex_unlock;
 }


 if (VAR_11.cmd & (VAR_3 | VAR_4)) {
  FUNC_2(VAR_10, "IDT failed to perform CSR r/w");
  VAR_13 = -VAR_6;
  goto err_mutex_unlock;
 }


 *VAR_9 = FUNC_3(VAR_11.data);


err_mutex_unlock:
 FUNC_5(&VAR_7->smb_mtx);

 return VAR_13;
}
