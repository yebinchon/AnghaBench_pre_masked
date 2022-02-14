
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct dlm_master_requery {int name; int namelen; int node_idx; } ;
struct TYPE_2__ {int len; int name; } ;
struct dlm_lock_resource {TYPE_1__ lockname; } ;
struct dlm_ctxt {int key; int node_num; } ;
typedef int req ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct dlm_master_requery*,int ,int) ;
 int FUNC_3 (int ,char*,int,scalar_t__,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,struct dlm_master_requery*,int,scalar_t__,int*) ;

int FUNC_7(struct dlm_ctxt *VAR_5, struct dlm_lock_resource *VAR_6,
     u8 VAR_7, u8 *VAR_8)
{
 int VAR_9 = -VAR_2;
 struct dlm_master_requery VAR_10;
 int VAR_11 = VAR_0;

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.node_idx = VAR_5->node_num;
 VAR_10.namelen = VAR_6->lockname.len;
 FUNC_1(VAR_10.name, VAR_6->lockname.name, VAR_6->lockname.len);

resend:
 VAR_9 = FUNC_6(VAR_1, VAR_5->key,
     &VAR_10, sizeof(VAR_10), VAR_7, &VAR_11);
 if (VAR_9 < 0)
  FUNC_3(VAR_4, "Error %d when sending message %u (key "
       "0x%x) to node %u\n", VAR_9, VAR_1,
       VAR_5->key, VAR_7);
 else if (VAR_11 == -VAR_3) {
  FUNC_4(VAR_11);
  FUNC_5(50);
  goto resend;
 } else {
  FUNC_0(VAR_11 < 0);
  FUNC_0(VAR_11 > VAR_0);
  *VAR_8 = (u8) (VAR_11 & 0xff);
  FUNC_3(0, "node %u responded to master requery with %u\n",
     VAR_7, *VAR_8);
  VAR_9 = 0;
 }
 return VAR_9;
}
