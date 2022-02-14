
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dln2_header {void* handle; void* echo; void* size; void* id; } ;
typedef int gfp_t ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (void*,void const*,int) ;

__attribute__((used)) static void *FUNC_3(u16 VAR_0, u16 VAR_1, u16 VAR_2, const void *VAR_3,
      int *VAR_4, gfp_t VAR_5)
{
 int VAR_6;
 void *VAR_7;
 struct dln2_header *VAR_8;

 VAR_6 = *VAR_4 + sizeof(*VAR_8);
 VAR_7 = FUNC_1(VAR_6, VAR_5);
 if (!VAR_7)
  return ((void*)0);

 VAR_8 = (struct dln2_header *)VAR_7;
 VAR_8->id = FUNC_0(VAR_1);
 VAR_8->size = FUNC_0(VAR_6);
 VAR_8->echo = FUNC_0(VAR_2);
 VAR_8->handle = FUNC_0(VAR_0);

 FUNC_2(VAR_7 + sizeof(*VAR_8), VAR_3, *VAR_4);

 *VAR_4 = VAR_6;

 return VAR_7;
}
