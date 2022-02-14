
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nfcsim {int dropframe; TYPE_2__* nfc_digital_dev; } ;
struct dentry {int dummy; } ;
typedef int devname ;
struct TYPE_4__ {TYPE_1__* nfc_dev; } ;
struct TYPE_3__ {int idx; } ;


 int FUNC_0 (struct nfcsim*,char*,...) ;
 struct dentry* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,struct dentry*,int *) ;
 int VAR_0 ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_4(struct nfcsim *VAR_1)
{
 struct dentry *VAR_2;
 char VAR_3[5];
 u32 VAR_4;
 int VAR_5;

 if (!VAR_0) {
  FUNC_0(VAR_1, "nfcsim debugfs not initialized\n");
  return;
 }

 VAR_4 = VAR_1->nfc_digital_dev->nfc_dev->idx;
 VAR_5 = FUNC_3(VAR_3, sizeof(VAR_3), "nfc%d", VAR_4);
 if (VAR_5 >= sizeof(VAR_3)) {
  FUNC_0(VAR_1, "Could not compute dev name for dev %d\n", VAR_4);
  return;
 }

 VAR_2 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_2) {
  FUNC_0(VAR_1, "Could not create debugfs entries for nfc%d\n",
      VAR_4);
  return;
 }

 FUNC_2("dropframe", 0664, VAR_2, &VAR_1->dropframe);
}
