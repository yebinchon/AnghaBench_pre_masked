
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct se_cmd {int prot_checks; } ;
struct qla_tgt_cmd {struct se_cmd se_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct qla_tgt_cmd *VAR_4,
    uint16_t *VAR_5)
{
 struct se_cmd *VAR_6 = &VAR_4->se_cmd;

 if (!(VAR_6->prot_checks & VAR_3))
  *VAR_5 |= VAR_0;

 if (!(VAR_6->prot_checks & VAR_2))
  *VAR_5 |= VAR_1;

 return 0;
}
