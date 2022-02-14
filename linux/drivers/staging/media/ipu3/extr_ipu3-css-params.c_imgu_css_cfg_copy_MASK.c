
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imgu_fw_isp_parameter {int dummy; } ;
struct imgu_css {int dummy; } ;
typedef enum imgu_abi_param_class { ____Placeholder_imgu_abi_param_class } imgu_abi_param_class ;
typedef enum imgu_abi_memories { ____Placeholder_imgu_abi_memories } imgu_abi_memories ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (struct imgu_css*,unsigned int,int const,int,struct imgu_fw_isp_parameter*,size_t,void*) ;
 int FUNC_2 (void*,void*,size_t) ;

__attribute__((used)) static void *FUNC_3(struct imgu_css *VAR_2,
          unsigned int VAR_3, bool VAR_4,
          void *VAR_5, void *VAR_6,
          void *VAR_7,
          enum imgu_abi_memories VAR_8,
          struct imgu_fw_isp_parameter *VAR_9,
          size_t VAR_10)
{
 const enum imgu_abi_param_class VAR_11 = VAR_1;
 void *VAR_12, *VAR_13;

 VAR_12 = FUNC_1(VAR_2, VAR_3, VAR_11, VAR_8, VAR_9,
        VAR_10, VAR_7);
 if (!VAR_12)
  return FUNC_0(-VAR_0);

 if (VAR_4) {

  FUNC_2(VAR_12, VAR_5, VAR_10);
 } else if (VAR_6) {

  VAR_13 = FUNC_1(VAR_2, VAR_3, VAR_11, VAR_8, VAR_9,
         VAR_10,
         VAR_6);
  if (!VAR_13)
   return FUNC_0(-VAR_0);
  FUNC_2(VAR_12, VAR_13, VAR_10);
 } else {
  return VAR_12;
 }

 return ((void*)0);
}
