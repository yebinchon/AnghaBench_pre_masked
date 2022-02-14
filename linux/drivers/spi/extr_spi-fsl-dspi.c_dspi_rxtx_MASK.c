
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct spi_message {int actual_length; } ;
struct fsl_dspi {int bytes_per_word; int len; TYPE_1__* devtype_data; int regmap; struct spi_message* cur_msg; } ;
typedef enum dspi_trans_mode { ____Placeholder_dspi_trans_mode } dspi_trans_mode ;
struct TYPE_2__ {int trans_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fsl_dspi*) ;
 int FUNC_2 (struct fsl_dspi*) ;
 int FUNC_3 (struct fsl_dspi*) ;
 int FUNC_4 (struct fsl_dspi*) ;
 int FUNC_5 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct fsl_dspi *VAR_4)
{
 struct spi_message *VAR_5 = VAR_4->cur_msg;
 enum dspi_trans_mode VAR_6;
 u16 VAR_7;
 u32 VAR_8;




 FUNC_5(VAR_4->regmap, VAR_3, &VAR_8);
 VAR_7 = FUNC_0(VAR_8);

 VAR_5->actual_length += VAR_7 * VAR_4->bytes_per_word;

 VAR_6 = VAR_4->devtype_data->trans_mode;
 if (VAR_6 == VAR_0)
  FUNC_1(VAR_4);
 else if (VAR_6 == VAR_1)
  FUNC_3(VAR_4);

 if (!VAR_4->len)

  return 0;

 if (VAR_6 == VAR_0)
  FUNC_2(VAR_4);
 else if (VAR_6 == VAR_1)
  FUNC_4(VAR_4);

 return -VAR_2;
}
