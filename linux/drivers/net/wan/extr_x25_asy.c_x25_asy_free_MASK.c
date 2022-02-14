
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_asy {int dev; int flags; int * xbuff; int * rbuff; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct x25_asy *VAR_1)
{

 FUNC_0(VAR_1->rbuff);
 VAR_1->rbuff = ((void*)0);
 FUNC_0(VAR_1->xbuff);
 VAR_1->xbuff = ((void*)0);

 if (!FUNC_2(VAR_0, &VAR_1->flags))
  FUNC_1(VAR_1->dev, "x25_asy_free for already free unit\n");
}
