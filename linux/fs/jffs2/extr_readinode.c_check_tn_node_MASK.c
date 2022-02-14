
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jffs2_tmp_dnode_info {TYPE_1__* fn; } ;
struct jffs2_sb_info {int dummy; } ;
struct TYPE_2__ {int raw; scalar_t__ size; scalar_t__ ofs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct jffs2_sb_info*,struct jffs2_tmp_dnode_info*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct jffs2_sb_info*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct jffs2_sb_info *VAR_1, struct jffs2_tmp_dnode_info *VAR_2)
{
 int VAR_3;

 FUNC_0(FUNC_6(VAR_2->fn->raw));


 if (FUNC_5(VAR_2->fn->raw) != VAR_0)
  return 0;

 FUNC_3("check node %#04x-%#04x, phys offs %#08x\n",
        VAR_2->fn->ofs, VAR_2->fn->ofs + VAR_2->fn->size, FUNC_7(VAR_2->fn->raw));

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (FUNC_8(VAR_3 < 0)) {
  FUNC_1("check_node_data() returned error: %d.\n",
   VAR_3);
 } else if (FUNC_8(VAR_3 > 0)) {
  FUNC_3("CRC error, mark it obsolete.\n");
  FUNC_4(VAR_1, VAR_2->fn->raw);
 }

 return VAR_3;
}
