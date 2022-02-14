
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct gbaudio_stream_params {int sig_bits; int rate; int channels; int format; } ;
struct gbaudio_module_info {int dev; int mgmt_connection; } ;
struct gbaudio_data_connection {int* state; TYPE_1__* connection; } ;
struct gbaudio_codec_info {int dev; } ;
struct TYPE_2__ {scalar_t__ intf_cport_id; scalar_t__ hd_cport_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 struct gbaudio_stream_params* FUNC_3 (struct gbaudio_codec_info*,int,size_t) ;
 struct gbaudio_data_connection* FUNC_4 (struct gbaudio_module_info*,int) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_8 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_9(struct gbaudio_codec_info *VAR_7,
        struct gbaudio_module_info *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11 = 0;
 u16 VAR_12, VAR_13, VAR_14;
 u8 VAR_15, VAR_16;
 u32 VAR_17, VAR_18;
 struct gbaudio_data_connection *VAR_19;
 struct gbaudio_stream_params *VAR_20;


 VAR_19 = FUNC_4(VAR_8, VAR_9);
 if (!VAR_19) {
  FUNC_1(VAR_8->dev, "%d:DATA connection missing\n", VAR_9);
  return -VAR_2;
 }
 VAR_10 = VAR_19->state[VAR_6];

 VAR_20 = FUNC_3(VAR_7, VAR_9, VAR_6);
 if (!VAR_20) {
  FUNC_1(VAR_7->dev, "Failed to fetch dai_stream pointer\n");
  return -VAR_1;
 }


 if (VAR_10 < VAR_5) {
  VAR_13 = 0;
  VAR_14 = VAR_19->connection->hd_cport_id;
  VAR_11 = FUNC_5(VAR_19->connection,
      VAR_13, VAR_14,
      VAR_0);
  if (VAR_11) {
   FUNC_2(VAR_8->dev,
         "reg_cport failed:%d\n", VAR_11);
   return VAR_11;
  }
  VAR_19->state[VAR_6] =
   VAR_5;
  FUNC_0(VAR_8->dev, "Dynamic Register %d DAI\n", VAR_14);
 }


 if (VAR_10 < VAR_3) {
  VAR_17 = VAR_20->format;
  VAR_16 = VAR_20->channels;
  VAR_18 = VAR_20->rate;
  VAR_15 = VAR_20->sig_bits;
  VAR_12 = VAR_19->connection->intf_cport_id;
  VAR_11 = FUNC_7(VAR_8->mgmt_connection, VAR_12,
       VAR_17, VAR_18, VAR_16, VAR_15);
  if (VAR_11) {
   FUNC_2(VAR_8->dev, "set_pcm failed:%d\n",
         VAR_11);
   return VAR_11;
  }
  VAR_19->state[VAR_6] =
   VAR_3;
  FUNC_0(VAR_8->dev, "Dynamic hw_params %d DAI\n", VAR_12);
 }


 if (VAR_10 < VAR_4) {
  VAR_12 = VAR_19->connection->intf_cport_id;
  VAR_11 = FUNC_8(VAR_8->mgmt_connection,
         VAR_12, 192);
  if (VAR_11) {
   FUNC_2(VAR_8->dev,
         "set_tx_data_size failed:%d\n",
         VAR_11);
   return VAR_11;
  }
  VAR_11 = FUNC_6(VAR_8->mgmt_connection,
           VAR_12);
  if (VAR_11) {
   FUNC_2(VAR_8->dev,
         "activate_tx failed:%d\n", VAR_11);
   return VAR_11;
  }
  VAR_19->state[VAR_6] =
   VAR_4;
  FUNC_0(VAR_8->dev, "Dynamic prepare %d DAI\n", VAR_12);
 }

 return 0;
}
