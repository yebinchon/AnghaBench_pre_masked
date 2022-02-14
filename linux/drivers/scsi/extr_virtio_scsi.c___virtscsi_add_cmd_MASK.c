
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {int dummy; } ;
struct virtio_scsi_cmd {int resp; int req; struct scsi_cmnd* sc; } ;
struct sg_table {struct scatterlist* sgl; } ;
struct TYPE_2__ {struct sg_table table; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; TYPE_1__ sdb; } ;
struct scatterlist {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scatterlist*,int *,size_t) ;
 int FUNC_3 (struct virtqueue*,struct scatterlist**,unsigned int,unsigned int,struct virtio_scsi_cmd*,int ) ;

__attribute__((used)) static int FUNC_4(struct virtqueue *VAR_4,
       struct virtio_scsi_cmd *VAR_5,
       size_t VAR_6, size_t VAR_7)
{
 struct scsi_cmnd *VAR_8 = VAR_5->sc;
 struct scatterlist *VAR_9[6], VAR_10, VAR_11;
 struct sg_table *VAR_12, *VAR_13;
 unsigned VAR_14 = 0, VAR_15 = 0;

 VAR_12 = VAR_13 = ((void*)0);

 if (VAR_8 && VAR_8->sc_data_direction != VAR_1) {
  if (VAR_8->sc_data_direction != VAR_0)
   VAR_12 = &VAR_8->sdb.table;
  if (VAR_8->sc_data_direction != VAR_2)
   VAR_13 = &VAR_8->sdb.table;
 }


 FUNC_2(&VAR_10, &VAR_5->req, VAR_6);
 VAR_9[VAR_14++] = &VAR_10;


 if (VAR_12) {

  if (FUNC_0(VAR_8))
   VAR_9[VAR_14++] = FUNC_1(VAR_8);
  VAR_9[VAR_14++] = VAR_12->sgl;
 }


 FUNC_2(&VAR_11, &VAR_5->resp, VAR_7);
 VAR_9[VAR_14 + VAR_15++] = &VAR_11;


 if (VAR_13) {

  if (FUNC_0(VAR_8))
   VAR_9[VAR_14 + VAR_15++] = FUNC_1(VAR_8);
  VAR_9[VAR_14 + VAR_15++] = VAR_13->sgl;
 }

 return FUNC_3(VAR_4, VAR_9, VAR_14, VAR_15, VAR_5, VAR_3);
}
