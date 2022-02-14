
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amradio_device {int* buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct amradio_device*,int ,int ,int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct amradio_device *VAR_1, bool *VAR_2, u32 *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1,
   VAR_0, 0, ((void*)0), 0, 1);

 if (VAR_4)
  return VAR_4;
 *VAR_2 = VAR_1->buffer[2] >> 7;
 *VAR_3 = (VAR_1->buffer[3] & 0xf0) << 8;
 return 0;
}
