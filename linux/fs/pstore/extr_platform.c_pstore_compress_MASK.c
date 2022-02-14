
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,void const*,unsigned int,void*,unsigned int*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(const void *VAR_1, void *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2, &VAR_4);
 if (VAR_5) {
  FUNC_1("crypto_comp_compress failed, ret = %d!\n", VAR_5);
  return VAR_5;
 }

 return VAR_4;
}
