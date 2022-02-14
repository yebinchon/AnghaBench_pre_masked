
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backref_node {scalar_t__ locked; int eb; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct backref_node *VAR_0)
{
 if (VAR_0->locked) {
  FUNC_0(VAR_0->eb);
  VAR_0->locked = 0;
 }
}
