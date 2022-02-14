
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int invalid_crcs; int primseq_errs; int loss_of_signals; int loss_of_syncs; int link_failures; int dropped_frames; int error_frames; int nos_count; int lip_count; int rx_words; int rx_frames; int tx_words; int tx_frames; int secs_reset; } ;
union bfa_port_stats_u {TYPE_1__ fc; } ;
struct fc_host_statistics {int invalid_crc_count; int prim_seq_protocol_err_count; int loss_of_signal_count; int loss_of_sync_count; int link_failure_count; int dumped_frames; int error_frames; int nos_count; int lip_count; int rx_words; int rx_frames; int tx_words; int tx_frames; int seconds_since_last_reset; } ;
struct bfad_s {int bfad_lock; int bfa; struct fc_host_statistics link_stats; } ;
struct bfad_im_port_s {struct bfad_s* bfad; } ;
struct bfad_hal_comp {int comp; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
typedef scalar_t__ bfa_status_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,union bfa_port_stats_u*,int ,struct bfad_hal_comp*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (union bfa_port_stats_u*) ;
 union bfa_port_stats_u* FUNC_4 (int,int ) ;
 int FUNC_5 (struct fc_host_statistics*,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct fc_host_statistics *
FUNC_9(struct Scsi_Host *VAR_3)
{
 struct bfad_im_port_s *VAR_4 =
   (struct bfad_im_port_s *) VAR_3->hostdata[0];
 struct bfad_s *VAR_5 = VAR_4->bfad;
 struct bfad_hal_comp VAR_6;
 union bfa_port_stats_u *VAR_7;
 struct fc_host_statistics *VAR_8;
 bfa_status_t VAR_9;
 unsigned long VAR_10;

 VAR_7 = FUNC_4(sizeof(union bfa_port_stats_u), VAR_1);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_8 = &VAR_5->link_stats;
 FUNC_2(&VAR_6.comp);
 FUNC_6(&VAR_5->bfad_lock, VAR_10);
 FUNC_5(VAR_8, 0, sizeof(struct fc_host_statistics));
 VAR_9 = FUNC_1(FUNC_0(&VAR_5->bfa),
    VAR_7, VAR_2, &VAR_6);
 FUNC_7(&VAR_5->bfad_lock, VAR_10);
 if (VAR_9 != VAR_0)
  return ((void*)0);

 FUNC_8(&VAR_6.comp);


 VAR_8->seconds_since_last_reset = VAR_7->fc.secs_reset;
 VAR_8->tx_frames = VAR_7->fc.tx_frames;
 VAR_8->tx_words = VAR_7->fc.tx_words;
 VAR_8->rx_frames = VAR_7->fc.rx_frames;
 VAR_8->rx_words = VAR_7->fc.rx_words;
 VAR_8->lip_count = VAR_7->fc.lip_count;
 VAR_8->nos_count = VAR_7->fc.nos_count;
 VAR_8->error_frames = VAR_7->fc.error_frames;
 VAR_8->dumped_frames = VAR_7->fc.dropped_frames;
 VAR_8->link_failure_count = VAR_7->fc.link_failures;
 VAR_8->loss_of_sync_count = VAR_7->fc.loss_of_syncs;
 VAR_8->loss_of_signal_count = VAR_7->fc.loss_of_signals;
 VAR_8->prim_seq_protocol_err_count = VAR_7->fc.primseq_errs;
 VAR_8->invalid_crc_count = VAR_7->fc.invalid_crcs;

 FUNC_3(VAR_7);
 return VAR_8;
}
