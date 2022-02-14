
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (char*,unsigned int const,unsigned int const) ;
 unsigned int FUNC_1 () ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static inline int FUNC_2(void)
{
 const unsigned int VAR_5 = FUNC_1();
 const unsigned int VAR_6 = VAR_3 | VAR_2 | VAR_1;





 VAR_4 = FUNC_0("erofs_unzipd", VAR_6,
         VAR_5 + VAR_5 / 4);
 return VAR_4 ? 0 : -VAR_0;
}
