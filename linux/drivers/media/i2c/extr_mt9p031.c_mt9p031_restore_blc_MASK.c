
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mt9p031 {TYPE_2__* blc_offset; TYPE_4__* blc_auto; int subdev; } ;
struct i2c_client {int dummy; } ;
struct TYPE_7__ {scalar_t__ val; } ;
struct TYPE_8__ {TYPE_3__ cur; } ;
struct TYPE_5__ {scalar_t__ val; } ;
struct TYPE_6__ {TYPE_1__ cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt9p031*,int ,int ) ;
 int FUNC_1 (struct i2c_client*,int ,scalar_t__) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mt9p031 *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(&VAR_2->subdev);
 int VAR_4;

 if (VAR_2->blc_auto->cur.val != 0) {
  VAR_4 = FUNC_0(VAR_2, 0,
     VAR_0);
  if (VAR_4 < 0)
   return VAR_4;
 }

 if (VAR_2->blc_offset->cur.val != 0) {
  VAR_4 = FUNC_1(VAR_3, VAR_1,
        VAR_2->blc_offset->cur.val);
  if (VAR_4 < 0)
   return VAR_4;
 }

 return 0;
}
