
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct alua_port_group {scalar_t__ device_id_len; char* device_id_str; int group_id; int tpgs; int node; int lock; int dh_list; int rtpg_list; int rtpg_work; int kref; int flags; int valid_states; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct alua_port_group* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct alua_port_group* FUNC_3 (char*,scalar_t__,int) ;
 int VAR_7 ;
 int FUNC_4 (struct alua_port_group*) ;
 int FUNC_5 (int *) ;
 struct alua_port_group* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (struct scsi_device*,char*,int) ;
 int FUNC_9 (int ,struct scsi_device*,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static struct alua_port_group *FUNC_13(struct scsi_device *VAR_11,
          int VAR_12, int VAR_13)
{
 struct alua_port_group *VAR_14, *VAR_15;

 VAR_14 = FUNC_6(sizeof(struct alua_port_group), VAR_3);
 if (!VAR_14)
  return FUNC_0(-VAR_2);

 VAR_14->device_id_len = FUNC_8(VAR_11, VAR_14->device_id_str,
         sizeof(VAR_14->device_id_str));
 if (VAR_14->device_id_len <= 0) {




  FUNC_9(VAR_4, VAR_11,
       "%s: No device descriptors found\n",
       VAR_0);
  VAR_14->device_id_str[0] = '\0';
  VAR_14->device_id_len = 0;
 }
 VAR_14->group_id = VAR_12;
 VAR_14->tpgs = VAR_13;
 VAR_14->state = VAR_5;
 VAR_14->valid_states = VAR_6;
 if (VAR_8)
  VAR_14->flags |= VAR_1;
 FUNC_5(&VAR_14->kref);
 FUNC_1(&VAR_14->rtpg_work, VAR_7);
 FUNC_2(&VAR_14->rtpg_list);
 FUNC_2(&VAR_14->node);
 FUNC_2(&VAR_14->dh_list);
 FUNC_11(&VAR_14->lock);

 FUNC_10(&VAR_10);
 VAR_15 = FUNC_3(VAR_14->device_id_str, VAR_14->device_id_len,
      VAR_12);
 if (VAR_15) {
  FUNC_12(&VAR_10);
  FUNC_4(VAR_14);
  return VAR_15;
 }

 FUNC_7(&VAR_14->node, &VAR_9);
 FUNC_12(&VAR_10);

 return VAR_14;
}
