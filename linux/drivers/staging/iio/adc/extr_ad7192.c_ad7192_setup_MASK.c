
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct iio_dev {TYPE_2__* channels; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {TYPE_3__* spi; } ;
struct ad7192_state {int devid; int mode; int conf; int** scale_avail; scalar_t__ int_vref_mv; TYPE_4__ sd; int f_order; int clock_sel; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {int realbits; } ;
struct TYPE_8__ {TYPE_1__ scan_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int**) ;
 int VAR_12 ;
 int FUNC_5 (struct ad7192_state*) ;
 int FUNC_6 (TYPE_4__*,int ,int,int*) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,int ,int,int) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (unsigned long long,int) ;
 int FUNC_11 (struct device_node*,char*) ;
 struct iio_dev* FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14(struct ad7192_state *VAR_13, struct device_node *VAR_14)
{
 struct iio_dev *VAR_15 = FUNC_12(VAR_13->sd.spi);
 bool VAR_16, VAR_17;
 bool VAR_18, VAR_19, VAR_20;
 unsigned long long VAR_21;
 int VAR_22, VAR_23, VAR_24;


 VAR_23 = FUNC_7(&VAR_13->sd, 48);
 if (VAR_23 < 0)
  return VAR_23;
 FUNC_13(500, 1000);


 VAR_23 = FUNC_6(&VAR_13->sd, VAR_10, 1, &VAR_24);
 if (VAR_23)
  return VAR_23;

 VAR_24 &= VAR_5;

 if (VAR_24 != VAR_13->devid)
  FUNC_9(&VAR_13->sd.spi->dev, "device ID query failed (0x%X)\n",
    VAR_24);

 VAR_13->mode = FUNC_3(VAR_6) |
  FUNC_1(VAR_13->clock_sel) |
  FUNC_2(480);

 VAR_13->conf = FUNC_0(0);

 VAR_16 = FUNC_11(VAR_14, "adi,rejection-60-Hz-enable");
 if (VAR_16)
  VAR_13->mode |= VAR_7;

 VAR_17 = FUNC_11(VAR_14, "adi,refin2-pins-enable");
 if (VAR_17 && VAR_13->devid != VAR_12)
  VAR_13->conf |= VAR_3;

 VAR_13->conf &= ~VAR_2;
 VAR_13->f_order = VAR_8;

 VAR_18 = FUNC_11(VAR_14, "adi,buffer-enable");
 if (VAR_18)
  VAR_13->conf |= VAR_0;

 VAR_19 = FUNC_11(VAR_14, "bipolar");
 if (!VAR_19)
  VAR_13->conf |= VAR_4;

 VAR_20 = FUNC_11(VAR_14,
      "adi,burnout-currents-enable");
 if (VAR_20 && VAR_18) {
  VAR_13->conf |= VAR_1;
 } else if (VAR_20) {
  FUNC_9(&VAR_13->sd.spi->dev,
    "Can't enable burnout currents: see CHOP or buffer\n");
 }

 VAR_23 = FUNC_8(&VAR_13->sd, VAR_11, 3, VAR_13->mode);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_8(&VAR_13->sd, VAR_9, 3, VAR_13->conf);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_5(VAR_13);
 if (VAR_23)
  return VAR_23;


 for (VAR_22 = 0; VAR_22 < FUNC_4(VAR_13->scale_avail); VAR_22++) {
  VAR_21 = ((u64)VAR_13->int_vref_mv * 100000000)
   >> (VAR_15->channels[0].scan_type.realbits -
   ((VAR_13->conf & VAR_4) ? 0 : 1));
  VAR_21 >>= VAR_22;

  VAR_13->scale_avail[VAR_22][1] = FUNC_10(VAR_21, 100000000) * 10;
  VAR_13->scale_avail[VAR_22][0] = VAR_21;
 }

 return 0;
}
