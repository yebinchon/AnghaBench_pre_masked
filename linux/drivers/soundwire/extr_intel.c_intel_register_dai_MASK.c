
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_driver {int dummy; } ;
struct sdw_cdns_streams {int num_pdi; int num_ch_bd; scalar_t__ num_bd; scalar_t__ num_out; int num_ch_out; scalar_t__ num_in; int num_ch_in; } ;
struct sdw_cdns {int dev; struct sdw_cdns_streams pdm; struct sdw_cdns_streams pcm; } ;
struct sdw_intel {struct sdw_cdns cdns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct snd_soc_dai_driver* FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (struct sdw_cdns*,struct snd_soc_dai_driver*,int ,scalar_t__,int,int ,int) ;
 int FUNC_2 (int ,int *,struct snd_soc_dai_driver*,int) ;

__attribute__((used)) static int FUNC_3(struct sdw_intel *VAR_6)
{
 struct sdw_cdns *VAR_7 = &VAR_6->cdns;
 struct sdw_cdns_streams *VAR_8;
 struct snd_soc_dai_driver *VAR_9;
 int VAR_10, VAR_11, VAR_12 = 0;


 VAR_10 = VAR_7->pcm.num_pdi + VAR_7->pdm.num_pdi;

 VAR_9 = FUNC_0(VAR_7->dev, VAR_10, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;


 VAR_8 = &VAR_7->pcm;

 VAR_11 = FUNC_1(VAR_7, VAR_9, VAR_3, VAR_7->pcm.num_in,
          VAR_12, VAR_8->num_ch_in, 1);
 if (VAR_11)
  return VAR_11;

 VAR_12 += VAR_7->pcm.num_in;
 VAR_11 = FUNC_1(VAR_7, VAR_9, VAR_4, VAR_7->pcm.num_out,
          VAR_12, VAR_8->num_ch_out, 1);
 if (VAR_11)
  return VAR_11;

 VAR_12 += VAR_7->pcm.num_out;
 VAR_11 = FUNC_1(VAR_7, VAR_9, VAR_2, VAR_7->pcm.num_bd,
          VAR_12, VAR_8->num_ch_bd, 1);
 if (VAR_11)
  return VAR_11;


 VAR_8 = &VAR_7->pdm;
 VAR_12 += VAR_7->pcm.num_bd;
 VAR_11 = FUNC_1(VAR_7, VAR_9, VAR_3, VAR_7->pdm.num_in,
          VAR_12, VAR_8->num_ch_in, 0);
 if (VAR_11)
  return VAR_11;

 VAR_12 += VAR_7->pdm.num_in;
 VAR_11 = FUNC_1(VAR_7, VAR_9, VAR_4, VAR_7->pdm.num_out,
          VAR_12, VAR_8->num_ch_out, 0);
 if (VAR_11)
  return VAR_11;

 VAR_12 += VAR_7->pdm.num_out;
 VAR_11 = FUNC_1(VAR_7, VAR_9, VAR_2, VAR_7->pdm.num_bd,
          VAR_12, VAR_8->num_ch_bd, 0);
 if (VAR_11)
  return VAR_11;

 return FUNC_2(VAR_7->dev, &VAR_5,
       VAR_9, VAR_10);
}
