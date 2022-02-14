
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct odm_dm_struct {scalar_t__ CurrminRptTime; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct odm_dm_struct*,scalar_t__) ;
 int FUNC_1 (struct odm_dm_struct*,int ,int ,char*) ;

int FUNC_2(struct odm_dm_struct *VAR_3)
{
 u8 VAR_4 = 0;

 FUNC_1(VAR_3, VAR_1, VAR_2, ("=====>\n"));
 VAR_3->CurrminRptTime = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(VAR_3, VAR_4);

 return 0;
}
