
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct anybus_mbox_hdr {int info; } ;
struct mbox_priv {int* msg; int msg_in_sz; struct anybus_mbox_hdr hdr; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (struct device*,struct anybus_mbox_hdr*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, struct mbox_priv *VAR_3)
{
 int VAR_4;
 u8 VAR_5;
 struct anybus_mbox_hdr *VAR_6 = &VAR_3->hdr;
 u16 VAR_7 = FUNC_1(VAR_6->info);
 u8 *VAR_8 = (u8 *)VAR_6;
 u8 *VAR_9 = VAR_3->msg;

 if (!(VAR_7 & 0x8000))
  return 0;
 VAR_5 = (VAR_7 >> 8) & 0x0F;
 FUNC_2(VAR_2, "mailbox command failed:");
 if (VAR_5 == 0x0F)
  FUNC_4(VAR_2, VAR_6);
 else if (VAR_5 < FUNC_0(VAR_1))
  FUNC_2(VAR_2, "   Error code: %s (0x%02X)",
   VAR_1[VAR_5], VAR_5);
 else
  FUNC_2(VAR_2, "   Error code: 0x%02X\n", VAR_5);
 FUNC_2(VAR_2, "Failed command:");
 FUNC_2(VAR_2, "Message Header:");
 for (VAR_4 = 0; VAR_4 < sizeof(VAR_3->hdr); VAR_4 += 2)
  FUNC_2(VAR_2, "%02X%02X", VAR_8[VAR_4], VAR_8[VAR_4 + 1]);
 FUNC_2(VAR_2, "Message Data:");
 for (VAR_4 = 0; VAR_4 < VAR_3->msg_in_sz; VAR_4 += 2)
  FUNC_2(VAR_2, "%02X%02X", VAR_9[VAR_4], VAR_9[VAR_4 + 1]);
 FUNC_2(VAR_2, "Stack dump:");
 FUNC_3();
 return -VAR_0;
}
