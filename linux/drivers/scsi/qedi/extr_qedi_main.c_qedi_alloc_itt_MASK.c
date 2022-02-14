
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_itt_map {int dummy; } ;
struct qedi_ctx {int dbg_ctx; int itt_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct qedi_ctx *VAR_3)
{
 VAR_3->itt_map = FUNC_1(VAR_2,
    sizeof(struct qedi_itt_map), VAR_1);
 if (!VAR_3->itt_map) {
  FUNC_0(&VAR_3->dbg_ctx,
    "Unable to allocate itt map array memory\n");
  return -VAR_0;
 }
 return 0;
}
