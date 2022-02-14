
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {int dev; } ;
typedef int buf ;
struct TYPE_2__ {int nvec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,unsigned char) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_2(struct serio *VAR_4, unsigned char VAR_5)
{
 unsigned char VAR_6[] = { VAR_1, VAR_2, VAR_0, 1 };

 VAR_6[2] = VAR_5 & 0xff;

 FUNC_0(&VAR_4->dev, "Sending ps2 cmd %02x\n", VAR_5);
 return FUNC_1(VAR_3.nvec, VAR_6, sizeof(VAR_6));
}
