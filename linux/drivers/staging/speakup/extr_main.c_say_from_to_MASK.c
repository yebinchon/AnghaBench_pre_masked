
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef scalar_t__ u_long ;
typedef int u_char ;
struct vc_data {int vc_size_row; } ;
struct TYPE_2__ {int mask; } ;


 char VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (struct vc_data*,int *) ;
 char FUNC_1 (struct vc_data*,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct vc_data *VAR_7, u_long VAR_8, u_long VAR_9,
         int VAR_10)
{
 int VAR_11 = 0;
 u_char VAR_12;
 u_short VAR_13 = VAR_5;

 VAR_3 = VAR_2;
 VAR_2 = FUNC_0(VAR_7, (u_short *)VAR_8);
 while (VAR_8 < VAR_9) {
  VAR_1[VAR_11++] = FUNC_1(VAR_7, (u_short *)VAR_8, &VAR_12);
  VAR_8 += 2;
  if (VAR_11 >= VAR_7->vc_size_row)
   break;
 }
 for (--VAR_11; VAR_11 >= 0; VAR_11--)
  if (VAR_1[VAR_11] != VAR_0)
   break;
 VAR_1[++VAR_11] = VAR_0;
 VAR_1[++VAR_11] = '\0';
 if (VAR_11 < 1)
  return VAR_11;
 if (VAR_10)
  VAR_5 = VAR_4[VAR_6].mask;
 FUNC_2(VAR_1, VAR_11);
 if (VAR_10)
  VAR_5 = VAR_13;
 return VAR_11 - 1;
}
