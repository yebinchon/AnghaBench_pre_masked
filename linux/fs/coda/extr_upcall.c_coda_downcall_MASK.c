
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct CodaFid {int dummy; } ;
struct TYPE_8__ {struct CodaFid NewFid; struct CodaFid OldFid; } ;
struct TYPE_7__ {struct CodaFid CodaFid; } ;
struct TYPE_6__ {struct CodaFid CodaFid; } ;
struct TYPE_5__ {struct CodaFid CodaFid; } ;
union outputArgs {TYPE_4__ coda_replace; TYPE_3__ coda_purgefid; TYPE_2__ coda_zapfile; TYPE_1__ coda_zapdir; } ;
struct venus_comm {int vc_mutex; struct super_block* vc_sb; } ;
struct super_block {int s_root; } ;
struct inode {int dummy; } ;
struct coda_zapfile_out {int dummy; } ;
struct coda_zapdir_out {int dummy; } ;
struct coda_replace_out {int dummy; } ;
struct coda_purgeuser_out {int dummy; } ;
struct coda_purgefid_out {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct super_block*) ;
 struct inode* FUNC_1 (struct CodaFid*,struct super_block*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,struct CodaFid*,struct CodaFid*) ;
 struct inode* FUNC_5 (int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct super_block*) ;

int FUNC_12(struct venus_comm *VAR_4, int VAR_5, union outputArgs *VAR_6,
    size_t VAR_7)
{
 struct inode *VAR_8 = ((void*)0);
 struct CodaFid *VAR_9 = ((void*)0), *VAR_10;
 struct super_block *VAR_11;





 switch (VAR_5) {
 case 131:
  if (VAR_7 < sizeof(struct coda_purgeuser_out))
   return -VAR_3;
  break;

 case 129:
  if (VAR_7 < sizeof(struct coda_zapdir_out))
   return -VAR_3;
  break;

 case 128:
  if (VAR_7 < sizeof(struct coda_zapfile_out))
   return -VAR_3;
  break;

 case 132:
  if (VAR_7 < sizeof(struct coda_purgefid_out))
   return -VAR_3;
  break;

 case 130:
  if (VAR_7 < sizeof(struct coda_replace_out))
   return -VAR_3;
  break;
 }


 FUNC_9(&VAR_4->vc_mutex);
 VAR_11 = VAR_4->vc_sb;
 if (!VAR_11 || !VAR_11->s_root)
  goto unlock_out;

 switch (VAR_5) {
 case 133:
  FUNC_0(VAR_11);
  FUNC_11(VAR_11);
  if (FUNC_7(VAR_11->s_root))
   FUNC_2(FUNC_5(VAR_11->s_root), VAR_0);
  break;

 case 131:
  FUNC_0(VAR_11);
  break;

 case 129:
  VAR_9 = &VAR_6->coda_zapdir.CodaFid;
  break;

 case 128:
  VAR_9 = &VAR_6->coda_zapfile.CodaFid;
  break;

 case 132:
  VAR_9 = &VAR_6->coda_purgefid.CodaFid;
  break;

 case 130:
  VAR_9 = &VAR_6->coda_replace.OldFid;
  break;
 }
 if (VAR_9)
  VAR_8 = FUNC_1(VAR_9, VAR_11);

unlock_out:
 FUNC_10(&VAR_4->vc_mutex);

 if (!VAR_8)
  return 0;

 switch (VAR_5) {
 case 129:
  FUNC_3(VAR_8, VAR_1);
  FUNC_2(VAR_8, VAR_2);
  break;

 case 128:
  FUNC_2(VAR_8, VAR_2);
  break;

 case 132:
  FUNC_3(VAR_8, VAR_1);


  FUNC_2(VAR_8, VAR_1);
  FUNC_6(VAR_8);
  break;

 case 130:
  VAR_10 = &VAR_6->coda_replace.NewFid;
  FUNC_4(VAR_8, VAR_9, VAR_10);
  break;
 }
 FUNC_8(VAR_8);
 return 0;
}
