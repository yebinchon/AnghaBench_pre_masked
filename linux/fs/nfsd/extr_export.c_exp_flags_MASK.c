
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
struct user_namespace {int dummy; } ;
struct seq_file {TYPE_2__* file; } ;
struct nfsd4_fs_locations {scalar_t__ locations_count; TYPE_3__* locations; scalar_t__ migrated; } ;
typedef int kuid_t ;
typedef int kgid_t ;
typedef int gid_t ;
struct TYPE_6__ {int hosts; int path; } ;
struct TYPE_5__ {TYPE_1__* f_cred; } ;
struct TYPE_4__ {struct user_namespace* user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct user_namespace*,int ) ;
 char* FUNC_1 (struct user_namespace*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct user_namespace*,int) ;
 int FUNC_4 (struct user_namespace*,int) ;
 int FUNC_5 (struct seq_file*,int ,char*) ;
 int FUNC_6 (struct seq_file*,char*,...) ;
 int FUNC_7 (struct seq_file*,char) ;
 int FUNC_8 (struct seq_file*,int,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(struct seq_file *VAR_2, int VAR_3, int VAR_4,
  kuid_t VAR_5, kgid_t VAR_6, struct nfsd4_fs_locations *VAR_7)
{
 struct user_namespace *VAR_8 = VAR_2->file->f_cred->user_ns;

 FUNC_8(VAR_2, VAR_3, VAR_0);
 if (VAR_3 & VAR_1)
  FUNC_6(VAR_2, ",fsid=%d", VAR_4);
 if (!FUNC_9(VAR_5, FUNC_4(VAR_8, (uid_t)-2)) &&
     !FUNC_9(VAR_5, FUNC_4(VAR_8, 0x10000-2)))
  FUNC_6(VAR_2, ",anonuid=%u", FUNC_1(VAR_8, VAR_5));
 if (!FUNC_2(VAR_6, FUNC_3(VAR_8, (gid_t)-2)) &&
     !FUNC_2(VAR_6, FUNC_3(VAR_8, 0x10000-2)))
  FUNC_6(VAR_2, ",anongid=%u", FUNC_0(VAR_8, VAR_6));
 if (VAR_7 && VAR_7->locations_count > 0) {
  char *VAR_9 = (VAR_7->migrated) ? "refer" : "replicas";
  int VAR_10;

  FUNC_6(VAR_2, ",%s=", VAR_9);
  FUNC_5(VAR_2, VAR_7->locations[0].path, ",;@ \t\n\\");
  FUNC_7(VAR_2, '@');
  FUNC_5(VAR_2, VAR_7->locations[0].hosts, ",;@ \t\n\\");
  for (VAR_10 = 1; VAR_10 < VAR_7->locations_count; VAR_10++) {
   FUNC_7(VAR_2, ';');
   FUNC_5(VAR_2, VAR_7->locations[VAR_10].path, ",;@ \t\n\\");
   FUNC_7(VAR_2, '@');
   FUNC_5(VAR_2, VAR_7->locations[VAR_10].hosts, ",;@ \t\n\\");
  }
 }
}
