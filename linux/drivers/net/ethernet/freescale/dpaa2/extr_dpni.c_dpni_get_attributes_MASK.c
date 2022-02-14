
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpni_rsp_get_attr {int wriop_version; int fs_key_size; int qos_key_size; int fs_entries; int qos_entries; int vlan_filter_entries; int mac_filter_entries; int num_tcs; int num_queues; int options; } ;
struct dpni_attr {void* wriop_version; int fs_key_size; int qos_key_size; void* fs_entries; int qos_entries; int vlan_filter_entries; int mac_filter_entries; int num_tcs; int num_queues; int options; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_4(struct fsl_mc_io *VAR_1,
   u32 VAR_2,
   u16 VAR_3,
   struct dpni_attr *VAR_4)
{
 struct fsl_mc_command VAR_5 = { 0 };
 struct dpni_rsp_get_attr *VAR_6;

 int VAR_7;


 VAR_5.header = FUNC_2(VAR_0,
       VAR_2,
       VAR_3);


 VAR_7 = FUNC_3(VAR_1, &VAR_5);
 if (VAR_7)
  return VAR_7;


 VAR_6 = (struct dpni_rsp_get_attr *)VAR_5.params;
 VAR_4->options = FUNC_1(VAR_6->options);
 VAR_4->num_queues = VAR_6->num_queues;
 VAR_4->num_tcs = VAR_6->num_tcs;
 VAR_4->mac_filter_entries = VAR_6->mac_filter_entries;
 VAR_4->vlan_filter_entries = VAR_6->vlan_filter_entries;
 VAR_4->qos_entries = VAR_6->qos_entries;
 VAR_4->fs_entries = FUNC_0(VAR_6->fs_entries);
 VAR_4->qos_key_size = VAR_6->qos_key_size;
 VAR_4->fs_key_size = VAR_6->fs_key_size;
 VAR_4->wriop_version = FUNC_0(VAR_6->wriop_version);

 return 0;
}
