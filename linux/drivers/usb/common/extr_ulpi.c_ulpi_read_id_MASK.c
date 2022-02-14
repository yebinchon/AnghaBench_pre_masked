
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vendor; int product; } ;
struct ulpi {int dev; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct ulpi*,int ) ;
 int FUNC_3 (struct ulpi*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ulpi *VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_3(VAR_5, VAR_2, 0xaa);
 if (VAR_6 < 0)
  goto err;

 VAR_6 = FUNC_2(VAR_5, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_6 != 0xaa)
  goto err;

 VAR_5->id.vendor = FUNC_2(VAR_5, VAR_4);
 VAR_5->id.vendor |= FUNC_2(VAR_5, VAR_3) << 8;

 VAR_5->id.product = FUNC_2(VAR_5, VAR_1);
 VAR_5->id.product |= FUNC_2(VAR_5, VAR_0) << 8;


 if (VAR_5->id.vendor == 0)
  goto err;

 FUNC_1("ulpi:v%04xp%04x", VAR_5->id.vendor, VAR_5->id.product);
 return 0;
err:
 FUNC_0(&VAR_5->dev);
 return 0;
}
