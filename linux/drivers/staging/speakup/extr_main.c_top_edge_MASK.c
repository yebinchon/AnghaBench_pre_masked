
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {scalar_t__ vc_origin; } ;


 int FUNC_0 (struct vc_data*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_4)
{
 VAR_0 |= 0x01;
 VAR_1 = VAR_4->vc_origin + 2 * VAR_2;
 VAR_3 = 0;
 FUNC_0(VAR_4);
}
