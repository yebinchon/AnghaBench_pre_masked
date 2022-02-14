
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int desc_size; int desc_count; scalar_t__ descs; } ;
struct vnic_cq {int to_clean; int last_color; struct vnic_dev* vdev; unsigned int index; TYPE_1__ ring; } ;
typedef struct snic_fw_req snic_fw_req ;


 int FUNC_0 (struct snic_fw_req*,int*) ;
 int FUNC_1 (struct vnic_dev*,unsigned int,struct snic_fw_req*) ;

__attribute__((used)) static inline unsigned int
FUNC_2(struct vnic_cq *VAR_0,
     int (*VAR_1)(struct vnic_dev *VAR_2,
        unsigned int VAR_3,
        struct snic_fw_req *VAR_4),
     unsigned int VAR_5)

{
 struct snic_fw_req *VAR_6;
 unsigned int VAR_7 = 0;
 u8 VAR_8;

 VAR_6 = (struct snic_fw_req *)((u8 *)VAR_0->ring.descs +
  VAR_0->ring.desc_size * VAR_0->to_clean);
 FUNC_0(VAR_6, &VAR_8);

 while (VAR_8 != VAR_0->last_color) {

  if ((*VAR_1)(VAR_0->vdev, VAR_0->index, VAR_6))
   break;

  VAR_0->to_clean++;
  if (VAR_0->to_clean == VAR_0->ring.desc_count) {
   VAR_0->to_clean = 0;
   VAR_0->last_color = VAR_0->last_color ? 0 : 1;
  }

  VAR_6 = (struct snic_fw_req *)((u8 *)VAR_0->ring.descs +
   VAR_0->ring.desc_size * VAR_0->to_clean);
  FUNC_0(VAR_6, &VAR_8);

  VAR_7++;
  if (VAR_7 >= VAR_5)
   break;
 }

 return VAR_7;
}
