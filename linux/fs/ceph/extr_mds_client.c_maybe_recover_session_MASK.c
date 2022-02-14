
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_client {struct ceph_fs_client* fsc; } ;
struct ceph_fs_client {int sb; scalar_t__ last_auto_reconnect; int blacklisted; int mount_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ceph_fs_client*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ceph_mds_client *VAR_4)
{
 struct ceph_fs_client *VAR_5 = VAR_4->fsc;

 if (!FUNC_2(VAR_5, VAR_1))
  return;

 if (FUNC_0(VAR_5->mount_state) != VAR_0)
  return;

 if (!FUNC_0(VAR_5->blacklisted))
  return;

 if (VAR_5->last_auto_reconnect &&
     FUNC_4(VAR_3, VAR_5->last_auto_reconnect + VAR_2 * 60 * 30))
  return;

 FUNC_3("auto reconnect after blacklisted\n");
 VAR_5->last_auto_reconnect = VAR_3;
 FUNC_1(VAR_5->sb);
}
