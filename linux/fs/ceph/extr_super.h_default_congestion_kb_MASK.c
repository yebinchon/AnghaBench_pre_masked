
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static inline int FUNC_2(void)
{
 int VAR_1;
 VAR_1 = (16*FUNC_0(FUNC_1())) << (VAR_0-10);
 if (VAR_1 > 256*1024)
  VAR_1 = 256*1024;

 return VAR_1;
}
