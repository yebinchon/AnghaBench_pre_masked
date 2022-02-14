
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef enum ps3av_mode_num { ____Placeholder_ps3av_mode_num } ps3av_mode_num ;
struct TYPE_3__ {int mask; int id; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static enum ps3av_mode_num FUNC_2(u32 VAR_7, u32 VAR_8,
        u32 VAR_9)
{
 unsigned int VAR_10;
 u32 VAR_11;





 FUNC_1(VAR_0 << VAR_3 &
       VAR_1 << VAR_4);
 FUNC_1(VAR_0 << VAR_3 &
       VAR_2 << VAR_5);
 FUNC_1(VAR_1 << VAR_4 &
       VAR_2 << VAR_5);
 VAR_11 = (VAR_7 & VAR_0) << VAR_3 |
    (VAR_8 & VAR_1) << VAR_4 |
    (VAR_9 & VAR_2) << VAR_5;

 if (!VAR_11)
  return 0;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6); VAR_10++)
  if (VAR_11 & VAR_6[VAR_10].mask)
   return VAR_6[VAR_10].id;

 return 0;
}
