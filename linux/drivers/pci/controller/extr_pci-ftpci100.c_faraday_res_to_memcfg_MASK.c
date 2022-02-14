
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,int*,int*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(resource_size_t VAR_15,
     resource_size_t VAR_16, u32 *VAR_17)
{
 u32 VAR_18;

 switch (VAR_16) {
 case 136:
  VAR_18 = VAR_5;
  break;
 case 133:
  VAR_18 = VAR_8;
  break;
 case 131:
  VAR_18 = VAR_10;
  break;
 case 128:
  VAR_18 = VAR_13;
  break;
 case 138:
  VAR_18 = VAR_3;
  break;
 case 132:
  VAR_18 = VAR_9;
  break;
 case 129:
  VAR_18 = VAR_12;
  break;
 case 139:
  VAR_18 = VAR_2;
  break;
 case 135:
  VAR_18 = VAR_6;
  break;
 case 130:
  VAR_18 = VAR_11;
  break;
 case 137:
  VAR_18 = VAR_4;
  break;
 case 134:
  VAR_18 = VAR_7;
  break;
 default:
  return -VAR_0;
 }
 VAR_18 <<= VAR_14;


 if (VAR_15 & ~(VAR_1))
  FUNC_1("truncated PCI memory base\n");

 VAR_18 |= (VAR_15 & VAR_1);
 FUNC_0("Translated pci base @%pap, size %pap to config %08x\n",
   &VAR_15, &VAR_16, VAR_18);

 *VAR_17 = VAR_18;
 return 0;
}
