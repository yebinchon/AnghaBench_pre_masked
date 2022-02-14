
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv {int dummy; } ;
 int FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1(struct bttv *VAR_0, unsigned int VAR_1)
{
 static const int VAR_2[] = {
  133, 133|131, 133|129, 133|131|129,
  135, 135|131, 135|129, 135|131|129,
  132, 132|130, 132|128, 132|130|128,
  134, 134|130, 134|128, 134|130|128,
 };
 FUNC_0(VAR_2[VAR_1%16]);
}
