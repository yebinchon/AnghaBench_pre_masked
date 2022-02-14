
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ds_status {int dummy; } ;
struct ds_device {int spu_bit; scalar_t__ byte_buf; int spu_sleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ds_device*,scalar_t__*,int) ;
 int FUNC_1 (struct ds_device*,int,scalar_t__) ;
 int FUNC_2 (struct ds_device*,struct ds_status*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ds_device *VAR_2, u8 VAR_3)
{
 int VAR_4;
 struct ds_status VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_0 | VAR_1 | VAR_2->spu_bit, VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_2->spu_bit)
  FUNC_3(VAR_2->spu_sleep);

 VAR_4 = FUNC_2(VAR_2, &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_2->byte_buf, 1);
 if (VAR_4 < 0)
  return VAR_4;

 return !(VAR_3 == VAR_2->byte_buf);
}
