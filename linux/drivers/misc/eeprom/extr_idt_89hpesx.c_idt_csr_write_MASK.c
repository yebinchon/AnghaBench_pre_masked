
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
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct idt_89hpesx_dev*,struct idt_smb_seq*) ;
 int FUNC_7 (struct idt_89hpesx_dev*,struct idt_smb_seq*) ;
 int FUNC_8 (struct idt_89hpesx_dev*,struct idt_smb_seq*) ;

__attribute__((used)) static int FUNC_9(struct idt_89hpesx_dev *VAR_9, u16 VAR_10,
    const u32 VAR_11)
{
 struct device *VAR_12 = &VAR_9->client->dev;
 struct idt_csr_seq VAR_13;
 struct idt_smb_seq VAR_14;
 int VAR_15;


 VAR_14.ccode = VAR_9->iniccode | VAR_0;
 VAR_14.data = (u8 *)&VAR_13;


 FUNC_4(&VAR_9->smb_mtx);


 VAR_14.bytecnt = VAR_7;
 VAR_13.cmd = VAR_9->inicsrcmd | VAR_2;
 VAR_13.csraddr = FUNC_1(VAR_10);
 VAR_13.data = FUNC_2(VAR_11);
 VAR_15 = VAR_9->smb_write(VAR_9, &VAR_14);
 if (VAR_15 != 0) {
  FUNC_3(VAR_12, "Failed to write 0x%04x: 0x%04x to csr",
   FUNC_0(VAR_10), VAR_11);
  goto err_mutex_unlock;
 }


 VAR_14.bytecnt = VAR_6;
 VAR_13.cmd = VAR_9->inicsrcmd | VAR_1;
 VAR_15 = VAR_9->smb_write(VAR_9, &VAR_14);
 if (VAR_15 != 0) {
  FUNC_3(VAR_12, "Failed to init csr address 0x%04x",
   FUNC_0(VAR_10));
  goto err_mutex_unlock;
 }


 VAR_14.bytecnt = VAR_3;
 VAR_15 = VAR_9->smb_read(VAR_9, &VAR_14);
 if (VAR_15 != 0) {
  FUNC_3(VAR_12, "Failed to read csr 0x%04x",
   FUNC_0(VAR_10));
  goto err_mutex_unlock;
 }


 if (VAR_13.cmd & (VAR_4 | VAR_5)) {
  FUNC_3(VAR_12, "IDT failed to perform CSR r/w");
  VAR_15 = -VAR_8;
  goto err_mutex_unlock;
 }


err_mutex_unlock:
 FUNC_5(&VAR_9->smb_mtx);

 return VAR_15;
}
