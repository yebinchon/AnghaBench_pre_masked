
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_sg_list {int dummy; } ;
struct pvscsi_ctx {int * sgl; scalar_t__ sglPA; } ;
struct pvscsi_adapter {int req_depth; struct pvscsi_ctx* cmd_map; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned long,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct pvscsi_adapter *VAR_4)
{
 struct pvscsi_ctx *VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->cmd_map;
 FUNC_1(sizeof(struct pvscsi_sg_list) > VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_4->req_depth; ++VAR_6, ++VAR_5) {
  VAR_5->sgl = (void *)FUNC_3(VAR_1,
          FUNC_5(VAR_3));
  VAR_5->sglPA = 0;
  FUNC_0(!FUNC_2(((unsigned long)VAR_5->sgl), VAR_2));
  if (!VAR_5->sgl) {
   for (; VAR_6 >= 0; --VAR_6, --VAR_5) {
    FUNC_4((unsigned long)VAR_5->sgl,
        FUNC_5(VAR_3));
    VAR_5->sgl = ((void*)0);
   }
   return -VAR_0;
  }
 }

 return 0;
}
