
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_psf_query_host_access {scalar_t__ host_access_information; } ;
struct dasd_device {int cdev; } ;
struct dasd_ckd_path_group_entry {int status_flags; } ;
struct dasd_ckd_host_information {int entry_count; int entry_size; scalar_t__ entry; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dasd_device*,struct dasd_psf_query_host_access*) ;
 int FUNC_2 (struct dasd_psf_query_host_access*) ;
 struct dasd_psf_query_host_access* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct dasd_device *VAR_4)
{
 struct dasd_psf_query_host_access *VAR_5;
 struct dasd_ckd_path_group_entry *VAR_6;
 struct dasd_ckd_host_information *VAR_7;
 int VAR_8 = 0;
 int VAR_9, VAR_10;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_3);
 if (!VAR_5) {
  FUNC_0(VAR_1, VAR_4->cdev, "%s",
    "Could not allocate access buffer");
  return -VAR_2;
 }
 VAR_9 = FUNC_1(VAR_4, VAR_5);
 if (VAR_9) {
  FUNC_2(VAR_5);
  return VAR_9;
 }

 VAR_7 = (struct dasd_ckd_host_information *)
  VAR_5->host_access_information;
 for (VAR_10 = 0; VAR_10 < VAR_7->entry_count; VAR_10++) {
  VAR_6 = (struct dasd_ckd_path_group_entry *)
   (VAR_7->entry + VAR_10 * VAR_7->entry_size);
  if (VAR_6->status_flags & VAR_0)
   VAR_8++;
 }

 FUNC_2(VAR_5);
 return VAR_8;
}
