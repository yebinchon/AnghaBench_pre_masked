
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cadet {scalar_t__ io; } ;


 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct cadet *VAR_0, unsigned VAR_1)
{
 int VAR_2;
 unsigned VAR_3;

 FUNC_0(7, VAR_0->io);



 VAR_3 = 0;
 VAR_3 = (VAR_1 >> 23) & 0x02;
 VAR_3 |= 0x1c;
 FUNC_0(7, VAR_0->io);
 FUNC_0(VAR_3, VAR_0->io + 1);
 for (VAR_2 = 0; VAR_2 < 25; VAR_2++) {
  VAR_3 |= 0x01;
  FUNC_0(VAR_3, VAR_0->io + 1);
  VAR_3 &= 0xfe;
  FUNC_0(VAR_3, VAR_0->io + 1);
  VAR_1 = VAR_1 << 1;
  VAR_3 = 0x1c | ((VAR_1 >> 23) & 0x02);
  FUNC_0(VAR_3, VAR_0->io + 1);
 }
}
