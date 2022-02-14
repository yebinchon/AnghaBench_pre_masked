
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int lock; int (* unprepare ) (struct spi_nor*,int) ;} ;
typedef enum spi_nor_ops { ____Placeholder_spi_nor_ops } spi_nor_ops ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct spi_nor*,int) ;

__attribute__((used)) static void FUNC_2(struct spi_nor *VAR_0, enum spi_nor_ops VAR_1)
{
 if (VAR_0->unprepare)
  VAR_0->unprepare(VAR_0, VAR_1);
 FUNC_0(&VAR_0->lock);
}
