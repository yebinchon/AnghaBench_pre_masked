
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;
typedef enum qeth_ipa_funcs { ____Placeholder_qeth_ipa_funcs } qeth_ipa_funcs ;
struct TYPE_5__ {int flags_32bit; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct TYPE_7__ {TYPE_2__ setassparms; } ;
struct TYPE_8__ {TYPE_3__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*,int) ;
 unsigned int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (struct qeth_cmd_buffer*) ;
 int VAR_1 ;
 struct qeth_cmd_buffer* FUNC_3 (struct qeth_card*,int,int ,unsigned int,int) ;
 int FUNC_4 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_2 ;

int FUNC_5(struct qeth_card *VAR_3,
          enum qeth_ipa_funcs VAR_4,
          u16 VAR_5, u32 *VAR_6,
          enum qeth_prot_versions VAR_7)
{
 unsigned int VAR_8 = VAR_6 ? FUNC_1(VAR_1) : 0;
 struct qeth_cmd_buffer *VAR_9;

 FUNC_0(VAR_3, 4, "simassp%i", VAR_7);
 VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_8, VAR_7);
 if (!VAR_9)
  return -VAR_0;

 if (VAR_6)
  FUNC_2(VAR_9)->data.setassparms.data.flags_32bit = *VAR_6;
 return FUNC_4(VAR_3, VAR_9, VAR_2, ((void*)0));
}
