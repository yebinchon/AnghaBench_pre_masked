
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nxp_nci_fw_info {scalar_t__ written; int frame_size; scalar_t__* data; int size; int cmd_completion; int work; scalar_t__ fw; scalar_t__ cmd_result; } ;
struct nxp_nci_info {struct nxp_nci_fw_info fw_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct nxp_nci_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 long FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct nxp_nci_info *VAR_6)
{
 struct nxp_nci_fw_info *VAR_7 = &VAR_6->fw_info;
 long VAR_8;
 int VAR_9;

 FUNC_2(&VAR_7->cmd_completion);

 if (VAR_7->written == 0) {
  VAR_7->frame_size = FUNC_0(VAR_7->data) &
          VAR_4;
  VAR_7->data += VAR_5;
  VAR_7->size -= VAR_5;
 }

 if (VAR_7->frame_size > VAR_7->size)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7->written += VAR_9;

 if (*VAR_7->data == VAR_3) {
  VAR_7->cmd_result = 0;
  if (VAR_7->fw)
   FUNC_3(&VAR_7->work);
 } else {
  VAR_8 = FUNC_4(
   &VAR_7->cmd_completion, VAR_2);
  if (VAR_8 == 0)
   return -VAR_1;
 }

 return 0;
}
