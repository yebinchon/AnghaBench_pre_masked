
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int dummy; } ;
struct c8sectpfei {int fw_loaded; scalar_t__ io; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct c8sectpfei*,struct firmware const*) ;
 int FUNC_2 (struct c8sectpfei*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct firmware const*,struct c8sectpfei*) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,int ,int ) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct c8sectpfei *VAR_3)
{
 const struct firmware *VAR_4;
 int VAR_5;

 FUNC_4(VAR_3->dev, "Loading firmware: %s\n", VAR_2);

 VAR_5 = FUNC_7(&VAR_4, VAR_2, VAR_3->dev);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_3->dev, "c8sectpfe_elf_sanity_check failed err=(%d)\n"
   , VAR_5);
  FUNC_6(VAR_4);
  return VAR_5;
 }

 VAR_5 = FUNC_5(VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_3(VAR_3->dev, "load_slim_core_fw failed err=(%d)\n", VAR_5);
  return VAR_5;
 }


 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5) {
  FUNC_3(VAR_3->dev, "configure_channels failed err=(%d)\n", VAR_5);
  return VAR_5;
 }





 FUNC_8(0x1, VAR_3->io + VAR_1);

 FUNC_4(VAR_3->dev, "Boot the memdma SLIM core\n");
 FUNC_8(0x1, VAR_3->io + VAR_0);

 FUNC_0(&VAR_3->fw_loaded, 1);

 return 0;
}
