
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_options {int dummy; } ;
struct ceph_mount_options {int sb_flags; void* server_path; int congestion_kb; int max_readdir_bytes; int max_readdir; int caps_wanted_delay_max; int caps_wanted_delay_min; void* snapdir_name; int rasize; int rsize; int wsize; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char const* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct ceph_options*) ;
 int FUNC_1 (struct ceph_options*) ;
 struct ceph_options* FUNC_2 (char*,char const*,char const*,int ,void*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ceph_mount_options*) ;
 int FUNC_5 (char*,...) ;
 void* FUNC_6 (char const*,int ) ;
 struct ceph_mount_options* FUNC_7 (int,int ) ;
 int VAR_12 ;
 int FUNC_8 (char*,char const*) ;
 char* FUNC_9 (char const*,char) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static int FUNC_11(struct ceph_mount_options **VAR_13,
          struct ceph_options **VAR_14,
          int VAR_15, char *VAR_16,
          const char *VAR_17)
{
 struct ceph_mount_options *VAR_18;
 const char *VAR_19;
 int VAR_20;

 if (!VAR_17 || !*VAR_17)
  return -VAR_9;

 VAR_18 = FUNC_7(sizeof(*VAR_18), VAR_11);
 if (!VAR_18)
  return -VAR_10;

 FUNC_5("parse_mount_options %p, dev_name '%s'\n", VAR_18, VAR_17);

 VAR_18->sb_flags = VAR_15;
 VAR_18->flags = VAR_6;

 VAR_18->wsize = VAR_5;
 VAR_18->rsize = VAR_4;
 VAR_18->rasize = VAR_7;
 VAR_18->snapdir_name = FUNC_6(VAR_8, VAR_11);
 if (!VAR_18->snapdir_name) {
  VAR_20 = -VAR_10;
  goto out;
 }

 VAR_18->caps_wanted_delay_min = VAR_1;
 VAR_18->caps_wanted_delay_max = VAR_0;
 VAR_18->max_readdir = VAR_3;
 VAR_18->max_readdir_bytes = VAR_2;
 VAR_18->congestion_kb = FUNC_3();
 VAR_19 = FUNC_9(VAR_17, '/');
 if (VAR_19) {
  if (FUNC_10(VAR_19) > 1) {
   VAR_18->server_path = FUNC_6(VAR_19, VAR_11);
   if (!VAR_18->server_path) {
    VAR_20 = -VAR_10;
    goto out;
   }
  }
 } else {
  VAR_19 = VAR_17 + FUNC_10(VAR_17);
 }
 VAR_20 = -VAR_9;
 VAR_19--;
 if (VAR_19 < VAR_17 || *VAR_19 != ':') {
  FUNC_8("device name is missing path (no : separator in %s)\n",
    VAR_17);
  goto out;
 }
 FUNC_5("device name '%.*s'\n", (int)(VAR_19 - VAR_17), VAR_17);
 if (VAR_18->server_path)
  FUNC_5("server path '%s'\n", VAR_18->server_path);

 *VAR_14 = FUNC_2(VAR_16, VAR_17, VAR_19,
     VAR_12, (void *)VAR_18);
 if (FUNC_0(*VAR_14)) {
  VAR_20 = FUNC_1(*VAR_14);
  goto out;
 }


 *VAR_13 = VAR_18;
 return 0;

out:
 FUNC_4(VAR_18);
 return VAR_20;
}
