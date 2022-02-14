
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct bttv {scalar_t__ i2c_rc; TYPE_1__ i2c_client; } ;


 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;

void FUNC_2(struct bttv *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1, 0, 256);
 if (0 != VAR_0->i2c_rc)
  return;
 VAR_0->i2c_client.addr = VAR_2 >> 1;
 FUNC_1(&VAR_0->i2c_client, VAR_1, 256);
}
