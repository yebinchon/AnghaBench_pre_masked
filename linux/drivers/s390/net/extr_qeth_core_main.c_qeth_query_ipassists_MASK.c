
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,char*,int) ;
 struct qeth_cmd_buffer* FUNC_1 (struct qeth_card*,int ,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_3,
    enum qeth_prot_versions VAR_4)
{
 int VAR_5;
 struct qeth_cmd_buffer *VAR_6;

 FUNC_0(VAR_3, 2, "qipassi%i", VAR_4);
 VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_4, 0);
 if (!VAR_6)
  return -VAR_0;
 VAR_5 = FUNC_2(VAR_3, VAR_6, VAR_2, ((void*)0));
 return VAR_5;
}
