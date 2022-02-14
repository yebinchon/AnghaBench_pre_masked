
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_ext_priv {unsigned char* datarate; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,unsigned char) ;
 unsigned char FUNC_1 (unsigned char) ;

unsigned int FUNC_2(struct adapter *VAR_2, unsigned char *VAR_3)
{
 int VAR_4;
 unsigned char VAR_5;
 unsigned int VAR_6 = 0;
 struct mlme_ext_priv *VAR_7 = &VAR_2->mlmeextpriv;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = VAR_7->datarate[VAR_4];

  switch (VAR_5) {
  case 0xff:
   return VAR_6;

  case 0xfe:
   continue;

  default:
   VAR_5 = FUNC_1(VAR_5);

   if (FUNC_0(VAR_2, VAR_5) == 1)
    VAR_5 |= VAR_0;

   VAR_3[VAR_6] = VAR_5;
   VAR_6++;
   break;
  }
 }
 return VAR_6;
}
