
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int reg ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,void*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, unsigned int VAR_2,
   unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = (VAR_2 << 16) | ((VAR_3) & 0xffff);
 FUNC_0(VAR_5 >> 8, VAR_1 + (VAR_0 << 2));
 FUNC_0(VAR_4, VAR_1 + ((VAR_5 & 0xff) << 2));
}
