
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tx_heartbeat_errors; int tx_fifo_errors; int tx_carrier_errors; int tx_aborted_errors; scalar_t__ rx_missed_errors; int rx_fifo_errors; int rx_frame_errors; int rx_crc_errors; scalar_t__ rx_length_errors; scalar_t__ collisions; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_7__ {int rcvcco; int rntpco; int mpco; int cerr; int uflo; int lcar; int rtry; scalar_t__ mpc; int oflo; int fram; int fcs; scalar_t__ rntpc; scalar_t__ rcvcc; } ;
struct TYPE_8__ {TYPE_2__ mace_stats; } ;
typedef TYPE_3__ mace_private ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,unsigned int,int ) ;
 TYPE_3__* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_3, struct net_device *VAR_4)
{
  mace_private *VAR_5 = FUNC_1(VAR_4);

  VAR_5->mace_stats.rcvcc += FUNC_0(VAR_5, VAR_3, VAR_1);
  VAR_5->mace_stats.rntpc += FUNC_0(VAR_5, VAR_3, VAR_2);
  VAR_5->mace_stats.mpc += FUNC_0(VAR_5, VAR_3, VAR_0);







  VAR_4->stats.collisions =
    VAR_5->mace_stats.rcvcco * 256 + VAR_5->mace_stats.rcvcc;






  VAR_4->stats.rx_length_errors =
    VAR_5->mace_stats.rntpco * 256 + VAR_5->mace_stats.rntpc;

  VAR_4->stats.rx_crc_errors = VAR_5->mace_stats.fcs;
  VAR_4->stats.rx_frame_errors = VAR_5->mace_stats.fram;
  VAR_4->stats.rx_fifo_errors = VAR_5->mace_stats.oflo;
  VAR_4->stats.rx_missed_errors =
    VAR_5->mace_stats.mpco * 256 + VAR_5->mace_stats.mpc;


  VAR_4->stats.tx_aborted_errors = VAR_5->mace_stats.rtry;
  VAR_4->stats.tx_carrier_errors = VAR_5->mace_stats.lcar;

  VAR_4->stats.tx_fifo_errors = VAR_5->mace_stats.uflo;
  VAR_4->stats.tx_heartbeat_errors = VAR_5->mace_stats.cerr;

}
