
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef scalar_t__ u_long ;
typedef int u_char ;
struct vc_data {int vc_cols; } ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (struct vc_data*,int *) ;
 scalar_t__ FUNC_1 (struct vc_data*,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct vc_data *VAR_6)
{
 u_long VAR_7 = VAR_4 - (VAR_5 * 2);
 int VAR_8 = 0;
 u_char VAR_9;

 VAR_3 = VAR_2;
 VAR_2 = FUNC_0(VAR_6, (u_short *)VAR_4);
 for (VAR_8 = 0; VAR_8 < VAR_6->vc_cols; VAR_8++) {
  VAR_1[VAR_8] = FUNC_1(VAR_6, (u_short *)VAR_7, &VAR_9);
  VAR_7 += 2;
 }
 for (--VAR_8; VAR_8 >= 0; VAR_8--)
  if (VAR_1[VAR_8] != VAR_0)
   break;
 return ++VAR_8;
}
