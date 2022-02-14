
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_subsystem {int * chps; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct channel_subsystem *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++) {
  if (!VAR_1->chps[VAR_2])
   continue;
  FUNC_0(VAR_1->chps[VAR_2]);
 }
}
