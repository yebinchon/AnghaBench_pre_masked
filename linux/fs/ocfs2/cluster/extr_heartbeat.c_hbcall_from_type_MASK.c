
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_callback {int dummy; } ;
typedef enum o2hb_callback_type { ____Placeholder_o2hb_callback_type } o2hb_callback_type ;


 int VAR_0 ;
 struct o2hb_callback* FUNC_0 (int ) ;
 int VAR_1 ;
 struct o2hb_callback* VAR_2 ;

__attribute__((used)) static struct o2hb_callback *FUNC_1(enum o2hb_callback_type VAR_3)
{
 if (VAR_3 == VAR_1)
  return FUNC_0(-VAR_0);

 return &VAR_2[VAR_3];
}
