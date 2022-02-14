
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encx24j600_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (struct encx24j600_priv*,int ) ;

__attribute__((used)) static void FUNC_1(struct encx24j600_priv *VAR_3,
          unsigned char *VAR_4)
{
 unsigned short VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0);

 VAR_4[0] = VAR_5 & 0x00ff;
 VAR_4[1] = (VAR_5 & 0xff00) >> 8;

 VAR_5 = FUNC_0(VAR_3, VAR_1);

 VAR_4[2] = VAR_5 & 0x00ffU;
 VAR_4[3] = (VAR_5 & 0xff00U) >> 8;

 VAR_5 = FUNC_0(VAR_3, VAR_2);

 VAR_4[4] = VAR_5 & 0x00ffU;
 VAR_4[5] = (VAR_5 & 0xff00U) >> 8;
}
