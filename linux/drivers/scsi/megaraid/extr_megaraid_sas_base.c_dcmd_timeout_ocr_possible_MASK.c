
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megasas_instance {scalar_t__ adapter_type; int reset_flags; scalar_t__ unload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *) ;

inline int
FUNC_1(struct megasas_instance *VAR_5) {

 if (VAR_5->adapter_type == VAR_4)
  return VAR_2;
 else if (VAR_5->unload ||
   FUNC_0(VAR_3, &VAR_5->reset_flags))
  return VAR_0;
 else
  return VAR_1;
}
