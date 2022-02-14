
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char nvmem_cell ;
struct inno_hdmi_phy {int chip_version; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct inno_hdmi_phy*,int,int) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int ,char*) ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 (unsigned char*,size_t*) ;

__attribute__((used)) static int FUNC_7(struct inno_hdmi_phy *VAR_7)
{
 struct nvmem_cell *VAR_8;
 unsigned char *VAR_9;
 size_t VAR_10;





 FUNC_2(VAR_7, 0x01, VAR_4 |
     VAR_3 |
     VAR_2);
 FUNC_2(VAR_7, 0x02, VAR_5 | VAR_1 |
     VAR_6);


 FUNC_2(VAR_7, 0x05, 0);
 FUNC_2(VAR_7, 0x07, 0);


 VAR_7->chip_version = 1;
 VAR_8 = FUNC_4(VAR_7->dev, "cpu-version");
 if (FUNC_0(VAR_8)) {
  if (FUNC_1(VAR_8) == -VAR_0)
   return -VAR_0;

  return 0;
 }

 VAR_9 = FUNC_6(VAR_8, &VAR_10);
 FUNC_5(VAR_8);

 if (FUNC_0(VAR_9))
  return 0;
 if (VAR_10 == 1)
  VAR_7->chip_version = VAR_9[0] + 1;
 FUNC_3(VAR_9);

 return 0;
}
