
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int name; } ;
struct dsaf_device {TYPE_1__ ae_dev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dsaf_device*) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct dsaf_device*,int,int ) ;
 int FUNC_3 (struct dsaf_device*,int,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dsaf_device *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;


 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++) {
  VAR_7 = VAR_2 + 0x80 * VAR_6;
  FUNC_3(VAR_4, VAR_7, VAR_1, 0);
 }

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++) {
  VAR_7 = VAR_2 + 0x80 * VAR_6;
  FUNC_3(VAR_4, VAR_7, VAR_1, 1);
 }


 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++) {
  VAR_8 = 0;
  VAR_7 = VAR_2 + 0x80 * VAR_6;
  do {
   FUNC_4(1);
   VAR_5 = FUNC_2(
     VAR_4, VAR_7, VAR_1);
   VAR_8++;
  } while (VAR_5 == 0 &&
   VAR_8 < VAR_0);

  if (VAR_5 == 0) {
   FUNC_1(VAR_4->dev,
    "sbm_cfg_mib_en fail,%s,sbm_num=%d\n",
    VAR_4->ae_dev.name, VAR_6);
   return -VAR_3;
  }
 }

 return 0;
}
