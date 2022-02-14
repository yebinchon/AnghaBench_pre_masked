
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline const char *FUNC_1(u16 VAR_0)
{
 u8 VAR_1 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 133:
  return "invalid port selected";
 case 130:
  return "operation not supported for this port (the port is of type CX4 or internal)";
 case 132:
  return "cable is not connected";
 case 131:
  return "the connected cable has no EPROM (passive copper cable)";
 case 129:
  return "page number is greater than 15";
 case 134:
  return "invalid device_address or size (that is, size equals 0 or address+size is greater than 256)";
 case 136:
  return "invalid I2C slave address";
 case 128:
  return "at least one cable violates the QSFP specification and ignores the modsel signal";
 case 135:
  return "I2C bus is constantly busy";
 }
 return "Unknown Error";
}
