
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_4, unsigned long VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;

 VAR_11 = VAR_5 & 0xFFFFFFFF;
 VAR_12 = VAR_5 >> 32;
 FUNC_0(0x00000001, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
 if (!(VAR_9 & 0x80000000))
  return -VAR_3;
 __asm__ __volatile__(".byte 0x00f, 0x001, 0x0c1" : "=a"(VAR_6) :
        "a"(VAR_4), "b"(VAR_11), "c"(VAR_12));
 if (VAR_6)
  goto error;
 return 0;


error:
 switch (VAR_6) {
 case 128:
  return -VAR_1;
 case 129:
  return -VAR_2;
 default:
  return -VAR_0;
 }
}
