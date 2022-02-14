
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
struct carrier_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,int ) ;
 struct qeth_cmd_buffer* FUNC_2 (struct qeth_card*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct qeth_card*,struct qeth_cmd_buffer*,int ,void*) ;

int FUNC_4(struct qeth_card *VAR_4,
    struct carrier_info *VAR_5)
{
 struct qeth_cmd_buffer *VAR_6;

 FUNC_0(VAR_4, 2, "qcrdinfo");
 if (!FUNC_1(VAR_4, VAR_2))
  return -VAR_1;
 VAR_6 = FUNC_2(VAR_4, VAR_2, 0);
 if (!VAR_6)
  return -VAR_0;
 return FUNC_3(VAR_4, VAR_6, VAR_3,
     (void *)VAR_5);
}
