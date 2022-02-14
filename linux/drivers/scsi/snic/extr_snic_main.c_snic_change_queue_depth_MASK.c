
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_qsz; int qsz_rampup; int qsz_rampdown; } ;
struct TYPE_4__ {TYPE_1__ misc; } ;
struct snic {TYPE_2__ s_stats; } ;
struct scsi_device {int queue_depth; int host; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct scsi_device*,int) ;
 struct snic* FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(struct scsi_device *VAR_2, int VAR_3)
{
 struct snic *VAR_4 = FUNC_4(VAR_2->host);
 int VAR_5 = 0;

 VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_0);
 if (VAR_5 < VAR_2->queue_depth)
  FUNC_0(&VAR_4->s_stats.misc.qsz_rampdown);
 else if (VAR_5 > VAR_2->queue_depth)
  FUNC_0(&VAR_4->s_stats.misc.qsz_rampup);

 FUNC_1(&VAR_4->s_stats.misc.last_qsz, VAR_2->queue_depth);

 FUNC_3(VAR_2, VAR_5);

 return VAR_2->queue_depth;
}
