
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int address; size_t channel; } ;
struct ad7746_chip_info {int vt_setup; int config; size_t capdac_set; scalar_t__** capdac; int cap_setup; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 int** VAR_11 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 struct ad7746_chip_info* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_12,
     struct iio_chan_spec const *VAR_13)
{
 struct ad7746_chip_info *VAR_14 = FUNC_1(VAR_12);
 u8 VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;

 switch (VAR_13->type) {
 case 130:
  VAR_16 = (VAR_13->address & 0xFF) | VAR_0;
  VAR_15 = VAR_14->vt_setup & ~VAR_9;
  VAR_19 = (VAR_14->config & VAR_1) >>
   VAR_2;
  VAR_18 = VAR_11[VAR_19][1];

  if (VAR_14->capdac_set != VAR_13->channel) {
   VAR_17 = FUNC_0(VAR_14->client,
    VAR_5,
    VAR_14->capdac[VAR_13->channel][0]);
   if (VAR_17 < 0)
    return VAR_17;
   VAR_17 = FUNC_0(VAR_14->client,
    VAR_6,
    VAR_14->capdac[VAR_13->channel][1]);
   if (VAR_17 < 0)
    return VAR_17;

   VAR_14->capdac_set = VAR_13->channel;
  }
  break;
 case 128:
 case 129:
  VAR_15 = (VAR_13->address & 0xFF) | VAR_9;
  VAR_16 = VAR_14->cap_setup & ~VAR_0;
  VAR_19 = (VAR_14->config & VAR_3) >>
   VAR_4;
  VAR_18 = VAR_11[VAR_19][1];
  break;
 default:
  return -VAR_10;
 }

 if (VAR_14->cap_setup != VAR_16) {
  VAR_17 = FUNC_0(VAR_14->client,
      VAR_7,
      VAR_16);
  if (VAR_17 < 0)
   return VAR_17;

  VAR_14->cap_setup = VAR_16;
 }

 if (VAR_14->vt_setup != VAR_15) {
  VAR_17 = FUNC_0(VAR_14->client,
      VAR_8,
      VAR_15);
  if (VAR_17 < 0)
   return VAR_17;

  VAR_14->vt_setup = VAR_15;
 }

 return VAR_18;
}
