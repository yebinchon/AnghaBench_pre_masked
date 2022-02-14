
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds_status {int dummy; } ;
struct ds_device {int spu_bit; int spu_sleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ds_device*,int *,int) ;
 int FUNC_1 (struct ds_device*,int,int) ;
 int FUNC_2 (struct ds_device*,int *,int) ;
 int FUNC_3 (struct ds_device*,struct ds_status*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ds_device *VAR_2, u8 *VAR_3, int VAR_4)
{
 int VAR_5;
 struct ds_status VAR_6;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_0 | VAR_1 | VAR_2->spu_bit, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_2->spu_bit)
  FUNC_4(VAR_2->spu_sleep);

 FUNC_3(VAR_2, &VAR_6);

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return !(VAR_5 == VAR_4);
}
