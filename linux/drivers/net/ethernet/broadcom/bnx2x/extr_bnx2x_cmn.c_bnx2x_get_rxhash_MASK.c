
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct eth_fast_path_rx_cqe {int status_flags; int rss_hash_result; } ;
struct bnx2x {TYPE_1__* dev; } ;
typedef enum pkt_hash_types { ____Placeholder_pkt_hash_types } pkt_hash_types ;
typedef enum eth_rss_hash_type { ____Placeholder_eth_rss_hash_type } eth_rss_hash_type ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(const struct bnx2x *VAR_8,
       const struct eth_fast_path_rx_cqe *VAR_9,
       enum pkt_hash_types *VAR_10)
{

 if ((VAR_8->dev->features & VAR_2) &&
     (VAR_9->status_flags & VAR_0)) {
  enum eth_rss_hash_type VAR_11;

  VAR_11 = VAR_9->status_flags & VAR_1;
  *VAR_10 = ((VAR_11 == VAR_6) ||
    (VAR_11 == VAR_7)) ?
          VAR_4 : VAR_3;

  return FUNC_0(VAR_9->rss_hash_result);
 }
 *VAR_10 = VAR_5;
 return 0;
}
