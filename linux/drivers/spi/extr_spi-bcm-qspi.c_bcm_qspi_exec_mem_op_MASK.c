
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef int u32 ;
struct TYPE_4__ {int * in; } ;
struct TYPE_6__ {int nbytes; scalar_t__ dir; TYPE_1__ buf; } ;
struct TYPE_5__ {int nbytes; int val; } ;
struct spi_mem_op {TYPE_3__ data; TYPE_2__ addr; } ;
struct spi_mem {struct spi_device* spi; } ;
struct spi_device {int master; } ;
struct bcm_qspi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (uintptr_t,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct spi_device*,struct spi_mem_op const*) ;
 int FUNC_2 (struct bcm_qspi*,struct spi_mem_op const*,int ) ;
 int FUNC_3 (struct bcm_qspi*) ;
 int FUNC_4 (struct spi_device*,struct spi_mem_op const*) ;
 struct bcm_qspi* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct spi_mem *VAR_3,
    const struct spi_mem_op *VAR_4)
{
 struct spi_device *VAR_5 = VAR_3->spi;
 struct bcm_qspi *VAR_6 = FUNC_5(VAR_5->master);
 int VAR_7 = 0;
 bool VAR_8 = 0;
 u32 VAR_9 = 0, VAR_10;
 u_char *VAR_11;

 if (!VAR_4->data.nbytes || !VAR_4->addr.nbytes || VAR_4->addr.nbytes > 4 ||
     VAR_4->data.dir != VAR_2)
  return -VAR_1;

 VAR_11 = VAR_4->data.buf.in;
 VAR_9 = VAR_4->addr.val;
 VAR_10 = VAR_4->data.nbytes;

 if (FUNC_3(VAR_6) == 1) {






  VAR_9 = (VAR_9 + 0xc00000) & 0xffffff;

  if ((~VAR_0 & VAR_9) ^
      (~VAR_0 & (VAR_9 + VAR_10 - 1)))
   VAR_8 = 1;
 }


 if (!FUNC_0((uintptr_t)VAR_9, 4) || !FUNC_0((uintptr_t)VAR_11, 4) ||
     VAR_10 < 4)
  VAR_8 = 1;

 if (VAR_8)
  return FUNC_4(VAR_5, VAR_4);

 VAR_7 = FUNC_2(VAR_6, VAR_4, 0);

 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_5, VAR_4);

 return VAR_7;
}
