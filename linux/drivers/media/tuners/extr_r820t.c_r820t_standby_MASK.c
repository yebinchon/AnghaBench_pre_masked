
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r820t_priv {int type; int init_done; } ;


 int FUNC_0 (struct r820t_priv*,int,int) ;

__attribute__((used)) static int FUNC_1(struct r820t_priv *VAR_0)
{
 int VAR_1;


 if (!VAR_0->init_done)
  return 0;

 VAR_1 = FUNC_0(VAR_0, 0x06, 0xb1);
 if (VAR_1 < 0)
  return VAR_1;
 VAR_1 = FUNC_0(VAR_0, 0x05, 0x03);
 if (VAR_1 < 0)
  return VAR_1;
 VAR_1 = FUNC_0(VAR_0, 0x07, 0x3a);
 if (VAR_1 < 0)
  return VAR_1;
 VAR_1 = FUNC_0(VAR_0, 0x08, 0x40);
 if (VAR_1 < 0)
  return VAR_1;
 VAR_1 = FUNC_0(VAR_0, 0x09, 0xc0);
 if (VAR_1 < 0)
  return VAR_1;
 VAR_1 = FUNC_0(VAR_0, 0x0a, 0x36);
 if (VAR_1 < 0)
  return VAR_1;
 VAR_1 = FUNC_0(VAR_0, 0x0c, 0x35);
 if (VAR_1 < 0)
  return VAR_1;
 VAR_1 = FUNC_0(VAR_0, 0x0f, 0x68);
 if (VAR_1 < 0)
  return VAR_1;
 VAR_1 = FUNC_0(VAR_0, 0x11, 0x03);
 if (VAR_1 < 0)
  return VAR_1;
 VAR_1 = FUNC_0(VAR_0, 0x17, 0xf4);
 if (VAR_1 < 0)
  return VAR_1;
 VAR_1 = FUNC_0(VAR_0, 0x19, 0x0c);


 VAR_0->type = -1;

 return VAR_1;
}
