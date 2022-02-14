
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
struct TYPE_5__ {scalar_t__ flags_32bit; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct TYPE_7__ {TYPE_2__ setassparms; } ;
struct TYPE_8__ {TYPE_3__ data; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*,int,char*) ;
 int FUNC_3 (int,char*,int ,int) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (struct qeth_cmd_buffer*) ;
 int VAR_5 ;
 struct qeth_cmd_buffer* FUNC_6 (struct qeth_card*,int ,int ,int ,int ) ;
 int FUNC_7 (struct qeth_card*,int ) ;
 int VAR_6 ;
 int FUNC_8 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

__attribute__((used)) static int FUNC_9(struct qeth_card *VAR_7, int VAR_8)
{
 struct qeth_cmd_buffer *VAR_9;
 int VAR_10;

 FUNC_2(VAR_7, 3, "arpstnoe");






 if (FUNC_1(VAR_7))
  return -VAR_1;
 if (!FUNC_7(VAR_7, VAR_2)) {
  return -VAR_1;
 }

 VAR_9 = FUNC_6(VAR_7, VAR_2,
           VAR_3,
           FUNC_4(VAR_5),
           VAR_4);
 if (!VAR_9)
  return -VAR_0;

 FUNC_5(VAR_9)->data.setassparms.data.flags_32bit = (u32) VAR_8;
 VAR_10 = FUNC_8(VAR_7, VAR_9, VAR_6, ((void*)0));
 if (VAR_10)
  FUNC_3(2, "Could not set number of ARP entries on device %x: %#x\n",
     FUNC_0(VAR_7), VAR_10);
 return VAR_10;
}
