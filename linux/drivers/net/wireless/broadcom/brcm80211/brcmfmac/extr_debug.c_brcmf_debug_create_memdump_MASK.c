
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_bus {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmf_bus*,void*,size_t) ;
 size_t FUNC_1 (struct brcmf_bus*) ;
 int FUNC_2 (int ,void*,size_t,int ) ;
 int FUNC_3 (void*,void const*,size_t) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (size_t) ;

int FUNC_6(struct brcmf_bus *VAR_3, const void *VAR_4,
          size_t VAR_5)
{
 void *VAR_6;
 size_t VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_3);
 if (!VAR_7)
  return -VAR_1;

 VAR_6 = FUNC_5(VAR_5 + VAR_7);
 if (!VAR_6)
  return -VAR_0;

 if (VAR_4 && VAR_5 > 0)
  FUNC_3(VAR_6, VAR_4, VAR_5);
 VAR_8 = FUNC_0(VAR_3, VAR_6 + VAR_5, VAR_7);
 if (VAR_8) {
  FUNC_4(VAR_6);
  return VAR_8;
 }

 FUNC_2(VAR_3->dev, VAR_6, VAR_5 + VAR_7, VAR_2);

 return 0;
}
