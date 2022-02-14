
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mib_counters {int rx_overrun; int rx_discard; int late_collision; int collision; int bad_crc_event; int mac_receive_error; int jabber_received; int oversize_received; int fragments_received; int undersize_received; int bad_fc_received; int good_fc_received; int fc_sent; int unrec_mac_control_received; int broadcast_frames_sent; int multicast_frames_sent; int excessive_collision; int good_frames_sent; int good_octets_sent; int frames_1024_to_max_octets; int frames_512_to_1023_octets; int frames_256_to_511_octets; int frames_128_to_255_octets; int frames_65_to_127_octets; int frames_64_octets; int multicast_frames_received; int broadcast_frames_received; int bad_frames_received; int good_frames_received; int internal_mac_transmit_err; int bad_octets_received; int good_octets_received; } ;
struct mv643xx_eth_private {int mib_counters_lock; struct mib_counters mib_counters; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mv643xx_eth_private*,int) ;
 scalar_t__ FUNC_1 (struct mv643xx_eth_private*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mv643xx_eth_private *VAR_2)
{
 struct mib_counters *VAR_3 = &VAR_2->mib_counters;

 FUNC_2(&VAR_2->mib_counters_lock);
 VAR_3->good_octets_received += FUNC_0(VAR_2, 0x00);
 VAR_3->bad_octets_received += FUNC_0(VAR_2, 0x08);
 VAR_3->internal_mac_transmit_err += FUNC_0(VAR_2, 0x0c);
 VAR_3->good_frames_received += FUNC_0(VAR_2, 0x10);
 VAR_3->bad_frames_received += FUNC_0(VAR_2, 0x14);
 VAR_3->broadcast_frames_received += FUNC_0(VAR_2, 0x18);
 VAR_3->multicast_frames_received += FUNC_0(VAR_2, 0x1c);
 VAR_3->frames_64_octets += FUNC_0(VAR_2, 0x20);
 VAR_3->frames_65_to_127_octets += FUNC_0(VAR_2, 0x24);
 VAR_3->frames_128_to_255_octets += FUNC_0(VAR_2, 0x28);
 VAR_3->frames_256_to_511_octets += FUNC_0(VAR_2, 0x2c);
 VAR_3->frames_512_to_1023_octets += FUNC_0(VAR_2, 0x30);
 VAR_3->frames_1024_to_max_octets += FUNC_0(VAR_2, 0x34);
 VAR_3->good_octets_sent += FUNC_0(VAR_2, 0x38);
 VAR_3->good_frames_sent += FUNC_0(VAR_2, 0x40);
 VAR_3->excessive_collision += FUNC_0(VAR_2, 0x44);
 VAR_3->multicast_frames_sent += FUNC_0(VAR_2, 0x48);
 VAR_3->broadcast_frames_sent += FUNC_0(VAR_2, 0x4c);
 VAR_3->unrec_mac_control_received += FUNC_0(VAR_2, 0x50);
 VAR_3->fc_sent += FUNC_0(VAR_2, 0x54);
 VAR_3->good_fc_received += FUNC_0(VAR_2, 0x58);
 VAR_3->bad_fc_received += FUNC_0(VAR_2, 0x5c);
 VAR_3->undersize_received += FUNC_0(VAR_2, 0x60);
 VAR_3->fragments_received += FUNC_0(VAR_2, 0x64);
 VAR_3->oversize_received += FUNC_0(VAR_2, 0x68);
 VAR_3->jabber_received += FUNC_0(VAR_2, 0x6c);
 VAR_3->mac_receive_error += FUNC_0(VAR_2, 0x70);
 VAR_3->bad_crc_event += FUNC_0(VAR_2, 0x74);
 VAR_3->collision += FUNC_0(VAR_2, 0x78);
 VAR_3->late_collision += FUNC_0(VAR_2, 0x7c);

 VAR_3->rx_discard += FUNC_1(VAR_2, VAR_0);
 VAR_3->rx_overrun += FUNC_1(VAR_2, VAR_1);
 FUNC_3(&VAR_2->mib_counters_lock);
}
