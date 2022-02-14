
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int t ;
struct spi_transfer {int len; char* rx_buf; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct TYPE_3__ {unsigned int byte_len; int flags; } ;
struct at25_data {int addrlen; int lock; TYPE_2__* spi; TYPE_1__ chip; } ;
typedef int ssize_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,size_t,unsigned int,int) ;
 int FUNC_1 (struct spi_transfer*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_5 (struct spi_message*) ;
 int FUNC_6 (TYPE_2__*,struct spi_message*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(void *VAR_5, unsigned int VAR_6,
   void *VAR_7, size_t VAR_8)
{
 struct at25_data *VAR_9 = VAR_5;
 char *VAR_10 = VAR_7;
 u8 VAR_11[VAR_3 + 1];
 u8 *VAR_12;
 ssize_t VAR_13;
 struct spi_transfer VAR_14[2];
 struct spi_message VAR_15;
 u8 VAR_16;

 if (FUNC_7(VAR_6 >= VAR_9->chip.byte_len))
  return -VAR_4;
 if ((VAR_6 + VAR_8) > VAR_9->chip.byte_len)
  VAR_8 = VAR_9->chip.byte_len - VAR_6;
 if (FUNC_7(!VAR_8))
  return -VAR_4;

 VAR_12 = VAR_11;

 VAR_16 = VAR_1;
 if (VAR_9->chip.flags & VAR_2)
  if (VAR_6 >= (1U << (VAR_9->addrlen * 8)))
   VAR_16 |= VAR_0;
 *VAR_12++ = VAR_16;


 switch (VAR_9->addrlen) {
 default:
  *VAR_12++ = VAR_6 >> 16;

 case 2:
  *VAR_12++ = VAR_6 >> 8;

 case 1:
 case 0:
  *VAR_12++ = VAR_6 >> 0;
 }

 FUNC_5(&VAR_15);
 FUNC_1(VAR_14, 0, sizeof(VAR_14));

 VAR_14[0].tx_buf = VAR_11;
 VAR_14[0].len = VAR_9->addrlen + 1;
 FUNC_4(&VAR_14[0], &VAR_15);

 VAR_14[1].rx_buf = VAR_10;
 VAR_14[1].len = VAR_8;
 FUNC_4(&VAR_14[1], &VAR_15);

 FUNC_2(&VAR_9->lock);







 VAR_13 = FUNC_6(VAR_9->spi, &VAR_15);
 FUNC_0(&VAR_9->spi->dev, "read %zu bytes at %d --> %zd\n",
  VAR_8, VAR_6, VAR_13);

 FUNC_3(&VAR_9->lock);
 return VAR_13;
}
