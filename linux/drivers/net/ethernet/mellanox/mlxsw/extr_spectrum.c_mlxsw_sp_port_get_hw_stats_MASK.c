
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {scalar_t__ rx_length_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_errors; int multicast; int rx_bytes; int tx_bytes; int rx_packets; int tx_packets; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (struct net_device*,int ,int ,char*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_2,
          struct rtnl_link_stats64 *VAR_3)
{
 char VAR_4[VAR_1];
 int VAR_5;

 VAR_5 = FUNC_10(VAR_2, VAR_0,
       0, VAR_4);
 if (VAR_5)
  goto out;

 VAR_3->tx_packets =
  FUNC_4(VAR_4);
 VAR_3->rx_packets =
  FUNC_3(VAR_4);
 VAR_3->tx_bytes =
  FUNC_8(VAR_4);
 VAR_3->rx_bytes =
  FUNC_7(VAR_4);
 VAR_3->multicast =
  FUNC_6(VAR_4);

 VAR_3->rx_crc_errors =
  FUNC_1(VAR_4);
 VAR_3->rx_frame_errors =
  FUNC_0(VAR_4);

 VAR_3->rx_length_errors = (
  FUNC_5(VAR_4) +
  FUNC_9(VAR_4) +
  FUNC_2(VAR_4));

 VAR_3->rx_errors = (VAR_3->rx_crc_errors +
  VAR_3->rx_frame_errors + VAR_3->rx_length_errors);

out:
 return VAR_5;
}
