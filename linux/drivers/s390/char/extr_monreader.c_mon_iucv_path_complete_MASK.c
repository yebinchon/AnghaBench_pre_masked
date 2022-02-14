
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mon_private {int iucv_connected; } ;
struct iucv_path {struct mon_private* private; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct iucv_path *VAR_1, u8 *VAR_2)
{
 struct mon_private *VAR_3 = VAR_1->private;

 FUNC_0(&VAR_3->iucv_connected, 1);
 FUNC_1(&VAR_0);
}
