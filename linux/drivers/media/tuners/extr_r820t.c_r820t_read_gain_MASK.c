
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r820t_priv {int dummy; } ;
typedef int data ;


 int FUNC_0 (struct r820t_priv*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct r820t_priv *VAR_0)
{
 u8 VAR_1[4];
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, 0x00, VAR_1, sizeof(VAR_1));
 if (VAR_2 < 0)
  return VAR_2;

 return ((VAR_1[3] & 0x08) << 1) + ((VAR_1[3] & 0xf0) >> 4);
}
