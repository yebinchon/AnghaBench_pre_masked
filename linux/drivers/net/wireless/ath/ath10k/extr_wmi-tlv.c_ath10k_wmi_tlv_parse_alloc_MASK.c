
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 void const** FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct ath10k*,void const**,void const*,size_t) ;
 void** FUNC_2 (int ,int,int ) ;
 int FUNC_3 (void const**) ;

__attribute__((used)) static const void **
FUNC_4(struct ath10k *VAR_2, const void *VAR_3,
      size_t VAR_4, gfp_t VAR_5)
{
 const void **VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_1, sizeof(*VAR_6), VAR_5);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_1(VAR_2, VAR_6, VAR_3, VAR_4);
 if (VAR_7) {
  FUNC_3(VAR_6);
  return FUNC_0(VAR_7);
 }

 return VAR_6;
}
