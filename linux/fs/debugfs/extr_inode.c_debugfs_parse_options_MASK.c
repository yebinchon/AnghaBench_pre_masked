
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct debugfs_mount_opts {int mode; int gid; int uid; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (char*,int ,int *) ;
 char* FUNC_7 (char**,char*) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(char *VAR_5, struct debugfs_mount_opts *VAR_6)
{
 substring_t VAR_7[VAR_2];
 int VAR_8;
 int VAR_9;
 kuid_t VAR_10;
 kgid_t VAR_11;
 char *VAR_12;

 VAR_6->mode = VAR_0;

 while ((VAR_12 = FUNC_7(&VAR_5, ",")) != ((void*)0)) {
  if (!*VAR_12)
   continue;

  VAR_9 = FUNC_6(VAR_12, VAR_4, VAR_7);
  switch (VAR_9) {
  case 128:
   if (FUNC_4(&VAR_7[0], &VAR_8))
    return -VAR_1;
   VAR_10 = FUNC_3(FUNC_0(), VAR_8);
   if (!FUNC_8(VAR_10))
    return -VAR_1;
   VAR_6->uid = VAR_10;
   break;
  case 130:
   if (FUNC_4(&VAR_7[0], &VAR_8))
    return -VAR_1;
   VAR_11 = FUNC_2(FUNC_0(), VAR_8);
   if (!FUNC_1(VAR_11))
    return -VAR_1;
   VAR_6->gid = VAR_11;
   break;
  case 129:
   if (FUNC_5(&VAR_7[0], &VAR_8))
    return -VAR_1;
   VAR_6->mode = VAR_8 & VAR_3;
   break;




  }
 }

 return 0;
}
