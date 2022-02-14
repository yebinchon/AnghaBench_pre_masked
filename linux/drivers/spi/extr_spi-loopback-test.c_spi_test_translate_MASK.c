
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,size_t,void*,int) ;
 void* FUNC_1 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,void*,void*,void*,void*,void*,void*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_4,
         void **VAR_5, size_t VAR_6,
         void *VAR_7, void *VAR_8)
{
 size_t VAR_9;


 if (!*VAR_5)
  return 0;


 if (((size_t)*VAR_5) & VAR_2)

  *VAR_5 += (VAR_3 / 2) -
   VAR_2;




 if (FUNC_0(*VAR_5, VAR_6, FUNC_1(0), VAR_3)) {
  VAR_9 = *VAR_5 - FUNC_1(0);
  *VAR_5 = VAR_8 + VAR_9;

  return 0;
 }


 if (FUNC_0(*VAR_5, VAR_6, FUNC_2(0), VAR_3)) {
  VAR_9 = *VAR_5 - FUNC_2(0);
  *VAR_5 = VAR_7 + VAR_9;

  return 0;
 }

 FUNC_3(&VAR_4->dev,
  "PointerRange [%pK:%pK[ not in range [%pK:%pK[ or [%pK:%pK[\n",
  *VAR_5, *VAR_5 + VAR_6,
  FUNC_1(0), FUNC_1(VAR_1),
  FUNC_2(0), FUNC_2(VAR_1));

 return -VAR_0;
}
