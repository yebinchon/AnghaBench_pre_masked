
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*) ;

__attribute__((used)) static inline unsigned char *FUNC_5(unsigned char *VAR_0)
{
 unsigned char *VAR_1;
 unsigned int VAR_2 = (FUNC_4(VAR_0) << 1) | FUNC_3(VAR_0);

 switch (VAR_2) {
 case 0x00:
  VAR_1 = FUNC_0(VAR_0);
  break;
 case 0x01:
  VAR_1 = FUNC_1(VAR_0);
  break;
 case 0x02:
  VAR_1 = FUNC_0(VAR_0);
  break;
 default:
  VAR_1 = FUNC_2(VAR_0);
  break;
 }

 return VAR_1;
}
