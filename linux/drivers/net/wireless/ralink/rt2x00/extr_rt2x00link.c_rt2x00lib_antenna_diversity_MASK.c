
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link_ant {int flags; } ;
struct TYPE_2__ {int count; struct link_ant ant; } ;
struct rt2x00_dev {TYPE_1__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*) ;

__attribute__((used)) static bool FUNC_2(struct rt2x00_dev *VAR_3)
{
 struct link_ant *VAR_4 = &VAR_3->link.ant;





 if (!(VAR_4->flags & VAR_1) &&
     !(VAR_4->flags & VAR_2)) {
  VAR_4->flags = 0;
  return 1;
 }







 if (VAR_4->flags & VAR_0) {
  FUNC_1(VAR_3);
  return 1;
 } else if (VAR_3->link.count & 1) {
  FUNC_0(VAR_3);
  return 1;
 }

 return 0;
}
