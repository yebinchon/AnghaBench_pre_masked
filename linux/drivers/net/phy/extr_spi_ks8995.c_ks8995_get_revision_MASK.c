
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ks8995_switch {TYPE_2__* spi; void* revision_id; TYPE_1__* chip; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int family_id; int chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ks8995_switch*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct ks8995_switch *VAR_6)
{
 int VAR_7;
 u8 VAR_8, VAR_9, VAR_10;


 VAR_7 = FUNC_3(VAR_6, VAR_3, &VAR_8);
 if (VAR_7) {
  VAR_7 = -VAR_1;
  goto err_out;
 }


 if (VAR_8 != VAR_6->chip->family_id) {
  FUNC_0(&VAR_6->spi->dev, "chip family id mismatch: expected 0x%02x but 0x%02x read\n",
   VAR_6->chip->family_id, VAR_8);
  VAR_7 = -VAR_2;
  goto err_out;
 }

 switch (VAR_6->chip->family_id) {
 case 129:

  VAR_7 = FUNC_3(VAR_6, VAR_4, &VAR_9);
  if (VAR_7) {
   VAR_7 = -VAR_1;
   goto err_out;
  }


  if ((FUNC_1(VAR_9) == VAR_0) &&
      (FUNC_1(VAR_9) == VAR_6->chip->chip_id)) {

   VAR_6->revision_id = FUNC_2(VAR_9);
  } else if (FUNC_1(VAR_9) != VAR_0) {

   VAR_7 = FUNC_3(VAR_6, VAR_4, &VAR_10);
   if (VAR_7) {
    VAR_7 = -VAR_1;
    goto err_out;
   }

   if ((VAR_10 & 0x80) &&
       (VAR_6->chip->chip_id == VAR_5)) {
    VAR_6->revision_id = FUNC_2(VAR_9);
   }

  } else {
   FUNC_0(&VAR_6->spi->dev, "unsupported chip id for KS8995 family: 0x%02x\n",
    VAR_9);
   VAR_7 = -VAR_2;
  }
  break;
 case 128:

  VAR_7 = FUNC_3(VAR_6, VAR_4, &VAR_9);
  if (VAR_7) {
   VAR_7 = -VAR_1;
   goto err_out;
  }

  if (FUNC_1(VAR_9) == VAR_6->chip->chip_id) {
   VAR_6->revision_id = FUNC_2(VAR_9);
  } else {
   FUNC_0(&VAR_6->spi->dev, "unsupported chip id for KSZ8795 family: 0x%02x\n",
    VAR_9);
   VAR_7 = -VAR_2;
  }
  break;
 default:
  FUNC_0(&VAR_6->spi->dev, "unsupported family id: 0x%02x\n", VAR_8);
  VAR_7 = -VAR_2;
  break;
 }
err_out:
 return VAR_7;
}
