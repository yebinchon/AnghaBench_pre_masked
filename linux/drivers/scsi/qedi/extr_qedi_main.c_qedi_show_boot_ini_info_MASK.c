
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedi_ctx {int dummy; } ;
struct TYPE_2__ {int byte; } ;
struct nvm_iscsi_initiator {TYPE_1__ initiator_name; } ;
struct nvm_iscsi_block {struct nvm_iscsi_initiator initiator; } ;
typedef int ssize_t ;



 char* VAR_0 ;
 struct nvm_iscsi_block* FUNC_0 (struct qedi_ctx*) ;
 int FUNC_1 (char*,char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(void *VAR_1, int VAR_2, char *VAR_3)
{
 struct qedi_ctx *VAR_4 = VAR_1;
 struct nvm_iscsi_initiator *VAR_5;
 int VAR_6;
 struct nvm_iscsi_block *VAR_7;

 VAR_7 = FUNC_0(VAR_4);
 if (!VAR_7)
  return 0;

 VAR_5 = &VAR_7->initiator;

 switch (VAR_2) {
 case 128:
  VAR_6 = FUNC_1(VAR_3, "%.*s\n", VAR_0,
        VAR_5->initiator_name.byte);
  break;
 default:
  VAR_6 = 0;
  break;
 }
 return VAR_6;
}
