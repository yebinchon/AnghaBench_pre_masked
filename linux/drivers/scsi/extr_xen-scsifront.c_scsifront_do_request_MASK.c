
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
struct vscsiif_request {size_t rqid; int nr_segments; scalar_t__ cmd_len; int timeout_per_command; int * seg; scalar_t__ sc_data_direction; int cmnd; int channel; int lun; int id; int ref_rqid; int act; } ;
struct vscsiif_front_ring {int req_prod_pvt; } ;
struct vscsifrnt_shadow {size_t rqid; int nr_segments; int * seg; int ref_rqid; int act; struct scsi_cmnd* sc; } ;
struct vscsifrnt_info {int irq; struct vscsiif_front_ring ring; struct vscsifrnt_shadow** shadow; } ;
struct scsi_cmnd {scalar_t__ cmd_len; TYPE_2__* request; scalar_t__ sc_data_direction; int cmnd; TYPE_1__* device; } ;
struct TYPE_4__ {int timeout; } ;
struct TYPE_3__ {int channel; int lun; int id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct vscsiif_front_ring*) ;
 struct vscsiif_request* FUNC_2 (struct vscsiif_front_ring*,int ) ;
 int FUNC_3 (struct vscsiif_front_ring*,int) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 size_t FUNC_6 (struct vscsifrnt_info*) ;

__attribute__((used)) static int FUNC_7(struct vscsifrnt_info *VAR_5,
    struct vscsifrnt_shadow *VAR_6)
{
 struct vscsiif_front_ring *VAR_7 = &(VAR_5->ring);
 struct vscsiif_request *VAR_8;
 struct scsi_cmnd *VAR_9 = VAR_6->sc;
 uint32_t VAR_10;
 int VAR_11, VAR_12;

 if (FUNC_1(&VAR_5->ring))
  return -VAR_0;

 VAR_10 = FUNC_6(VAR_5);
 if (VAR_10 >= VAR_3)
  return -VAR_0;

 VAR_5->shadow[VAR_10] = VAR_6;
 VAR_6->rqid = VAR_10;

 VAR_8 = FUNC_2(&(VAR_5->ring), VAR_7->req_prod_pvt);
 VAR_7->req_prod_pvt++;

 VAR_8->rqid = VAR_10;
 VAR_8->act = VAR_6->act;
 VAR_8->ref_rqid = VAR_6->ref_rqid;
 VAR_8->nr_segments = VAR_6->nr_segments;

 VAR_8->id = VAR_9->device->id;
 VAR_8->lun = VAR_9->device->lun;
 VAR_8->channel = VAR_9->device->channel;
 VAR_8->cmd_len = VAR_9->cmd_len;

 FUNC_0(VAR_9->cmd_len > VAR_2);

 FUNC_4(VAR_8->cmnd, VAR_9->cmnd, VAR_9->cmd_len);

 VAR_8->sc_data_direction = (uint8_t)VAR_9->sc_data_direction;
 VAR_8->timeout_per_command = VAR_9->request->timeout / VAR_1;

 for (VAR_11 = 0; VAR_11 < (VAR_6->nr_segments & ~VAR_4); VAR_11++)
  VAR_8->seg[VAR_11] = VAR_6->seg[VAR_11];

 FUNC_3(VAR_7, VAR_12);
 if (VAR_12)
  FUNC_5(VAR_5->irq);

 return 0;
}
