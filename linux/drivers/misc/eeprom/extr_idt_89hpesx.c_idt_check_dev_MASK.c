
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct idt_89hpesx_dev {TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int FUNC_2 (struct idt_89hpesx_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct idt_89hpesx_dev *VAR_4)
{
 struct device *VAR_5 = &VAR_4->client->dev;
 u32 VAR_6;
 int VAR_7;


 VAR_7 = FUNC_2(VAR_4, VAR_1, &VAR_6);
 if (VAR_7 != 0) {
  FUNC_0(VAR_5, "Failed to read VID/DID");
  return VAR_7;
 }


 if ((VAR_6 & VAR_2) != VAR_3) {
  FUNC_0(VAR_5, "Got unsupported VID/DID: 0x%08x", VAR_6);
  return -VAR_0;
 }

 FUNC_1(VAR_5, "Found IDT 89HPES device VID:0x%04x, DID:0x%04x",
  (VAR_6 & VAR_2), (VAR_6 >> 16));

 return 0;
}
