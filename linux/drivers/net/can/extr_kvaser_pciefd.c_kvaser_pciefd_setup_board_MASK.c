
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct kvaser_pciefd {int nr_channels; int freq; int freq_to_ticks_div; scalar_t__ reg_base; void* bus_freq; TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int *,char*,...) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct kvaser_pciefd*) ;

__attribute__((used)) static int FUNC_5(struct kvaser_pciefd *VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15;
 u8 VAR_16;
 int VAR_17;

 VAR_17 = FUNC_4(VAR_12);
 if (VAR_17)
  return VAR_17;

 VAR_13 = FUNC_2(VAR_12->reg_base + VAR_11);
 VAR_16 = (VAR_13 >> VAR_10) & 0xff;
 if (VAR_12->nr_channels != VAR_16) {
  FUNC_1(&VAR_12->pci->dev,
   "Number of channels does not match: %u vs %u\n",
   VAR_12->nr_channels,
   VAR_16);
  return -VAR_0;
 }

 if (VAR_12->nr_channels > VAR_2)
  VAR_12->nr_channels = VAR_2;

 VAR_15 = FUNC_2(VAR_12->reg_base + VAR_5);
 FUNC_0(&VAR_12->pci->dev, "Version %u.%u.%u\n",
  (VAR_13 >> VAR_9) & 0xff,
  VAR_13 & 0xff,
  (VAR_15 >> VAR_6) & 0x7fff);

 VAR_14 = FUNC_2(VAR_12->reg_base + VAR_4);
 if (!(VAR_14 & VAR_3)) {
  FUNC_1(&VAR_12->pci->dev,
   "Hardware without DMA is not supported\n");
  return -VAR_0;
 }

 VAR_12->bus_freq = FUNC_2(VAR_12->reg_base +
      VAR_7);
 VAR_12->freq = FUNC_2(VAR_12->reg_base + VAR_8);
 VAR_12->freq_to_ticks_div = VAR_12->freq / 1000000;
 if (VAR_12->freq_to_ticks_div == 0)
  VAR_12->freq_to_ticks_div = 1;


 FUNC_3(0, VAR_12->reg_base + VAR_1);
 return VAR_17;
}
