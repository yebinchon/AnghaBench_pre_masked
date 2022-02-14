
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl8xxxu_priv {TYPE_1__* fops; } ;
struct TYPE_2__ {int total_page_num; } ;


 int FUNC_0 (struct rtl8xxxu_priv*,int,int) ;

int FUNC_1(struct rtl8xxxu_priv *VAR_0)
{
 int VAR_1;
 int VAR_2;
 u8 VAR_3;

 VAR_3 = VAR_0->fops->total_page_num;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_1 = FUNC_0(VAR_0, VAR_2, VAR_2 + 1);
  if (VAR_1)
   goto exit;
 }

 VAR_1 = FUNC_0(VAR_0, VAR_3, 0xff);
 if (VAR_1)
  goto exit;


 for (VAR_2 = VAR_3 + 1; VAR_2 < 0xff; VAR_2++) {
  VAR_1 = FUNC_0(VAR_0, VAR_2, (VAR_2 + 1));
  if (VAR_1)
   goto exit;
 }


 VAR_1 = FUNC_0(VAR_0, 0xff, VAR_3 + 1);
 if (VAR_1)
  goto exit;

exit:
 return VAR_1;
}
