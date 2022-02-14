
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cmg_chars {scalar_t__* values; } ;
struct TYPE_2__ {scalar_t__* values; } ;
struct channel_path {TYPE_1__ cmg_chars; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct channel_path *VAR_1, u8 VAR_2,
     struct cmg_chars *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = 0x80 >> (VAR_4 + 3);
  if (VAR_2 & VAR_5)
   VAR_1->cmg_chars.values[VAR_4] = VAR_3->values[VAR_4];
  else
   VAR_1->cmg_chars.values[VAR_4] = 0;
 }
}
