
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {int len; scalar_t__ tx_buf; scalar_t__ rx_buf; } ;
struct spi_test {int transfer_count; int fill_option; int fill_pattern; struct spi_transfer* transfers; } ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_2,
     struct spi_test *VAR_3)
{
 struct spi_transfer *VAR_4 = VAR_3->transfers;
 u8 *VAR_5;
 size_t VAR_6 = 0;
 int VAR_7, VAR_8;
 for (VAR_7 = 0; VAR_7 < VAR_3->transfer_count; VAR_7++) {

  if (VAR_4[VAR_7].rx_buf)
   FUNC_2(VAR_4[VAR_7].rx_buf, VAR_1,
          VAR_4[VAR_7].len);

  VAR_5 = (u8 *)VAR_4[VAR_7].tx_buf;
  if (!VAR_5)
   continue;

  for (VAR_8 = 0; VAR_8 < VAR_4[VAR_7].len; VAR_8++, VAR_5++, VAR_6++) {

   switch (VAR_3->fill_option) {
   case 133:
    *VAR_5 = VAR_3->fill_pattern;
    break;
   case 136:
    *VAR_5 = (VAR_3->fill_pattern >> (8 * (VAR_6 % 2)));

    break;
   case 135:
    *VAR_5 = (VAR_3->fill_pattern >> (8 * (VAR_6 % 3)));

    break;
   case 134:
    *VAR_5 = (VAR_3->fill_pattern >> (8 * (VAR_6 % 4)));

    break;
   case 137:
    *VAR_5 = VAR_6;
    break;
   case 140:
    *VAR_5 = (VAR_6 >> (8 * (VAR_6 % 2)));
    break;
   case 139:
    *VAR_5 = (VAR_6 >> (8 * (VAR_6 % 3)));
    break;
   case 138:
    *VAR_5 = (VAR_6 >> (8 * (VAR_6 % 4)));
    break;
   case 129:
    *VAR_5 = VAR_8;
    break;
   case 132:
    *VAR_5 = (VAR_8 >> (8 * (VAR_6 % 2)));
    break;
   case 131:
    *VAR_5 = (VAR_8 >> (8 * (VAR_6 % 3)));
    break;
   case 130:
    *VAR_5 = (VAR_8 >> (8 * (VAR_6 % 4)));
    break;
   case 128:
    *VAR_5 = VAR_7;
    break;
   default:
    FUNC_1(&VAR_2->dev,
     "unsupported fill_option: %i\n",
     VAR_3->fill_option);
    return -VAR_0;
   }
  }
 }

 return 0;
}
