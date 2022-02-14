
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int word ;
typedef unsigned long __u8 ;
typedef unsigned long __u64 ;
typedef unsigned long __u32 ;
typedef unsigned long __u16 ;


 int VAR_0 ;
 int FUNC_0 (char*,long) ;
 int FUNC_1 (unsigned long,unsigned long) ;

int FUNC_2(unsigned long VAR_1, unsigned long VAR_2, size_t VAR_3)
{
 int VAR_4;
 __u8 VAR_5;
 __u16 VAR_6;
 __u32 VAR_7;
 __u64 VAR_8;
 switch (VAR_3) {
 case 1:
  VAR_5 = VAR_2;
  VAR_4 = FUNC_1(VAR_1, VAR_5);
  break;
 case 2:
  VAR_6 = VAR_2;
  VAR_4 = FUNC_1(VAR_1, VAR_6);
  break;
 case 4:
  VAR_7 = VAR_2;
  VAR_4 = FUNC_1(VAR_1, VAR_7);
  break;
 case 8:
  if (VAR_3 <= sizeof(VAR_2)) {
   VAR_8 = VAR_2;
   VAR_4 = FUNC_1(VAR_1, VAR_8);
   break;
  }

 default:
  VAR_4 = VAR_0;
  FUNC_0("kdb_putword: bad width %ld\n", (long) VAR_3);
 }
 return VAR_4;
}
