
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int substring_t ;
struct pts_mount_opts {int setuid; int setgid; int mode; int ptmxmode; int max; int reserve; int gid; int uid; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_8__ {TYPE_1__* nsproxy; } ;
struct TYPE_7__ {TYPE_2__* nsproxy; } ;
struct TYPE_6__ {scalar_t__ mnt_ns; } ;
struct TYPE_5__ {scalar_t__ mnt_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_10 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (char*,int ,int *) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char**,char*) ;
 int VAR_11 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(char *VAR_12, int VAR_13, struct pts_mount_opts *VAR_14)
{
 char *VAR_15;
 kuid_t VAR_16;
 kgid_t VAR_17;

 VAR_14->setuid = 0;
 VAR_14->setgid = 0;
 VAR_14->uid = VAR_4;
 VAR_14->gid = VAR_3;
 VAR_14->mode = VAR_0;
 VAR_14->ptmxmode = VAR_1;
 VAR_14->max = VAR_6;




 if (VAR_13 == VAR_7)
  VAR_14->reserve =
   (VAR_9->nsproxy->mnt_ns == VAR_10.nsproxy->mnt_ns);

 while ((VAR_15 = FUNC_8(&VAR_12, ",")) != ((void*)0)) {
  substring_t VAR_18[VAR_5];
  int VAR_19;
  int VAR_20;

  if (!*VAR_15)
   continue;

  VAR_19 = FUNC_6(VAR_15, VAR_11, VAR_18);
  switch (VAR_19) {
  case 128:
   if (FUNC_4(&VAR_18[0], &VAR_20))
    return -VAR_2;
   VAR_16 = FUNC_3(FUNC_0(), VAR_20);
   if (!FUNC_9(VAR_16))
    return -VAR_2;
   VAR_14->uid = VAR_16;
   VAR_14->setuid = 1;
   break;
  case 133:
   if (FUNC_4(&VAR_18[0], &VAR_20))
    return -VAR_2;
   VAR_17 = FUNC_2(FUNC_0(), VAR_20);
   if (!FUNC_1(VAR_17))
    return -VAR_2;
   VAR_14->gid = VAR_17;
   VAR_14->setgid = 1;
   break;
  case 131:
   if (FUNC_5(&VAR_18[0], &VAR_20))
    return -VAR_2;
   VAR_14->mode = VAR_20 & VAR_8;
   break;
  case 129:
   if (FUNC_5(&VAR_18[0], &VAR_20))
    return -VAR_2;
   VAR_14->ptmxmode = VAR_20 & VAR_8;
   break;
  case 130:
   break;
  case 132:
   if (FUNC_4(&VAR_18[0], &VAR_20) ||
       VAR_20 < 0 || VAR_20 > VAR_6)
    return -VAR_2;
   VAR_14->max = VAR_20;
   break;
  default:
   FUNC_7("called with bogus options\n");
   return -VAR_2;
  }
 }

 return 0;
}
