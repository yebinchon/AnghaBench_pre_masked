
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct vc_data {scalar_t__ vc_origin; int vc_size_row; } ;


 int VAR_0 ;
 int FUNC_0 (struct vc_data*,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_6)
{
 u_long VAR_7, VAR_8, VAR_9, VAR_10;

 if (VAR_4 < 2) {
  FUNC_2("%s\n", FUNC_1(VAR_0));
  return;
 }
 VAR_7 = VAR_6->vc_origin + (VAR_5 * VAR_6->vc_size_row);
 VAR_8 = VAR_6->vc_origin + (VAR_1 * VAR_6->vc_size_row);
 while (VAR_7 <= VAR_8) {
  VAR_9 = VAR_7 + (VAR_2 * 2);
  VAR_10 = VAR_7 + (VAR_3 * 2);
  FUNC_0(VAR_6, VAR_9, VAR_10, 1);
  VAR_7 += VAR_6->vc_size_row;
 }
}
