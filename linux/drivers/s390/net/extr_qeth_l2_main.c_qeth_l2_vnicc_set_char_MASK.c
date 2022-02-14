
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
struct TYPE_6__ {int vnic_char; } ;
struct TYPE_7__ {TYPE_1__ set_char; } ;
struct TYPE_8__ {TYPE_2__ data; } ;
struct TYPE_9__ {TYPE_3__ vnicc; } ;
struct TYPE_10__ {TYPE_4__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (struct qeth_cmd_buffer*) ;
 struct qeth_cmd_buffer* FUNC_3 (struct qeth_card*,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_3, u32 VAR_4,
          u32 VAR_5)
{
 struct qeth_cmd_buffer *VAR_6;

 FUNC_0(VAR_3, 2, "vniccedc");
 VAR_6 = FUNC_3(VAR_3, VAR_5, FUNC_1(VAR_2));
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(VAR_6)->data.vnicc.data.set_char.vnic_char = VAR_4;

 return FUNC_4(VAR_3, VAR_6, VAR_1, ((void*)0));
}
