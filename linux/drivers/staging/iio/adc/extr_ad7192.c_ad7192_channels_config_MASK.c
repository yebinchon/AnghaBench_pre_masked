
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct iio_dev {int num_channels; struct iio_chan_spec* channels; TYPE_1__ dev; } ;
struct iio_chan_spec {scalar_t__ type; int info_mask_shared_by_type_available; int info_mask_shared_by_all; } ;
struct ad7192_state {int devid; } ;


 void* FUNC_0 (struct iio_chan_spec*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct iio_chan_spec* VAR_5 ;
 struct iio_chan_spec* VAR_6 ;
 struct iio_chan_spec* FUNC_2 (int ,int,int,int ) ;
 struct ad7192_state* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_7)
{
 struct ad7192_state *VAR_8 = FUNC_3(VAR_7);
 const struct iio_chan_spec *VAR_9;
 struct iio_chan_spec *VAR_10;
 int VAR_11;

 switch (VAR_8->devid) {
 case 128:
  VAR_9 = VAR_6;
  VAR_7->num_channels = FUNC_0(VAR_6);
  break;
 default:
  VAR_9 = VAR_5;
  VAR_7->num_channels = FUNC_0(VAR_5);
  break;
 }

 VAR_10 = FUNC_2(VAR_7->dev.parent, VAR_7->num_channels,
       sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_7->channels = VAR_10;

 for (VAR_11 = 0; VAR_11 < VAR_7->num_channels; VAR_11++) {
  *VAR_10 = VAR_9[VAR_11];
  VAR_10->info_mask_shared_by_all |=
   FUNC_1(VAR_2);
  if (VAR_10->type != VAR_4)
   VAR_10->info_mask_shared_by_type_available |=
    FUNC_1(VAR_3);
  VAR_10++;
 }

 return 0;
}
