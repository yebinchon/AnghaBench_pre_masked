
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct comedi_device*,unsigned int*,unsigned int,int) ;
 int FUNC_2 (struct comedi_device*,int,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
     unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_0 | FUNC_0(VAR_2);
 unsigned int VAR_4 = 0;
 unsigned int VAR_5;

 FUNC_2(VAR_1, VAR_3, 0x00);

 FUNC_1(VAR_1, &VAR_5, VAR_3 | (1 << 2), 0x80);
 VAR_4 |= (VAR_5 << 0);

 FUNC_1(VAR_1, &VAR_5, VAR_3 | (0 << 2), 0x00);
 VAR_4 |= (VAR_5 << 3);

 FUNC_1(VAR_1, &VAR_5, VAR_3 | (1 << 2), 0x80);
 VAR_4 |= (VAR_5 << 6);

 FUNC_1(VAR_1, &VAR_5, VAR_3 | (0 << 2), 0x00);
 VAR_4 |= (VAR_5 << 9);

 FUNC_1(VAR_1, &VAR_5, VAR_3 | (1 << 2), 0x80);
 VAR_4 |= (VAR_5 << 12);

 FUNC_1(VAR_1, &VAR_5, VAR_3 | (0 << 2), 0x00);
 VAR_4 |= (VAR_5 << 15);

 FUNC_1(VAR_1, &VAR_5, VAR_3 | (1 << 2), 0x80);
 VAR_4 |= (VAR_5 << 18);

 FUNC_1(VAR_1, &VAR_5, VAR_3 | (0 << 2), 0x00);
 VAR_4 |= (VAR_5 << 21);

 FUNC_2(VAR_1, 0x00, 0x80);

 return VAR_4;
}
