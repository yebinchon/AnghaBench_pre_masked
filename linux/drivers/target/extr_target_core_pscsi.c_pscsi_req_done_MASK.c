
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct se_cmd {scalar_t__ data_length; struct pscsi_plugin_task* priv; } ;
struct request {struct se_cmd* end_io_data; } ;
struct pscsi_plugin_task {int * pscsi_cdb; } ;
typedef int blk_status_t ;
struct TYPE_2__ {int result; scalar_t__ resid_len; int sense; } ;



 int VAR_0 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pscsi_plugin_task*) ;
 int FUNC_3 (char*,struct se_cmd*,int ,int) ;
 int FUNC_4 (struct se_cmd*,int,int ) ;
 TYPE_1__* FUNC_5 (struct request*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct se_cmd*,int ) ;
 int FUNC_8 (struct se_cmd*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct request *VAR_1, blk_status_t VAR_2)
{
 struct se_cmd *VAR_3 = VAR_1->end_io_data;
 struct pscsi_plugin_task *VAR_4 = VAR_3->priv;
 int VAR_5 = FUNC_5(VAR_1)->result;
 u8 VAR_6 = FUNC_6(VAR_5) << 1;

 if (VAR_6) {
  FUNC_3("PSCSI Status Byte exception at cmd: %p CDB:"
   " 0x%02x Result: 0x%08x\n", VAR_3, VAR_4->pscsi_cdb[0],
   VAR_5);
 }

 FUNC_4(VAR_3, VAR_6, FUNC_5(VAR_1)->sense);

 switch (FUNC_1(VAR_5)) {
 case 128:
  FUNC_8(VAR_3, VAR_6,
   VAR_3->data_length - FUNC_5(VAR_1)->resid_len);
  break;
 default:
  FUNC_3("PSCSI Host Byte exception at cmd: %p CDB:"
   " 0x%02x Result: 0x%08x\n", VAR_3, VAR_4->pscsi_cdb[0],
   VAR_5);
  FUNC_7(VAR_3, VAR_0);
  break;
 }

 FUNC_0(VAR_1);
 FUNC_2(VAR_4);
}
