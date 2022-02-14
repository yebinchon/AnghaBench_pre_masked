
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxfw_mfa2_file {TYPE_1__* fw; } ;
struct TYPE_2__ {void* data; int size; } ;



__attribute__((used)) static inline bool FUNC_0(const struct mlxfw_mfa2_file *VAR_0,
     const void *VAR_1)
{
 const void *VAR_2 = VAR_0->fw->data + VAR_0->fw->size;
 const void *VAR_3 = VAR_0->fw->data;

 return VAR_1 > VAR_3 && VAR_1 < VAR_2;
}
