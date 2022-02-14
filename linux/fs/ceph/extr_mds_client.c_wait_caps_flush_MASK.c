
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ceph_mds_client {int cap_flushing_wq; } ;


 int FUNC_0 (struct ceph_mds_client*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ceph_mds_client *VAR_0,
       u64 VAR_1)
{
 FUNC_1("check_caps_flush want %llu\n", VAR_1);

 FUNC_2(VAR_0->cap_flushing_wq,
     FUNC_0(VAR_0, VAR_1));

 FUNC_1("check_caps_flush ok, flushed thru %llu\n", VAR_1);
}
