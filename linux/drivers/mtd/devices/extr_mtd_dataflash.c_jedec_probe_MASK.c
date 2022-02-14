
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct spi_device {int dev; } ;
struct flash_info {int dummy; } ;
typedef int jedec ;
typedef int __be64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct flash_info* FUNC_0 (int) ;
 int FUNC_1 (struct flash_info*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int) ;
 struct flash_info* FUNC_5 (struct spi_device*,int,int) ;
 int FUNC_6 (struct spi_device*,scalar_t__*,int,scalar_t__*,unsigned int const) ;

__attribute__((used)) static struct flash_info *FUNC_7(struct spi_device *VAR_5)
{
 int VAR_6;
 u8 VAR_7 = VAR_4;
 u64 VAR_8;
 u8 VAR_9[sizeof(VAR_8)] = {0};
 const unsigned int VAR_10 = 5;
 struct flash_info *VAR_11;
 VAR_6 = FUNC_6(VAR_5, &VAR_7, 1, VAR_9, VAR_10);
 if (VAR_6 < 0) {
  FUNC_3(&VAR_5->dev, "error %d reading JEDEC ID\n", VAR_6);
  return FUNC_0(VAR_6);
 }

 if (VAR_9[0] != VAR_0)
  return ((void*)0);

 VAR_8 = FUNC_2((__be64 *)VAR_9);





 VAR_11 = FUNC_5(VAR_5, VAR_8 >> VAR_1, 1);
 if (!FUNC_1(VAR_11))
  return VAR_11;




 VAR_11 = FUNC_5(VAR_5, VAR_8 >> VAR_2, 0);
 if (!FUNC_1(VAR_11))
  return VAR_11;





 FUNC_4(&VAR_5->dev, "JEDEC id %016llx not handled\n", VAR_8);
 return FUNC_0(-VAR_3);
}
