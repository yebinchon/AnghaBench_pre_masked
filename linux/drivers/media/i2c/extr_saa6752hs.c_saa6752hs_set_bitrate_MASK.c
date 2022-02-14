
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa6752hs_mpeg_params {scalar_t__ vi_bitrate_mode; int vi_bitrate; int vi_bitrate_peak; scalar_t__ au_encoding; scalar_t__ au_ac3_bitrate; scalar_t__ au_l2_bitrate; } ;
struct saa6752hs_state {struct saa6752hs_mpeg_params params; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_5,
     struct saa6752hs_state *VAR_6)
{
 struct saa6752hs_mpeg_params *VAR_7 = &VAR_6->params;
 int VAR_8;
 int VAR_9;


 FUNC_1(VAR_5, 0x71,
  VAR_7->vi_bitrate_mode != VAR_4);


 if (VAR_7->vi_bitrate_mode == VAR_4) {

  FUNC_0(VAR_5, 0x80, VAR_7->vi_bitrate);


  FUNC_0(VAR_5, 0x81, VAR_7->vi_bitrate_peak);
  VAR_8 = VAR_7->vi_bitrate_peak;
 } else {

  FUNC_0(VAR_5, 0x81, VAR_7->vi_bitrate);
  VAR_8 = VAR_7->vi_bitrate;
 }


 FUNC_1(VAR_5, 0x93,
   VAR_7->au_encoding == VAR_2);


 if (VAR_7->au_encoding == VAR_2)
  VAR_9 = VAR_1 == VAR_7->au_ac3_bitrate;
 else
  VAR_9 = VAR_3 == VAR_7->au_l2_bitrate;
 FUNC_1(VAR_5, 0x94, VAR_9);
 VAR_8 += VAR_9 ? 384 : 256;





 VAR_8 += 768;
 if (VAR_8 > VAR_0)
  VAR_8 = VAR_0;


 FUNC_0(VAR_5, 0xb1, VAR_8);
 return 0;
}
