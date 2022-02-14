
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {struct super_block* mnt_sb; } ;
struct tm {scalar_t__ tm_year; } ;
struct super_block {scalar_t__ s_time_max; TYPE_1__* s_type; } ;
struct path {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct vfsmount*) ;
 char* FUNC_3 (struct path*,char*,int ) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char*,int ,char*,scalar_t__,unsigned long long) ;
 int FUNC_7 (scalar_t__,int ,struct tm*) ;

__attribute__((used)) static void FUNC_8(struct path *VAR_4, struct vfsmount *VAR_5)
{
 struct super_block *VAR_6 = VAR_5->mnt_sb;

 if (!FUNC_2(VAR_5) &&
    (FUNC_5() + VAR_3 > VAR_6->s_time_max)) {
  char *VAR_7 = (char *)FUNC_1(VAR_1);
  char *VAR_8 = VAR_7 ? FUNC_3(VAR_4, VAR_7, VAR_2) : FUNC_0(-VAR_0);
  struct tm VAR_9;

  FUNC_7(VAR_6->s_time_max, 0, &VAR_9);

  FUNC_6("Mounted %s file system at %s supports timestamps until %04ld (0x%llx)\n",
   VAR_6->s_type->name, VAR_8,
   VAR_9.tm_year+1900, (unsigned long long)VAR_6->s_time_max);

  FUNC_4((unsigned long)VAR_7);
 }
}
