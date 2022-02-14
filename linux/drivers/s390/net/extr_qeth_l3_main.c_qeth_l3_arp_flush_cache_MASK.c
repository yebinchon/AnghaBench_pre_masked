
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 scalar_t__ FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*,int,char*) ;
 int FUNC_4 (int,char*,int ,int) ;
 int VAR_4 ;
 struct qeth_cmd_buffer* FUNC_5 (struct qeth_card*,int ,int ,int ,int ) ;
 int FUNC_6 (struct qeth_card*,int ) ;
 int VAR_5 ;
 int FUNC_7 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

__attribute__((used)) static int FUNC_8(struct qeth_card *VAR_6)
{
 struct qeth_cmd_buffer *VAR_7;
 int VAR_8;

 FUNC_3(VAR_6, 3, "arpflush");






 if (FUNC_2(VAR_6) || FUNC_1(VAR_6))
  return -VAR_1;
 if (!FUNC_6(VAR_6, VAR_2)) {
  return -VAR_1;
 }

 VAR_7 = FUNC_5(VAR_6, VAR_2,
           VAR_3, 0,
           VAR_4);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_7(VAR_6, VAR_7, VAR_5, ((void*)0));
 if (VAR_8)
  FUNC_4(2, "Could not flush ARP cache on device %x: %#x\n",
     FUNC_0(VAR_6), VAR_8);
 return VAR_8;
}
