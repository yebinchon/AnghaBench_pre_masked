
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct common_obj {int set_addr; } ;
struct channel_obj {scalar_t__ channel_id; struct common_obj* common; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct channel_obj *VAR_5, int VAR_6)
{
 struct common_obj *VAR_7 = &VAR_5->common[VAR_1];

 if (VAR_0 == VAR_5->channel_id) {
  VAR_7->set_addr = VAR_4;
 } else {
  if (2 == VAR_6)
   VAR_7->set_addr = VAR_3;
  else
   VAR_7->set_addr = VAR_2;
 }
}
