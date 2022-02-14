
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2t_entry {int state; int arpq; } ;







 int FUNC_0 (int *) ;

__attribute__((used)) static char FUNC_1(const struct l2t_entry *VAR_0)
{
 switch (VAR_0->state) {
 case 128: return 'V';
 case 131: return 'S';
 case 129: return 'W';
 case 132:
  return FUNC_0(&VAR_0->arpq) ? 'R' : 'A';
 case 130: return 'X';
 default:
  return 'U';
 }
}
