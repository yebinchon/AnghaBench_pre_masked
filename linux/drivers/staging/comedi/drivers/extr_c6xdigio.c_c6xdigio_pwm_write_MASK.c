
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct comedi_device*,int,int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1,
          unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_0 | FUNC_0(VAR_2);
 unsigned int VAR_5;

 if (VAR_3 > 498)
  VAR_3 = 498;
 if (VAR_3 < 2)
  VAR_3 = 2;

 VAR_5 = (VAR_3 >> 0) & 0x03;
 FUNC_1(VAR_1, VAR_4 | VAR_5 | (0 << 2), 0x00);
 VAR_5 = (VAR_3 >> 2) & 0x03;
 FUNC_1(VAR_1, VAR_4 | VAR_5 | (1 << 2), 0x80);
 VAR_5 = (VAR_3 >> 4) & 0x03;
 FUNC_1(VAR_1, VAR_4 | VAR_5 | (0 << 2), 0x00);
 VAR_5 = (VAR_3 >> 6) & 0x03;
 FUNC_1(VAR_1, VAR_4 | VAR_5 | (1 << 2), 0x80);
 VAR_5 = (VAR_3 >> 8) & 0x03;
 FUNC_1(VAR_1, VAR_4 | VAR_5 | (0 << 2), 0x00);

 FUNC_1(VAR_1, 0x00, 0x80);
}
