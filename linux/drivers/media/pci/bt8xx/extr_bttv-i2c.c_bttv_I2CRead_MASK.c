
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr; } ;
struct TYPE_4__ {unsigned char addr; } ;
struct bttv {scalar_t__ i2c_rc; TYPE_1__ c; TYPE_2__ i2c_client; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,char*,unsigned char) ;
 int FUNC_3 (char*,int ,unsigned char) ;

int FUNC_4(struct bttv *VAR_1, unsigned char VAR_2, char *VAR_3)
{
 unsigned char VAR_4 = 0;

 if (0 != VAR_1->i2c_rc)
  return -1;
 if (VAR_0 && ((void*)0) != VAR_3)
  FUNC_2("%d: i2c: checking for %s @ 0x%02x... ",
   VAR_1->c.nr, VAR_3, VAR_2);
 VAR_1->i2c_client.addr = VAR_2 >> 1;
 if (1 != FUNC_0(&VAR_1->i2c_client, &VAR_4, 1)) {
  if (((void*)0) != VAR_3) {
   if (VAR_0)
    FUNC_1("not found\n");
  } else
   FUNC_3("%d: i2c read 0x%x: error\n",
    VAR_1->c.nr, VAR_2);
  return -1;
 }
 if (VAR_0 && ((void*)0) != VAR_3)
  FUNC_1("found\n");
 return VAR_4;
}
