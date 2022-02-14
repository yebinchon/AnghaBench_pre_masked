
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bs {int bits_left; } ;


 int FUNC_0 (struct bs*,int,int) ;
 int FUNC_1 (struct bs*,int) ;

__attribute__((used)) static void FUNC_2(struct bs *VAR_0)
{
 FUNC_1(VAR_0, 1);
 if (VAR_0->bits_left != 8)
  FUNC_0(VAR_0, VAR_0->bits_left, 0x00);
}
