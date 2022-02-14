
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned long,unsigned long,unsigned char const,int) ;

__attribute__((used)) static size_t FUNC_2(loff_t VAR_0, loff_t VAR_1, const void *VAR_2,
   size_t VAR_3)
{
 const unsigned char *VAR_4;
 int VAR_5;
 size_t VAR_6 = 0;
 size_t VAR_7 = 0;

 for (VAR_4 = VAR_2; 0 < VAR_3; ++VAR_4, VAR_3--, VAR_6++) {
  VAR_5 = *VAR_4 ^ 0xff;
  if (VAR_5) {
   FUNC_1("error @addr[0x%lx:0x%lx] 0x%x -> 0xff diff 0x%x\n",
    (unsigned long)VAR_0, (unsigned long)VAR_1 + VAR_6,
    *VAR_4, VAR_5);
   VAR_7 += FUNC_0(VAR_5);
  }
 }

 return VAR_7;
}
