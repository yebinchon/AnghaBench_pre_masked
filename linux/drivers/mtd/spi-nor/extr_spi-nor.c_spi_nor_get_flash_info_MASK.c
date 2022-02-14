
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int dev; } ;
struct flash_info {int name; scalar_t__ id_len; } ;


 int VAR_0 ;
 struct flash_info const* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct flash_info const*) ;
 scalar_t__ FUNC_2 (struct flash_info const*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 struct flash_info* FUNC_4 (char const*) ;
 struct flash_info* FUNC_5 (struct spi_nor*) ;

__attribute__((used)) static const struct flash_info *FUNC_6(struct spi_nor *VAR_1,
             const char *VAR_2)
{
 const struct flash_info *VAR_3 = ((void*)0);

 if (VAR_2)
  VAR_3 = FUNC_4(VAR_2);

 if (!VAR_3)
  VAR_3 = FUNC_5(VAR_1);
 if (FUNC_2(VAR_3))
  return FUNC_0(-VAR_0);





 if (VAR_2 && VAR_3->id_len) {
  const struct flash_info *VAR_4;

  VAR_4 = FUNC_5(VAR_1);
  if (FUNC_1(VAR_4)) {
   return VAR_4;
  } else if (VAR_4 != VAR_3) {







   FUNC_3(VAR_1->dev, "found %s, expected %s\n",
     VAR_4->name, VAR_3->name);
   VAR_3 = VAR_4;
  }
 }

 return VAR_3;
}
