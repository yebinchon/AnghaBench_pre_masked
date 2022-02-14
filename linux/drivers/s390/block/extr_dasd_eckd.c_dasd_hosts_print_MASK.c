
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysplex ;
struct seq_file {int dummy; } ;
struct dasd_psf_query_host_access {scalar_t__ host_access_information; } ;
struct dasd_device {int cdev; } ;
struct dasd_ckd_path_group_entry {unsigned long status_flags; unsigned long cylinder; scalar_t__ timestamp; int sysplex_name; int pgid; } ;
struct dasd_ckd_host_information {int entry_count; int entry_size; scalar_t__ entry; } ;


 int FUNC_0 (int ,int ,char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dasd_device*,struct dasd_psf_query_host_access*) ;
 int FUNC_3 (struct dasd_psf_query_host_access*) ;
 struct dasd_psf_query_host_access* FUNC_4 (int,int ) ;
 int FUNC_5 (char**,int *,int) ;
 int FUNC_6 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_7(struct dasd_device *VAR_3, struct seq_file *VAR_4)
{
 struct dasd_psf_query_host_access *VAR_5;
 struct dasd_ckd_path_group_entry *VAR_6;
 struct dasd_ckd_host_information *VAR_7;
 char VAR_8[9] = "";
 int VAR_9, VAR_10;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_2);
 if (!VAR_5) {
  FUNC_0(VAR_0, VAR_3->cdev, "%s",
    "Could not allocate access buffer");
  return -VAR_1;
 }
 VAR_9 = FUNC_2(VAR_3, VAR_5);
 if (VAR_9) {
  FUNC_3(VAR_5);
  return VAR_9;
 }

 VAR_7 = (struct dasd_ckd_host_information *)
  VAR_5->host_access_information;
 for (VAR_10 = 0; VAR_10 < VAR_7->entry_count; VAR_10++) {
  VAR_6 = (struct dasd_ckd_path_group_entry *)
   (VAR_7->entry + VAR_10 * VAR_7->entry_size);

  FUNC_6(VAR_4, "pgid %*phN\n", 11, VAR_6->pgid);

  FUNC_6(VAR_4, "status_flags %02x\n", VAR_6->status_flags);

  FUNC_5(&VAR_8, &VAR_6->sysplex_name, sizeof(VAR_8) - 1);
  FUNC_1(VAR_8, sizeof(VAR_8));
  FUNC_6(VAR_4, "sysplex_name %8s\n", VAR_8);

  FUNC_6(VAR_4, "supported_cylinder %d\n", VAR_6->cylinder);

  FUNC_6(VAR_4, "timestamp %lu\n", (unsigned long)
      VAR_6->timestamp);
 }
 FUNC_3(VAR_5);

 return 0;
}
