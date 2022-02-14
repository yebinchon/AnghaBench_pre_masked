
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct aac_dev {int dummy; } ;
struct TYPE_2__ {int OMR; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct aac_dev*,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct aac_dev *VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_5, VAR_3.OMR);




 if (FUNC_1(VAR_6 & VAR_0))
  goto err_blink;




 if (FUNC_1(VAR_6 & VAR_4))
  goto err_out;




 if (FUNC_1(VAR_6 & VAR_2))
  goto err_out;




 if (FUNC_1(!(VAR_6 & VAR_1)))
  return -3;



 return 0;

err_out:
 return -1;

err_blink:
 return (VAR_6 >> 16) & 0xFF;
}
