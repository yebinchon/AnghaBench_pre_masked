
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct vc_data {int vc_origin; int vc_size_row; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct vc_data*,int,int,int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_4, u_long VAR_5, u_long VAR_6,
        int VAR_7)
{
 u_long VAR_8 = VAR_4->vc_origin + (VAR_3 * VAR_4->vc_size_row);
 u_long VAR_9 = VAR_8 + (VAR_6 * 2);

 VAR_8 += VAR_5 * 2;
 if (FUNC_0(VAR_4, VAR_8, VAR_9, VAR_7) <= 0)
  if (VAR_1 != VAR_2)
   FUNC_2("%s\n", FUNC_1(VAR_0));
}
