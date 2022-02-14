
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssusb_mtk {int dbgfs_root; } ;
struct mtu3 {int num_eps; scalar_t__ out_eps; scalar_t__ in_eps; struct ssusb_mtk* ssusb; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__,struct dentry*) ;

__attribute__((used)) static void FUNC_2(struct mtu3 *VAR_0)
{
 struct ssusb_mtk *VAR_1 = VAR_0->ssusb;
 struct dentry *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0("eps", VAR_1->dbgfs_root);

 for (VAR_3 = 1; VAR_3 < VAR_0->num_eps; VAR_3++) {
  FUNC_1(VAR_0->in_eps + VAR_3, VAR_2);
  FUNC_1(VAR_0->out_eps + VAR_3, VAR_2);
 }
}
