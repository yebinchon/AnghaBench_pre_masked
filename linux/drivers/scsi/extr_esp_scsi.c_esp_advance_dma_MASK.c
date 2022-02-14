
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct esp_cmd_priv {scalar_t__ cur_residue; scalar_t__ tot_residue; int cur_sg; int prv_sg; } ;
struct esp_cmd_entry {int flags; unsigned int sense_ptr; } ;
struct esp {int host; } ;


 int VAR_0 ;
 struct esp_cmd_priv* FUNC_0 (struct scsi_cmnd*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*,...) ;

__attribute__((used)) static void FUNC_4(struct esp *VAR_2, struct esp_cmd_entry *VAR_3,
       struct scsi_cmnd *VAR_4, unsigned int VAR_5)
{
 struct esp_cmd_priv *VAR_6 = FUNC_0(VAR_4);

 if (VAR_3->flags & VAR_0) {
  VAR_3->sense_ptr += VAR_5;
  return;
 }

 VAR_6->cur_residue -= VAR_5;
 VAR_6->tot_residue -= VAR_5;
 if (VAR_6->cur_residue < 0 || VAR_6->tot_residue < 0) {
  FUNC_3(VAR_1, VAR_2->host,
        "Data transfer overflow.\n");
  FUNC_3(VAR_1, VAR_2->host,
        "cur_residue[%d] tot_residue[%d] len[%u]\n",
        VAR_6->cur_residue, VAR_6->tot_residue, VAR_5);
  VAR_6->cur_residue = 0;
  VAR_6->tot_residue = 0;
 }
 if (!VAR_6->cur_residue && VAR_6->tot_residue) {
  VAR_6->prv_sg = VAR_6->cur_sg;
  VAR_6->cur_sg = FUNC_2(VAR_6->cur_sg);
  VAR_6->cur_residue = FUNC_1(VAR_6->cur_sg);
 }
}
