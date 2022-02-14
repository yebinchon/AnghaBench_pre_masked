
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbnet*,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_1, 0);
 if (VAR_5 < 0)
  goto err;

 FUNC_1(150);
 VAR_5 = FUNC_0(VAR_3, VAR_0, 0);
 if (VAR_5 < 0)
  goto err;

 FUNC_1(150);

 VAR_5 = FUNC_0(VAR_3, VAR_4 ? VAR_2 : VAR_1,
       0);
 if (VAR_5 < 0)
  goto err;

 return 0;

err:
 return VAR_5;
}
