
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; } ;


 int FUNC_0 (char**) ;
 char** VAR_0 ;
 int FUNC_1 (struct i2c_client*,unsigned char*,int ) ;
 int FUNC_2 (char*,int,char*) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_1)
{
 unsigned char VAR_2;
 int VAR_3,VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_1->addr = VAR_3;
  VAR_4 = FUNC_1(VAR_1,&VAR_2,0);
  if (VAR_4 < 0)
   continue;
  FUNC_2("i2c scan: found device @ 0x%x  [%s]\n",
    VAR_3 << 1, VAR_0[VAR_3] ? VAR_0[VAR_3] : "???");
 }
}
