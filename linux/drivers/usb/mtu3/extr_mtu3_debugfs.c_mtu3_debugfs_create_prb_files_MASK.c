
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssusb_mtk {int dbgfs_root; } ;
struct mtu3 {int ippc_base; struct ssusb_mtk* ssusb; } ;
struct dentry {int dummy; } ;
struct debugfs_reg32 {int name; } ;


 int FUNC_0 (struct debugfs_reg32*) ;
 struct dentry* FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int,struct dentry*,struct mtu3*,int *) ;
 int FUNC_3 (struct mtu3*,int ,struct debugfs_reg32*,int,char*,struct dentry*) ;
 struct debugfs_reg32* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct mtu3 *VAR_2)
{
 struct ssusb_mtk *VAR_3 = VAR_2->ssusb;
 struct debugfs_reg32 *VAR_4;
 struct dentry *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1("probe", VAR_3->dbgfs_root);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  VAR_4 = &VAR_0[VAR_6];
  FUNC_2(VAR_4->name, 0644, VAR_5,
        VAR_2, &VAR_1);
 }

 FUNC_3(VAR_2, VAR_2->ippc_base, VAR_0,
       FUNC_0(VAR_0), "regs", VAR_5);
}
