
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_priv {int dummy; } ;
struct _adapter {struct sta_priv stapriv; } ;


 int FUNC_0 (struct sta_priv*,unsigned char*) ;

void FUNC_1(struct _adapter *VAR_0)
{
 unsigned char VAR_1[6] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
 struct sta_priv *VAR_2 = &VAR_0->stapriv;

 FUNC_0(VAR_2, VAR_1);
}
