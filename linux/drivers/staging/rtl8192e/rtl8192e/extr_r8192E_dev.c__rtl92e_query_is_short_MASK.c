
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cb_desc {scalar_t__ bUseShortPreamble; scalar_t__ bUseShortGI; } ;


 int VAR_0 ;

__attribute__((used)) static u8 FUNC_0(u8 VAR_1, u8 VAR_2, struct cb_desc *VAR_3)
{
 u8 VAR_4;

 VAR_4 = (VAR_1 == 1) ? ((VAR_3->bUseShortGI) ? 1 : 0) :
   ((VAR_3->bUseShortPreamble) ? 1 : 0);
 if (VAR_1 == 1 && VAR_2 != VAR_0)
  VAR_4 = 0;

 return VAR_4;
}
