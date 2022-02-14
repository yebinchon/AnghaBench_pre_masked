
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_ext_priv {unsigned char* basicrate; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (unsigned char) ;

int FUNC_1(struct adapter *VAR_1, unsigned char VAR_2)
{
 int VAR_3;
 unsigned char VAR_4;
 struct mlme_ext_priv *VAR_5 = &VAR_1->mlmeextpriv;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = VAR_5->basicrate[VAR_3];

  if ((VAR_4 != 0xff) && (VAR_4 != 0xfe))
   if (VAR_2 == FUNC_0(VAR_4))
    return 1;
 }

 return 0;
}
