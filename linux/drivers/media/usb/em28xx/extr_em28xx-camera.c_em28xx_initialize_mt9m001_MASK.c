
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {size_t def_i2c_bus; int * i2c_client; } ;


 int FUNC_0 (unsigned char**) ;
 int FUNC_1 (int *,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct em28xx *VAR_0)
{
 int VAR_1;
 unsigned char VAR_2[][3] = {
  { 0x0d, 0x00, 0x01, },
  { 0x0d, 0x00, 0x00, },
  { 0x04, 0x05, 0x00, },
  { 0x03, 0x04, 0x00, },
  { 0x20, 0x11, 0x00, },
  { 0x06, 0x00, 0x10, },
  { 0x2b, 0x00, 0x24, },
  { 0x2e, 0x00, 0x24, },
  { 0x35, 0x00, 0x24, },
  { 0x2d, 0x00, 0x20, },
  { 0x2c, 0x00, 0x20, },
  { 0x09, 0x0a, 0xd4, },
  { 0x35, 0x00, 0x57, },
 };

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_2); VAR_1++)
  FUNC_1(&VAR_0->i2c_client[VAR_0->def_i2c_bus],
    &VAR_2[VAR_1][0], 3);



 return 0;
}
