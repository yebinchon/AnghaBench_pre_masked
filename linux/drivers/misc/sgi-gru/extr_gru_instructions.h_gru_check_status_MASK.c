
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_control_block_status {int istatus; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static inline int FUNC_1(void *VAR_1)
{
 struct gru_control_block_status *VAR_2 = (void *)VAR_1;
 int VAR_3;

 VAR_3 = VAR_2->istatus;
 if (VAR_3 != VAR_0)
  VAR_3 = FUNC_0(VAR_1);
 return VAR_3;
}
