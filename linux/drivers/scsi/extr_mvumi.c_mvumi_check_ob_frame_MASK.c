
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mvumi_rsp_frame {unsigned short request_id; unsigned short tag; } ;
struct TYPE_4__ {unsigned short size; } ;
struct mvumi_hba {unsigned int ob_max_size; TYPE_3__** tag_cmd; TYPE_2__* pdev; scalar_t__ request_id_enabled; TYPE_1__ tag_pool; struct mvumi_rsp_frame* ob_list; } ;
struct TYPE_6__ {unsigned short request_id; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int) ;

__attribute__((used)) static char FUNC_2(struct mvumi_hba *VAR_0,
  unsigned int VAR_1, struct mvumi_rsp_frame *VAR_2)
{
 unsigned short VAR_3, VAR_4;

 FUNC_1(1);
 VAR_2 = VAR_0->ob_list + VAR_1 * VAR_0->ob_max_size;
 VAR_4 = VAR_2->request_id;
 VAR_3 = VAR_2->tag;
 if (VAR_3 > VAR_0->tag_pool.size) {
  FUNC_0(&VAR_0->pdev->dev, "ob frame data error\n");
  return -1;
 }
 if (VAR_0->tag_cmd[VAR_3] == ((void*)0)) {
  FUNC_0(&VAR_0->pdev->dev, "tag[0x%x] with NO command\n", VAR_3);
  return -1;
 } else if (VAR_0->tag_cmd[VAR_3]->request_id != VAR_4 &&
      VAR_0->request_id_enabled) {
   FUNC_0(&VAR_0->pdev->dev, "request ID from FW:0x%x,"
     "cmd request ID:0x%x\n", VAR_4,
     VAR_0->tag_cmd[VAR_3]->request_id);
   return -1;
 }

 return 0;
}
