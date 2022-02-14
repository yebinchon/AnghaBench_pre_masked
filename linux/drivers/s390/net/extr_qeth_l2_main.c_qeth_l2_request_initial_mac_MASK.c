
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {TYPE_1__* dev; } ;
struct TYPE_2__ {int addr_len; int dev_addr; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;
 scalar_t__ FUNC_3 (struct qeth_card*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct qeth_card*,int,int ,int ) ;
 int FUNC_5 (struct qeth_card*,int,char*) ;
 int FUNC_6 (struct qeth_card*,int,char*,int) ;
 int FUNC_7 (int,char*,int ,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct qeth_card*) ;
 int FUNC_10 (struct qeth_card*) ;

__attribute__((used)) static int FUNC_11(struct qeth_card *VAR_2)
{
 int VAR_3 = 0;

 FUNC_5(VAR_2, 2, "l2reqmac");

 if (VAR_1) {
  VAR_3 = FUNC_10(VAR_2);
  if (!VAR_3)
   goto out;
  FUNC_7(2, "z/VM MAC Service failed on device %x: %#x\n",
     FUNC_0(VAR_2), VAR_3);
  FUNC_6(VAR_2, 2, "err%04x", VAR_3);

 }

 if (!FUNC_2(VAR_2)) {
  VAR_3 = FUNC_9(VAR_2);
  if (!VAR_3)
   goto out;
  FUNC_7(2, "READ_MAC Assist failed on device %x: %#x\n",
     FUNC_0(VAR_2), VAR_3);
  FUNC_6(VAR_2, 2, "1err%04x", VAR_3);

 }


 if (FUNC_1(VAR_2) || FUNC_3(VAR_2))
  return (VAR_3) ? VAR_3 : -VAR_0;
 FUNC_8(VAR_2->dev);

out:
 FUNC_4(VAR_2, 2, VAR_2->dev->dev_addr, VAR_2->dev->addr_len);
 return 0;
}
