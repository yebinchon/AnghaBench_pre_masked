
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int substring_t ;
struct v9fs_session_info {int afid; int debug; int cache; char* cachetag; long session_lock_timeout; char* uname; char* aname; int nodev; int flags; void* uid; int dfltgid; void* dfltuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int) ;
 void* FUNC_6 (int ,int) ;
 int FUNC_7 (int *,int*) ;
 void* FUNC_8 (int *) ;
 int FUNC_9 (char*,int ,int *) ;
 int FUNC_10 (int ,char*) ;
 int VAR_17 ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char**,int) ;
 int FUNC_13 (char*,char*) ;
 char* FUNC_14 (char**,char*) ;
 int VAR_18 ;
 int FUNC_15 (void*) ;

__attribute__((used)) static int FUNC_16(struct v9fs_session_info *VAR_19, char *VAR_20)
{
 char *VAR_21, *VAR_22;
 substring_t VAR_23[VAR_8];
 char *VAR_24;
 int VAR_25 = 0;
 char *VAR_26, *VAR_27;
 int VAR_28 = 0;


 VAR_19->afid = ~0;
 VAR_19->debug = 0;
 VAR_19->cache = VAR_3;



 VAR_19->session_lock_timeout = VAR_10;

 if (!VAR_20)
  return 0;

 VAR_22 = FUNC_4(VAR_20, VAR_6);
 if (!VAR_22) {
  VAR_28 = -VAR_5;
  goto fail_option_alloc;
 }
 VAR_21 = VAR_22;

 while ((VAR_24 = FUNC_14(&VAR_21, ",")) != ((void*)0)) {
  int VAR_29, VAR_30;
  if (!*VAR_24)
   continue;
  VAR_29 = FUNC_9(VAR_24, VAR_18, VAR_23);
  switch (VAR_29) {
  case 137:
   VAR_30 = FUNC_7(&VAR_23[0], &VAR_25);
   if (VAR_30 < 0) {
    FUNC_10(VAR_9,
      "integer field, but no integer?\n");
    VAR_28 = VAR_30;
   } else {
    VAR_19->debug = VAR_25;



   }
   break;

  case 135:
   VAR_30 = FUNC_7(&VAR_23[0], &VAR_25);
   if (VAR_30 < 0) {
    FUNC_10(VAR_9,
      "integer field, but no integer?\n");
    VAR_28 = VAR_30;
    continue;
   }
   VAR_19->dfltuid = FUNC_6(FUNC_0(), VAR_25);
   if (!FUNC_15(VAR_19->dfltuid)) {
    FUNC_10(VAR_9,
      "uid field, but not a uid?\n");
    VAR_28 = -VAR_4;
   }
   break;
  case 136:
   VAR_30 = FUNC_7(&VAR_23[0], &VAR_25);
   if (VAR_30 < 0) {
    FUNC_10(VAR_9,
      "integer field, but no integer?\n");
    VAR_28 = VAR_30;
    continue;
   }
   VAR_19->dfltgid = FUNC_5(FUNC_0(), VAR_25);
   if (!FUNC_2(VAR_19->dfltgid)) {
    FUNC_10(VAR_9,
      "gid field, but not a gid?\n");
    VAR_28 = -VAR_4;
   }
   break;
  case 141:
   VAR_30 = FUNC_7(&VAR_23[0], &VAR_25);
   if (VAR_30 < 0) {
    FUNC_10(VAR_9,
      "integer field, but no integer?\n");
    VAR_28 = VAR_30;
   } else {
    VAR_19->afid = VAR_25;
   }
   break;
  case 128:
   FUNC_3(VAR_19->uname);
   VAR_19->uname = FUNC_8(&VAR_23[0]);
   if (!VAR_19->uname) {
    VAR_28 = -VAR_5;
    goto free_and_return;
   }
   break;
  case 129:
   FUNC_3(VAR_19->aname);
   VAR_19->aname = FUNC_8(&VAR_23[0]);
   if (!VAR_19->aname) {
    VAR_28 = -VAR_5;
    goto free_and_return;
   }
   break;
  case 131:
   VAR_19->nodev = 1;
   break;
  case 139:
   VAR_19->cache = VAR_1;
   break;
  case 134:
   VAR_19->cache = VAR_0;
   break;
  case 132:
   VAR_19->cache = VAR_2;
   break;
  case 138:
   break;
  case 140:
   VAR_26 = FUNC_8(&VAR_23[0]);
   if (!VAR_26) {
    VAR_28 = -VAR_5;
    FUNC_10(VAR_9,
      "problem allocating copy of cache arg\n");
    goto free_and_return;
   }
   VAR_30 = FUNC_1(VAR_26);
   if (VAR_30 < 0)
    VAR_28 = VAR_30;
   else
    VAR_19->cache = VAR_30;

   FUNC_3(VAR_26);
   break;

  case 142:
   VAR_26 = FUNC_8(&VAR_23[0]);
   if (!VAR_26) {
    VAR_28 = -VAR_5;
    FUNC_10(VAR_9,
      "problem allocating copy of access arg\n");
    goto free_and_return;
   }

   VAR_19->flags &= ~VAR_13;
   if (FUNC_13(VAR_26, "user") == 0)
    VAR_19->flags |= VAR_15;
   else if (FUNC_13(VAR_26, "any") == 0)
    VAR_19->flags |= VAR_11;
   else if (FUNC_13(VAR_26, "client") == 0) {
    VAR_19->flags |= VAR_12;
   } else {
    uid_t VAR_31;
    VAR_19->flags |= VAR_14;
    VAR_31 = FUNC_12(VAR_26, &VAR_27, 10);
    if (*VAR_27 != '\0') {
     VAR_28 = -VAR_4;
     FUNC_11("Unknown access argument %s\n",
      VAR_26);
     FUNC_3(VAR_26);
     continue;
    }
    VAR_19->uid = FUNC_6(FUNC_0(), VAR_31);
    if (!FUNC_15(VAR_19->uid)) {
     VAR_28 = -VAR_4;
     FUNC_11("Unknown uid %s\n", VAR_26);
    }
   }

   FUNC_3(VAR_26);
   break;

  case 130:



   FUNC_10(VAR_9,
     "Not defined CONFIG_9P_FS_POSIX_ACL. Ignoring posixacl option\n");

   break;

  case 133:
   VAR_30 = FUNC_7(&VAR_23[0], &VAR_25);
   if (VAR_30 < 0) {
    FUNC_10(VAR_9,
      "integer field, but no integer?\n");
    VAR_28 = VAR_30;
    continue;
   }
   if (VAR_25 < 1) {
    FUNC_10(VAR_9,
      "locktimeout must be a greater than zero integer.\n");
    VAR_28 = -VAR_4;
    continue;
   }
   VAR_19->session_lock_timeout = (long)VAR_25 * VAR_7;
   break;

  default:
   continue;
  }
 }

free_and_return:
 FUNC_3(VAR_22);
fail_option_alloc:
 return VAR_28;
}
