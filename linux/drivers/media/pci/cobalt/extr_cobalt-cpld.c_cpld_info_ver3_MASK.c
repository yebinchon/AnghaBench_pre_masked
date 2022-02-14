
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cobalt {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct cobalt*,int) ;

__attribute__((used)) static void FUNC_2(struct cobalt *VAR_0)
{
 u32 VAR_1;
 u32 VAR_2;

 FUNC_0("CPLD System control register (read/write)\n");
 FUNC_0("\t\tSystem control:  0x%04x (0x0f00)\n",
      FUNC_1(VAR_0, 0));
 FUNC_0("CPLD Clock control register (read/write)\n");
 FUNC_0("\t\tClock control:   0x%04x (0x0000)\n",
      FUNC_1(VAR_0, 0x04));
 FUNC_0("CPLD HSMA Clk Osc register (read/write) - Must set wr trigger to load default values\n");
 FUNC_0("\t\tRegister #7:\t0x%04x (0x0022)\n",
      FUNC_1(VAR_0, 0x08));
 FUNC_0("\t\tRegister #8:\t0x%04x (0x0047)\n",
      FUNC_1(VAR_0, 0x0c));
 FUNC_0("\t\tRegister #9:\t0x%04x (0x00fa)\n",
      FUNC_1(VAR_0, 0x10));
 FUNC_0("\t\tRegister #10:\t0x%04x (0x0061)\n",
      FUNC_1(VAR_0, 0x14));
 FUNC_0("\t\tRegister #11:\t0x%04x (0x001e)\n",
      FUNC_1(VAR_0, 0x18));
 FUNC_0("\t\tRegister #12:\t0x%04x (0x0045)\n",
      FUNC_1(VAR_0, 0x1c));
 FUNC_0("\t\tRegister #135:\t0x%04x\n",
      FUNC_1(VAR_0, 0x20));
 FUNC_0("\t\tRegister #137:\t0x%04x\n",
      FUNC_1(VAR_0, 0x24));
 FUNC_0("CPLD System status register (read only)\n");
 FUNC_0("\t\tSystem status:  0x%04x\n",
      FUNC_1(VAR_0, 0x28));
 FUNC_0("CPLD MAXII info register (read only)\n");
 FUNC_0("\t\tBoard serial number:     0x%04x\n",
      FUNC_1(VAR_0, 0x2c));
 FUNC_0("\t\tMAXII program revision:  0x%04x\n",
      FUNC_1(VAR_0, 0x30));
 FUNC_0("CPLD temp and voltage ADT7411 registers (read only)\n");
 FUNC_0("\t\tBoard temperature:  %u Celsius\n",
      FUNC_1(VAR_0, 0x34) / 4);
 FUNC_0("\t\tFPGA temperature:   %u Celsius\n",
      FUNC_1(VAR_0, 0x38) / 4);
 VAR_1 = FUNC_1(VAR_0, 0x3c);
 VAR_2 = (VAR_1 * 33 * 1000) / (483 * 10);
 FUNC_0("\t\tVDD 3V3:      %u,%03uV\n", VAR_2 / 1000, VAR_2 % 1000);
 VAR_1 = FUNC_1(VAR_0, 0x40);
 VAR_2 = (VAR_1 * 74 * 2197) / (27 * 1000);
 FUNC_0("\t\tADC ch3 5V:   %u,%03uV\n", VAR_2 / 1000, VAR_2 % 1000);
 VAR_1 = FUNC_1(VAR_0, 0x44);
 VAR_2 = (VAR_1 * 74 * 2197) / (47 * 1000);
 FUNC_0("\t\tADC ch4 3V:   %u,%03uV\n", VAR_2 / 1000, VAR_2 % 1000);
 VAR_1 = FUNC_1(VAR_0, 0x48);
 VAR_2 = (VAR_1 * 57 * 2197) / (47 * 1000);
 FUNC_0("\t\tADC ch5 2V5:  %u,%03uV\n", VAR_2 / 1000, VAR_2 % 1000);
 VAR_1 = FUNC_1(VAR_0, 0x4c);
 VAR_2 = (VAR_1 * 2197) / 1000;
 FUNC_0("\t\tADC ch6 1V8:  %u,%03uV\n", VAR_2 / 1000, VAR_2 % 1000);
 VAR_1 = FUNC_1(VAR_0, 0x50);
 VAR_2 = (VAR_1 * 2197) / 1000;
 FUNC_0("\t\tADC ch7 1V5:  %u,%03uV\n", VAR_2 / 1000, VAR_2 % 1000);
 VAR_1 = FUNC_1(VAR_0, 0x54);
 VAR_2 = (VAR_1 * 2197) / 1000;
 FUNC_0("\t\tADC ch8 0V9:  %u,%03uV\n", VAR_2 / 1000, VAR_2 % 1000);
}
