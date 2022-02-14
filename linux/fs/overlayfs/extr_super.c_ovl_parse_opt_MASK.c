
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct ovl_config {char* redirect_mode; char* upperdir; char* lowerdir; char* workdir; int default_permissions; int index; int nfs_export; int metacopy; int redirect_follow; int redirect_dir; int xino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int ) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int *) ;
 char* FUNC_4 (char**) ;
 int FUNC_5 (struct ovl_config*,char*) ;
 int FUNC_6 () ;
 int VAR_7 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static int FUNC_9(char *VAR_8, struct ovl_config *VAR_9)
{
 char *VAR_10;
 int VAR_11;
 bool VAR_12 = 0, VAR_13 = 0;

 VAR_9->redirect_mode = FUNC_1(FUNC_6(), VAR_2);
 if (!VAR_9->redirect_mode)
  return -VAR_1;

 while ((VAR_10 = FUNC_4(&VAR_8)) != ((void*)0)) {
  int VAR_14;
  substring_t VAR_15[VAR_3];

  if (!*VAR_10)
   continue;

  VAR_14 = FUNC_3(VAR_10, VAR_7, VAR_15);
  switch (VAR_14) {
  case 132:
   FUNC_0(VAR_9->upperdir);
   VAR_9->upperdir = FUNC_2(&VAR_15[0]);
   if (!VAR_9->upperdir)
    return -VAR_1;
   break;

  case 138:
   FUNC_0(VAR_9->lowerdir);
   VAR_9->lowerdir = FUNC_2(&VAR_15[0]);
   if (!VAR_9->lowerdir)
    return -VAR_1;
   break;

  case 131:
   FUNC_0(VAR_9->workdir);
   VAR_9->workdir = FUNC_2(&VAR_15[0]);
   if (!VAR_9->workdir)
    return -VAR_1;
   break;

  case 141:
   VAR_9->default_permissions = 1;
   break;

  case 133:
   FUNC_0(VAR_9->redirect_mode);
   VAR_9->redirect_mode = FUNC_2(&VAR_15[0]);
   if (!VAR_9->redirect_mode)
    return -VAR_1;
   VAR_13 = 1;
   break;

  case 139:
   VAR_9->index = 1;
   break;

  case 140:
   VAR_9->index = 0;
   break;

  case 134:
   VAR_9->nfs_export = 1;
   break;

  case 135:
   VAR_9->nfs_export = 0;
   break;

  case 128:
   VAR_9->xino = VAR_6;
   break;

  case 129:
   VAR_9->xino = VAR_5;
   break;

  case 130:
   VAR_9->xino = VAR_4;
   break;

  case 136:
   VAR_9->metacopy = 1;
   VAR_12 = 1;
   break;

  case 137:
   VAR_9->metacopy = 0;
   break;

  default:
   FUNC_7("overlayfs: unrecognized mount option \"%s\" or missing value\n", VAR_10);
   return -VAR_0;
  }
 }


 if (!VAR_9->upperdir && VAR_9->workdir) {
  FUNC_8("overlayfs: option \"workdir=%s\" is useless in a non-upper mount, ignore\n",
   VAR_9->workdir);
  FUNC_0(VAR_9->workdir);
  VAR_9->workdir = ((void*)0);
 }

 VAR_11 = FUNC_5(VAR_9, VAR_9->redirect_mode);
 if (VAR_11)
  return VAR_11;





 if (!VAR_9->upperdir && VAR_9->redirect_follow)
  VAR_9->redirect_dir = 1;


 if (VAR_9->metacopy && !VAR_9->redirect_dir) {
  if (VAR_12 && VAR_13) {
   FUNC_7("overlayfs: conflicting options: metacopy=on,redirect_dir=%s\n",
          VAR_9->redirect_mode);
   return -VAR_0;
  }
  if (VAR_13) {




   FUNC_8("overlayfs: disabling metacopy due to redirect_dir=%s\n",
    VAR_9->redirect_mode);
   VAR_9->metacopy = 0;
  } else {

   VAR_9->redirect_follow = VAR_9->redirect_dir = 1;
  }
 }

 return 0;
}
