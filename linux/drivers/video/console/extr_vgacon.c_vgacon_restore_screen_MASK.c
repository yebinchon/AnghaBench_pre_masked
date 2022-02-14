
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {scalar_t__ vc_origin; scalar_t__ vc_visible_origin; } ;


 int FUNC_0 (struct vc_data*,int ) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0)
{
 if (VAR_0->vc_origin != VAR_0->vc_visible_origin)
  FUNC_0(VAR_0, 0);
}
