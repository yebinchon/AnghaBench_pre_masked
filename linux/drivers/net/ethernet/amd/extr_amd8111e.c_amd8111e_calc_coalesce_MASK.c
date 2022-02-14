
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct amd8111e_coalesce_conf {int tx_packets; int tx_prev_packets; int tx_bytes; int tx_prev_bytes; int rx_packets; int rx_prev_packets; int rx_bytes; int rx_prev_bytes; scalar_t__ rx_coal_type; int rx_timeout; int rx_event_count; scalar_t__ tx_coal_type; int tx_timeout; int tx_event_count; } ;
struct amd8111e_priv {struct amd8111e_coalesce_conf coal_conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct amd8111e_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6)
{
 struct amd8111e_priv *VAR_7 = FUNC_1(VAR_6);
 struct amd8111e_coalesce_conf *VAR_8 = &VAR_7->coal_conf;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_9 = VAR_8->tx_packets - VAR_8->tx_prev_packets;
 VAR_8->tx_prev_packets = VAR_8->tx_packets;

 VAR_11 = VAR_8->tx_bytes - VAR_8->tx_prev_bytes;
 VAR_8->tx_prev_bytes = VAR_8->tx_bytes;

 VAR_10 = VAR_8->rx_packets - VAR_8->rx_prev_packets;
 VAR_8->rx_prev_packets = VAR_8->rx_packets;

 VAR_12 = VAR_8->rx_bytes - VAR_8->rx_prev_bytes;
 VAR_8->rx_prev_bytes = VAR_8->rx_bytes;

 if(VAR_10 < 800){
  if(VAR_8->rx_coal_type != VAR_3){

   VAR_8->rx_timeout = 0x0;
   VAR_8->rx_event_count = 0;
   FUNC_0(VAR_6,VAR_4);
   VAR_8->rx_coal_type = VAR_3;
  }
 }
 else{

  VAR_13 = VAR_12/VAR_10;
  if (VAR_13 < 128){
   if(VAR_8->rx_coal_type != VAR_3){

    VAR_8->rx_timeout = 0;
    VAR_8->rx_event_count = 0;
    FUNC_0(VAR_6,VAR_4);
    VAR_8->rx_coal_type = VAR_3;
   }

  }
  else if ( (VAR_13 >= 128) && (VAR_13 < 512) ){

   if(VAR_8->rx_coal_type != VAR_1){
    VAR_8->rx_timeout = 1;
    VAR_8->rx_event_count = 4;
    FUNC_0(VAR_6,VAR_4);
    VAR_8->rx_coal_type = VAR_1;
   }
  }
  else if ((VAR_13 >= 512) && (VAR_13 < 1024)){

   if(VAR_8->rx_coal_type != VAR_2){
    VAR_8->rx_timeout = 1;
    VAR_8->rx_event_count = 4;
    FUNC_0(VAR_6,VAR_4);
    VAR_8->rx_coal_type = VAR_2;
   }

  }
  else if(VAR_13 >= 1024){
   if(VAR_8->rx_coal_type != VAR_0){
    VAR_8->rx_timeout = 2;
    VAR_8->rx_event_count = 3;
    FUNC_0(VAR_6,VAR_4);
    VAR_8->rx_coal_type = VAR_0;
   }
  }
 }

 if(VAR_9 < 800){
  if(VAR_8->tx_coal_type != VAR_3){

   VAR_8->tx_timeout = 0x0;
   VAR_8->tx_event_count = 0;
   FUNC_0(VAR_6,VAR_5);
   VAR_8->tx_coal_type = VAR_3;
  }
 }
 else{

  VAR_14 = VAR_11/VAR_9;
  if (VAR_14 < 128){

   if(VAR_8->tx_coal_type != VAR_3){

    VAR_8->tx_timeout = 0;
    VAR_8->tx_event_count = 0;
    FUNC_0(VAR_6,VAR_5);
    VAR_8->tx_coal_type = VAR_3;
   }

  }
  else if ( (VAR_14 >= 128) && (VAR_14 < 512) ){

   if(VAR_8->tx_coal_type != VAR_1){
    VAR_8->tx_timeout = 1;
    VAR_8->tx_event_count = 2;
    FUNC_0(VAR_6,VAR_5);
    VAR_8->tx_coal_type = VAR_1;

   }
  }
  else if ((VAR_14 >= 512) && (VAR_14 < 1024)){

   if(VAR_8->tx_coal_type != VAR_2){
    VAR_8->tx_timeout = 2;
    VAR_8->tx_event_count = 5;
    FUNC_0(VAR_6,VAR_5);
    VAR_8->tx_coal_type = VAR_2;
   }
  } else if (VAR_14 >= 1024) {
   if (VAR_8->tx_coal_type != VAR_0) {
    VAR_8->tx_timeout = 4;
    VAR_8->tx_event_count = 8;
    FUNC_0(VAR_6, VAR_5);
    VAR_8->tx_coal_type = VAR_0;
   }
  }
 }
 return 0;

}
