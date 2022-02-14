
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds_device {int byte_buf; } ;


 int FUNC_0 (struct ds_device*,int *) ;

__attribute__((used)) static u8 FUNC_1(void *VAR_0)
{
 struct ds_device *VAR_1 = VAR_0;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, &VAR_1->byte_buf);
 if (VAR_2)
  return 0;

 return VAR_1->byte_buf;
}
