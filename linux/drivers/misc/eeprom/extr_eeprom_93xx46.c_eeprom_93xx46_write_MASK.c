
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eeprom_93xx46_dev {unsigned int size; int addrlen; int lock; TYPE_2__* pdata; TYPE_1__* spi; } ;
struct TYPE_4__ {int (* finish ) (struct eeprom_93xx46_dev*) ;int (* prepare ) (struct eeprom_93xx46_dev*) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct eeprom_93xx46_dev*,int) ;
 int FUNC_2 (struct eeprom_93xx46_dev*,char*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct eeprom_93xx46_dev*) ;
 int FUNC_6 (struct eeprom_93xx46_dev*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(void *VAR_1, unsigned int VAR_2,
       void *VAR_3, size_t VAR_4)
{
 struct eeprom_93xx46_dev *VAR_5 = VAR_1;
 char *VAR_6 = VAR_3;
 int VAR_7, VAR_8, VAR_9 = 1;

 if (FUNC_7(VAR_2 >= VAR_5->size))
  return -VAR_0;
 if ((VAR_2 + VAR_4) > VAR_5->size)
  VAR_4 = VAR_5->size - VAR_2;
 if (FUNC_7(!VAR_4))
  return VAR_4;


 if (VAR_5->addrlen == 6) {
  VAR_9 = 2;
  VAR_4 &= ~1;
 }


 VAR_8 = FUNC_1(VAR_5, 1);
 if (VAR_8)
  return VAR_8;

 FUNC_3(&VAR_5->lock);

 if (VAR_5->pdata->prepare)
  VAR_5->pdata->prepare(VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7 += VAR_9) {
  VAR_8 = FUNC_2(VAR_5, &VAR_6[VAR_7], VAR_2 + VAR_7);
  if (VAR_8) {
   FUNC_0(&VAR_5->spi->dev, "write failed at %d: %d\n",
    (int)VAR_2 + VAR_7, VAR_8);
   break;
  }
 }

 if (VAR_5->pdata->finish)
  VAR_5->pdata->finish(VAR_5);

 FUNC_4(&VAR_5->lock);


 FUNC_1(VAR_5, 0);
 return VAR_8;
}
