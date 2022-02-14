
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct tool_mw {size_t size; int pidx; int dbgfs_file; int tr_base; int * io_base; } ;
struct tool_ctx {int ntb; TYPE_1__* peers; struct tool_mw* outmws; } ;
typedef int resource_size_t ;
typedef int phys_addr_t ;
typedef int buf ;
struct TYPE_2__ {int dbgfs_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ,struct tool_mw*,int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int *,int *) ;
 int FUNC_4 (int ,int,int,int ,size_t) ;
 int FUNC_5 (char*,int,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct tool_ctx *VAR_3, int VAR_4, int VAR_5,
         u64 VAR_6, size_t VAR_7)
{
 struct tool_mw *VAR_8 = &VAR_3->outmws[VAR_5];
 resource_size_t VAR_9;
 phys_addr_t VAR_10;
 char VAR_11[VAR_1];
 int VAR_12;

 if (VAR_8->io_base != ((void*)0))
  return 0;

 VAR_12 = FUNC_3(VAR_3->ntb, VAR_5, &VAR_10, &VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_4(VAR_3->ntb, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_12)
  return VAR_12;

 VAR_8->io_base = FUNC_1(VAR_10, VAR_9);
 if (VAR_8->io_base == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto err_clear_trans;
 }

 VAR_8->tr_base = VAR_6;
 VAR_8->size = VAR_7;
 VAR_8->pidx = VAR_4;

 FUNC_5(VAR_11, sizeof(VAR_11), "peer_mw%d", VAR_5);
 VAR_8->dbgfs_file = FUNC_0(VAR_11, 0600,
            VAR_3->peers[VAR_4].dbgfs_dir, VAR_8,
            &VAR_2);

 return 0;

err_clear_trans:
 FUNC_2(VAR_3->ntb, VAR_4, VAR_5);

 return VAR_12;
}
