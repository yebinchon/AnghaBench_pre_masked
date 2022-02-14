
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned long,unsigned long,unsigned char const,unsigned char const,int) ;

__attribute__((used)) static size_t FUNC_2(loff_t VAR_0, loff_t VAR_1, const void *VAR_2,
          const void *VAR_3, size_t VAR_4)
{
 const unsigned char *VAR_5, *VAR_6;
 int VAR_7;
 size_t VAR_8 = 0;
 size_t VAR_9 = 0;

 for (VAR_5 = VAR_2, VAR_6 = VAR_3; 0 < VAR_4; ++VAR_5, ++VAR_6, VAR_4--, VAR_8++) {
  VAR_7 = *VAR_5 ^ *VAR_6;
  if (VAR_7) {
   FUNC_1("error @addr[0x%lx:0x%lx] 0x%x -> 0x%x diff 0x%x\n",
    (unsigned long)VAR_0, (unsigned long)VAR_1 + VAR_8,
    *VAR_5, *VAR_6, VAR_7);
   VAR_9 += FUNC_0(VAR_7);
  }
 }

 return VAR_9;
}
