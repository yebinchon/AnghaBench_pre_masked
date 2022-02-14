
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {unsigned int byte_len; unsigned int page_size; int flags; } ;
struct at25_data {unsigned int addrlen; int lock; TYPE_2__* spi; TYPE_1__ chip; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int,int ) ;
 unsigned int VAR_12 ;
 unsigned long VAR_13 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (int *,char const*,unsigned int) ;
 unsigned long FUNC_6 (unsigned long) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,int *,unsigned int) ;
 scalar_t__ FUNC_12 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(void *VAR_14, unsigned int VAR_15, void *VAR_16, size_t VAR_17)
{
 struct at25_data *VAR_18 = VAR_14;
 const char *VAR_19 = VAR_16;
 int VAR_20 = 0;
 unsigned VAR_21;
 u8 *VAR_22;

 if (FUNC_13(VAR_15 >= VAR_18->chip.byte_len))
  return -VAR_7;
 if ((VAR_15 + VAR_17) > VAR_18->chip.byte_len)
  VAR_17 = VAR_18->chip.byte_len - VAR_15;
 if (FUNC_13(!VAR_17))
  return -VAR_8;


 VAR_21 = VAR_18->chip.page_size;
 if (VAR_21 > VAR_12)
  VAR_21 = VAR_12;
 VAR_22 = FUNC_4(VAR_21 + VAR_18->addrlen + 1, VAR_11);
 if (!VAR_22)
  return -VAR_9;




 FUNC_8(&VAR_18->lock);
 do {
  unsigned long VAR_23, VAR_24;
  unsigned VAR_25;
  unsigned VAR_26 = (unsigned) VAR_15;
  u8 *VAR_27 = VAR_22;
  int VAR_28;
  u8 VAR_29;

  *VAR_27 = VAR_3;
  VAR_20 = FUNC_11(VAR_18->spi, VAR_27, 1);
  if (VAR_20 < 0) {
   FUNC_0(&VAR_18->spi->dev, "WREN --> %d\n", VAR_20);
   break;
  }

  VAR_29 = VAR_4;
  if (VAR_18->chip.flags & VAR_5)
   if (VAR_26 >= (1U << (VAR_18->addrlen * 8)))
    VAR_29 |= VAR_0;
  *VAR_27++ = VAR_29;


  switch (VAR_18->addrlen) {
  default:
   *VAR_27++ = VAR_26 >> 16;

  case 2:
   *VAR_27++ = VAR_26 >> 8;

  case 1:
  case 0:
   *VAR_27++ = VAR_26 >> 0;
  }


  VAR_25 = VAR_21 - (VAR_26 % VAR_21);
  if (VAR_25 > VAR_17)
   VAR_25 = VAR_17;
  FUNC_5(VAR_27, VAR_19, VAR_25);
  VAR_20 = FUNC_11(VAR_18->spi, VAR_22,
    VAR_25 + VAR_18->addrlen + 1);
  FUNC_0(&VAR_18->spi->dev, "write %u bytes at %u --> %d\n",
   VAR_25, VAR_26, VAR_20);
  if (VAR_20 < 0)
   break;






  VAR_23 = VAR_13 + FUNC_6(VAR_6);
  VAR_24 = 0;
  do {

   VAR_28 = FUNC_10(VAR_18->spi, VAR_1);
   if (VAR_28 < 0 || (VAR_28 & VAR_2)) {
    FUNC_0(&VAR_18->spi->dev,
     "rdsr --> %d (%02x)\n", VAR_28, VAR_28);

    FUNC_7(1);
    continue;
   }
   if (!(VAR_28 & VAR_2))
    break;
  } while (VAR_24++ < 3 || FUNC_12(VAR_13, VAR_23));

  if ((VAR_28 < 0) || (VAR_28 & VAR_2)) {
   FUNC_1(&VAR_18->spi->dev,
    "write %u bytes offset %u, timeout after %u msecs\n",
    VAR_25, VAR_26,
    FUNC_2(VAR_13 -
     (VAR_23 - VAR_6)));
   VAR_20 = -VAR_10;
   break;
  }

  VAR_15 += VAR_25;
  VAR_19 += VAR_25;
  VAR_17 -= VAR_25;

 } while (VAR_17 > 0);

 FUNC_9(&VAR_18->lock);

 FUNC_3(VAR_22);
 return VAR_20;
}
