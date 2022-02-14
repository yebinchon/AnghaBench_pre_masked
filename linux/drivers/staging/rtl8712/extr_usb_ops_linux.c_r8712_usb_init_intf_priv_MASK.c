
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct intf_priv {int io_retevt_comp; int piorw_urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

uint FUNC_2(struct intf_priv *VAR_3)
{
 VAR_3->piorw_urb = FUNC_1(0, VAR_0);
 if (!VAR_3->piorw_urb)
  return VAR_1;
 FUNC_0(&VAR_3->io_retevt_comp);
 return VAR_2;
}
