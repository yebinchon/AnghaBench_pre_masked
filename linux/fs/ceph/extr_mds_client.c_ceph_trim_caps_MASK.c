
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {int s_nr_caps; int s_mds; } ;
struct ceph_mds_client {int dummy; } ;


 int FUNC_0 (struct ceph_mds_client*,struct ceph_mds_session*) ;
 int FUNC_1 (struct ceph_mds_session*,int ,int*) ;
 int FUNC_2 (char*,int ,int,int,int) ;
 int VAR_0 ;

int FUNC_3(struct ceph_mds_client *VAR_1,
     struct ceph_mds_session *VAR_2,
     int VAR_3)
{
 int VAR_4 = VAR_2->s_nr_caps - VAR_3;

 FUNC_2("trim_caps mds%d start: %d / %d, trim %d\n",
      VAR_2->s_mds, VAR_2->s_nr_caps, VAR_3, VAR_4);
 if (VAR_4 > 0) {
  int VAR_5 = VAR_4;

  FUNC_1(VAR_2, VAR_0, &VAR_5);
  FUNC_2("trim_caps mds%d done: %d / %d, trimmed %d\n",
       VAR_2->s_mds, VAR_2->s_nr_caps, VAR_3,
   VAR_4 - VAR_5);
 }

 FUNC_0(VAR_1, VAR_2);
 return 0;
}
