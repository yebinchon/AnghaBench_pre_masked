
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct us_data {scalar_t__ extra; } ;
struct ms_lib_type_extdat {int dummy; } ;
struct TYPE_2__ {size_t* Log2PhyMap; } ;
struct ene_ub6250_info {TYPE_1__ MS_Lib; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct us_data*,size_t,int,int *,struct ms_lib_type_extdat*) ;

__attribute__((used)) static int FUNC_4(struct us_data *VAR_6, u16 VAR_7)
{
 unsigned char *VAR_8 = ((void*)0);
 u16 VAR_9 = VAR_5;
 u16 VAR_10, VAR_11 = 0;
 struct ms_lib_type_extdat VAR_12;
 struct ene_ub6250_info *VAR_13 = (struct ene_ub6250_info *) VAR_6->extra;

 VAR_8 = FUNC_2(VAR_1, VAR_0);
 if (VAR_8 == ((void*)0)) {
  VAR_9 = VAR_4;
  goto exit;
 }

 FUNC_3(VAR_6, VAR_7, 1, (u32 *)VAR_8, &VAR_12);
 do {
  VAR_10 = FUNC_0(VAR_8[VAR_11]);
  if (VAR_10 == VAR_3)
   break;
  if (VAR_10 == VAR_13->MS_Lib.Log2PhyMap[0]) {
   VAR_9 = VAR_2;
   break;
  }
  VAR_11++;
 } while (1);

exit:
 FUNC_1(VAR_8);
 return VAR_9;
}
