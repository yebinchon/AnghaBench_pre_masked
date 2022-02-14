
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; } ;
struct qedf_ctx {scalar_t__ vlan_id; int fipvlan_compl; int dbg_ctx; int link_state; } ;
struct fip_vlan_desc {int fd_vlan; } ;
struct fip_header {int fip_dl_len; } ;
struct fip_desc {size_t fip_dlen; int fip_dtype; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;

 int FUNC_0 (int *,int ,char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct qedf_ctx*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct qedf_ctx *VAR_4,
 struct sk_buff *VAR_5)
{
 struct fip_header *VAR_6;
 struct fip_desc *VAR_7;
 u16 VAR_8 = 0;
 ssize_t VAR_9;
 size_t VAR_10;

 VAR_6 = (struct fip_header *)(((void *)VAR_5->data) + 2 * VAR_0 + 2);

 VAR_9 = FUNC_4(VAR_6->fip_dl_len) * 4;
 VAR_7 = (struct fip_desc *)(VAR_6 + 1);
 while (VAR_9 > 0) {
  VAR_10 = VAR_7->fip_dlen * VAR_1;
  switch (VAR_7->fip_dtype) {
  case 128:
   VAR_8 = FUNC_4(((struct fip_vlan_desc *)VAR_7)->fd_vlan);
   break;
  }
  VAR_7 = (struct fip_desc *)((char *)VAR_7 + VAR_10);
  VAR_9 -= VAR_10;
 }

 if (FUNC_1(&VAR_4->link_state) == VAR_2) {
  FUNC_0(&VAR_4->dbg_ctx, VAR_3,
     "Dropping VLAN response as link is down.\n");
  return;
 }

 FUNC_0(&(VAR_4->dbg_ctx), VAR_3, "VLAN response, "
     "vid=0x%x.\n", VAR_8);

 if (VAR_8 > 0 && VAR_4->vlan_id != VAR_8) {
  FUNC_5(VAR_4, VAR_8);


  if (!FUNC_3(&VAR_4->fipvlan_compl))
   FUNC_2(&VAR_4->fipvlan_compl);
 }
}
