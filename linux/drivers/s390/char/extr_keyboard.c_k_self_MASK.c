
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbd_data {int port; scalar_t__ diacr; } ;


 unsigned char FUNC_0 (struct kbd_data*,unsigned char) ;
 int FUNC_1 (int ,unsigned char) ;

__attribute__((used)) static void
FUNC_2(struct kbd_data *VAR_0, unsigned char VAR_1)
{
 if (VAR_0->diacr)
  VAR_1 = FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0->port, VAR_1);
}
