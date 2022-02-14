
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds_device {int byte_buf; } ;


 scalar_t__ FUNC_0 (struct ds_device*,int ,int *) ;

__attribute__((used)) static u8 FUNC_1(void *VAR_0, u8 VAR_1)
{
 struct ds_device *VAR_2 = VAR_0;

 if (FUNC_0(VAR_2, VAR_1, &VAR_2->byte_buf))
  return 0;

 return VAR_2->byte_buf;
}
