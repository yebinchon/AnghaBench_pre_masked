
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct idt_smb_seq {int ccode; int bytecnt; int * data; } ;
struct idt_eeprom_seq {int cmd; int data; int memaddr; int eeaddr; } ;
struct idt_89hpesx_dev {int iniccode; int inieecmd; int (* smb_write ) (struct idt_89hpesx_dev*,struct idt_smb_seq*) ;int (* smb_read ) (struct idt_89hpesx_dev*,struct idt_smb_seq*) ;int eeaddr; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct idt_89hpesx_dev*,struct idt_smb_seq*) ;
 int FUNC_5 (struct idt_89hpesx_dev*,struct idt_smb_seq*) ;

__attribute__((used)) static int FUNC_6(struct idt_89hpesx_dev *VAR_10, u16 VAR_11,
    u8 *VAR_12)
{
 struct device *VAR_13 = &VAR_10->client->dev;
 struct idt_eeprom_seq VAR_14;
 struct idt_smb_seq VAR_15;
 int VAR_16, VAR_17;


 VAR_15.ccode = VAR_10->iniccode | VAR_0;
 VAR_15.data = (u8 *)&VAR_14;





 VAR_17 = VAR_9;
 do {

  VAR_15.bytecnt = VAR_7;
  VAR_14.cmd = VAR_10->inieecmd | VAR_4;
  VAR_14.eeaddr = VAR_10->eeaddr;
  VAR_14.memaddr = FUNC_0(VAR_11);
  VAR_16 = VAR_10->smb_write(VAR_10, &VAR_15);
  if (VAR_16 != 0) {
   FUNC_2(VAR_13, "Failed to init eeprom addr 0x%02hhx",
    VAR_11);
   break;
  }


  VAR_15.bytecnt = VAR_5;
  VAR_16 = VAR_10->smb_read(VAR_10, &VAR_15);
  if (VAR_16 != 0) {
   FUNC_2(VAR_13, "Failed to read eeprom data 0x%02hhx",
    VAR_11);
   break;
  }


  if (VAR_17 && (VAR_14.cmd & VAR_3)) {
   FUNC_1(VAR_13, "EEPROM busy, retry reading after %d ms",
    VAR_6);
   FUNC_3(VAR_6);
   continue;
  }


  if (VAR_14.cmd & (VAR_3 | VAR_1 | VAR_2)) {
   FUNC_2(VAR_13,
    "Communication with eeprom failed, cmd 0x%hhx",
    VAR_14.cmd);
   VAR_16 = -VAR_8;
   break;
  }


  *VAR_12 = VAR_14.data;
  break;
 } while (VAR_17--);


 return VAR_16;
}
