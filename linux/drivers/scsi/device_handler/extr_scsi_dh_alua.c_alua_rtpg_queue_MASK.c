
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct alua_queue_data {int entry; } ;
struct alua_port_group {int flags; int kref; int rtpg_work; int lock; struct scsi_device* rtpg_sdev; scalar_t__ interval; int rtpg_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct scsi_device*) ;
 int FUNC_7 (struct scsi_device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_10(struct alua_port_group *VAR_6,
       struct scsi_device *VAR_7,
       struct alua_queue_data *VAR_8, bool VAR_9)
{
 int VAR_10 = 0;
 unsigned long VAR_11;
 if (FUNC_0(!VAR_6) || FUNC_6(VAR_7))
  return 0;

 FUNC_8(&VAR_6->lock, VAR_11);
 if (VAR_8) {
  FUNC_3(&VAR_8->entry, &VAR_6->rtpg_list);
  VAR_6->flags |= VAR_2;
  VAR_9 = 1;
 }
 if (VAR_6->rtpg_sdev == ((void*)0)) {
  VAR_6->interval = 0;
  VAR_6->flags |= VAR_1;
  FUNC_1(&VAR_6->kref);
  VAR_6->rtpg_sdev = VAR_7;
  VAR_10 = 1;
 } else if (!(VAR_6->flags & VAR_1) && VAR_9) {
  VAR_6->flags |= VAR_1;

  if (!(VAR_6->flags & VAR_0)) {
   FUNC_1(&VAR_6->kref);
   VAR_10 = 1;
  }
 }

 FUNC_9(&VAR_6->lock, VAR_11);

 if (VAR_10) {
  if (FUNC_5(VAR_4, &VAR_6->rtpg_work,
    FUNC_4(VAR_3)))
   VAR_7 = ((void*)0);
  else
   FUNC_2(&VAR_6->kref, VAR_5);
 }
 if (VAR_7)
  FUNC_7(VAR_7);

 return 1;
}
