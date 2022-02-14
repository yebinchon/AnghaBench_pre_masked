
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssusb_mtk {int dbgfs_root; struct mtu3* u3d; } ;
struct mtu3 {int mac_base; int ippc_base; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ) ;
 struct dentry* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,int ,struct mtu3*,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct mtu3*) ;
 int FUNC_4 (struct mtu3*) ;
 int FUNC_5 (struct mtu3*,int ,int ,int ,char*,struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_6(struct ssusb_mtk *VAR_5)
{
 struct mtu3 *VAR_6 = VAR_5->u3d;
 struct dentry *VAR_7;

 VAR_7 = FUNC_1("regs", VAR_5->dbgfs_root);

 FUNC_5(VAR_6, VAR_6->ippc_base,
       VAR_3, FUNC_0(VAR_3),
       "reg-ippc", VAR_7);

 FUNC_5(VAR_6, VAR_6->mac_base,
       VAR_1, FUNC_0(VAR_1),
       "reg-dev", VAR_7);

 FUNC_5(VAR_6, VAR_6->mac_base,
       VAR_0, FUNC_0(VAR_0),
       "reg-csr", VAR_7);

 FUNC_3(VAR_6);

 FUNC_4(VAR_6);

 FUNC_2("link-state", 0444, VAR_5->dbgfs_root,
       VAR_6, &VAR_4);
 FUNC_2("ep-used", 0444, VAR_5->dbgfs_root,
       VAR_6, &VAR_2);
}
