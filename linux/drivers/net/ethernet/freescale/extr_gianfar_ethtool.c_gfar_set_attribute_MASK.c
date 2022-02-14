
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct filer_table {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;





 int VAR_4 ;
 int FUNC_0 (int,int,int,struct filer_table*) ;

__attribute__((used)) static void FUNC_1(u32 VAR_5, u32 VAR_6, u32 VAR_7,
          struct filer_table *VAR_8)
{
 switch (VAR_7) {

 case 133:
  if (!(VAR_5 | VAR_6))
   return;
  VAR_6 |= VAR_3;
  break;

 case 134:
 case 129:
  if (!~(VAR_6 | VAR_0))
   return;
  if (!VAR_6)
   VAR_6 = ~0;
  else
   VAR_6 |= VAR_0;
  break;

 case 128:
  if (!(VAR_5 | VAR_6))
   return;
  VAR_6 |= VAR_4;
  break;

 case 136:
 case 130:
 case 135:
  if (!~(VAR_6 | VAR_2))
   return;
  if (!VAR_6)
   VAR_6 = ~0;
  else
   VAR_6 |= VAR_2;
  break;

 case 138:
 case 137:
 case 132:
 case 131:
  if (!(VAR_5 | VAR_6))
   return;
  VAR_6 |= VAR_1;
  break;

 default:
  if (!~VAR_6)
   return;
  if (!VAR_6)
   VAR_6 = ~0;
  break;
 }
 FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);
}
