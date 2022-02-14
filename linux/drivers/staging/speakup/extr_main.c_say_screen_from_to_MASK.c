
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct vc_data {scalar_t__ vc_origin; scalar_t__ vc_size_row; scalar_t__ vc_rows; } ;


 int FUNC_0 (struct vc_data*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0, u_long VAR_1, u_long VAR_2)
{
 u_long VAR_3 = VAR_0->vc_origin, VAR_4;

 if (VAR_1 > 0)
  VAR_3 += VAR_1 * VAR_0->vc_size_row;
 if (VAR_2 > VAR_0->vc_rows)
  VAR_2 = VAR_0->vc_rows;
 VAR_4 = VAR_0->vc_origin + (VAR_2 * VAR_0->vc_size_row);
 for (VAR_1 = VAR_3; VAR_1 < VAR_4; VAR_1 = VAR_2) {
  VAR_2 = VAR_1 + VAR_0->vc_size_row;
  FUNC_0(VAR_0, VAR_1, VAR_2, 1);
 }
}
