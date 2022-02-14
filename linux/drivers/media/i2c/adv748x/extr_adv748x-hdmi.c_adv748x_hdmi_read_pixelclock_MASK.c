
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv748x_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adv748x_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct adv748x_state *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_5 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4 < 0 || VAR_5 < 0)
  return -VAR_2;






 return ((VAR_4 << 1) | (VAR_5 >> 7)) * 1000000 + (VAR_5 & 0x7f) * 1000000 / 128;
}
