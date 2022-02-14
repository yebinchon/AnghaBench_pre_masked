
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct odm_dm_struct {TYPE_1__* RAInfo; } ;
struct TYPE_2__ {size_t RateSGI; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct odm_dm_struct*,int ,int ,char*) ;

u8 FUNC_1(struct odm_dm_struct *VAR_3, u8 VAR_4)
{
 if ((!VAR_3) || (VAR_4 >= VAR_0))
  return 0;
 FUNC_0(VAR_3, VAR_1, VAR_2,
       ("macid =%d SGI =%d\n", VAR_4, VAR_3->RAInfo[VAR_4].RateSGI));
 return VAR_3->RAInfo[VAR_4].RateSGI;
}
