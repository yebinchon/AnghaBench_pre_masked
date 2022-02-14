
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct alua_port_group {int kref; int lock; int dh_list; int device_id_str; scalar_t__ device_id_len; } ;
struct alua_dh_data {int pg_lock; int pg; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct alua_port_group*) ;
 int VAR_2 ;
 int FUNC_1 (struct alua_port_group*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct alua_port_group* FUNC_2 (struct scsi_device*,int,int) ;
 int FUNC_3 (struct alua_port_group*,struct scsi_device*,int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct alua_port_group*) ;
 struct alua_port_group* FUNC_9 (int ,int ) ;
 int VAR_6 ;
 int FUNC_10 (struct scsi_device*,int*) ;
 int FUNC_11 (int ,struct scsi_device*,char*,int ,...) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_16(struct scsi_device *VAR_7, struct alua_dh_data *VAR_8,
     int VAR_9)
{
 int VAR_10 = -1, VAR_11;
 struct alua_port_group *VAR_12, *VAR_13 = ((void*)0);
 bool VAR_14 = 0;
 unsigned long VAR_15;

 VAR_11 = FUNC_10(VAR_7, &VAR_10);
 if (VAR_11 < 0) {





  FUNC_11(VAR_2, VAR_7,
       "%s: No target port descriptors found\n",
       VAR_0);
  return VAR_3;
 }

 VAR_12 = FUNC_2(VAR_7, VAR_11, VAR_9);
 if (FUNC_0(VAR_12)) {
  if (FUNC_1(VAR_12) == -VAR_1)
   return VAR_4;
  return VAR_3;
 }
 if (VAR_12->device_id_len)
  FUNC_11(VAR_2, VAR_7,
       "%s: device %s port group %x rel port %x\n",
       VAR_0, VAR_12->device_id_str,
       VAR_11, VAR_10);
 else
  FUNC_11(VAR_2, VAR_7,
       "%s: port group %x rel port %x\n",
       VAR_0, VAR_11, VAR_10);


 FUNC_12(&VAR_8->pg_lock);
 VAR_13 = FUNC_9(VAR_8->pg, FUNC_7(&VAR_8->pg_lock));
 if (VAR_13 != VAR_12) {

  if (VAR_8->pg) {
   FUNC_13(&VAR_13->lock, VAR_15);
   FUNC_6(&VAR_8->node);
   FUNC_15(&VAR_13->lock, VAR_15);
  }
  FUNC_8(VAR_8->pg, VAR_12);
  VAR_14 = 1;
 }

 FUNC_13(&VAR_12->lock, VAR_15);
 if (VAR_14)
  FUNC_5(&VAR_8->node, &VAR_12->dh_list);
 FUNC_15(&VAR_12->lock, VAR_15);

 FUNC_3(FUNC_9(VAR_8->pg,
        FUNC_7(&VAR_8->pg_lock)),
   VAR_7, ((void*)0), 1);
 FUNC_14(&VAR_8->pg_lock);

 if (VAR_13)
  FUNC_4(&VAR_13->kref, VAR_6);

 return VAR_5;
}
