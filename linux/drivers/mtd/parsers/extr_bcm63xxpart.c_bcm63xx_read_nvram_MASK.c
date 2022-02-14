
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtd_info {int dummy; } ;
struct bcm963xx_nvram {scalar_t__ psi_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm963xx_nvram*,int *,int *) ;
 int FUNC_1 (struct mtd_info*,int ,int ,size_t*,void*) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_3,
 struct bcm963xx_nvram *VAR_4)
{
 u32 VAR_5, VAR_6;
 size_t VAR_7;
 int VAR_8;


 VAR_8 = FUNC_1(VAR_3, VAR_1, VAR_2,
   &VAR_7, (void *)VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_4, &VAR_6, &VAR_5);
 if (VAR_8)
  FUNC_2("nvram checksum failed, contents may be invalid (expected %08x, got %08x)\n",
   VAR_6, VAR_5);

 if (!VAR_4->psi_size)
  VAR_4->psi_size = VAR_0;

 return 0;
}
