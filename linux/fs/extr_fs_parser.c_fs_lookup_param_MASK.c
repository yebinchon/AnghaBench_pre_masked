
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int * mnt; int * dentry; } ;
struct fs_parameter {int type; int key; int dirfd; struct filename* name; int string; } ;
struct fs_context {int dummy; } ;
struct filename {int name; int refcnt; } ;
struct TYPE_2__ {int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct filename*) ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct filename*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (struct fs_context*,char*,int ,int ) ;
 int FUNC_5 (int ,struct filename*,unsigned int,struct path*,int *) ;



 struct filename* FUNC_6 (int ) ;
 int FUNC_7 (struct fs_context*,char*,int ) ;
 int FUNC_8 (struct path*) ;
 int FUNC_9 (struct filename*) ;

int FUNC_10(struct fs_context *VAR_2,
      struct fs_parameter *VAR_3,
      bool VAR_4,
      struct path *VAR_5)
{
 struct filename *VAR_6;
 unsigned int VAR_7 = 0;
 bool VAR_8;
 int VAR_9;

 switch (VAR_3->type) {
 case 128:
  VAR_6 = FUNC_6(VAR_3->string);
  if (FUNC_0(VAR_6))
   return FUNC_1(VAR_6);
  VAR_8 = 1;
  break;
 case 129:
  VAR_7 = VAR_1;

 case 130:
  VAR_6 = VAR_3->name;
  VAR_8 = 0;
  break;
 default:
  return FUNC_7(VAR_2, "%s: not usable as path", VAR_3->key);
 }

 VAR_6->refcnt++;
 VAR_9 = FUNC_5(VAR_3->dirfd, VAR_6, VAR_7, VAR_5, ((void*)0));
 if (VAR_9 < 0) {
  FUNC_4(VAR_2, "%s: Lookup failure for '%s'", VAR_3->key, VAR_6->name);
  goto out;
 }

 if (VAR_4 &&
     !FUNC_2(FUNC_3(VAR_5->dentry)->i_mode)) {
  FUNC_8(VAR_5);
  VAR_5->dentry = ((void*)0);
  VAR_5->mnt = ((void*)0);
  FUNC_4(VAR_2, "%s: Non-blockdev passed as '%s'",
         VAR_3->key, VAR_6->name);
  VAR_9 = -VAR_0;
 }

out:
 if (VAR_8)
  FUNC_9(VAR_6);
 return VAR_9;
}
