
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PortAddr ;


 unsigned short FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(PortAddr VAR_0)
{
 unsigned short VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2 = ((VAR_1 >> 2) & 0x03) + 10;
 if (VAR_2 == 13)
  VAR_2 = 15;
 return VAR_2;
}
