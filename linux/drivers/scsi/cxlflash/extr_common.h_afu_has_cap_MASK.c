
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct afu {int interface_version; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct afu *VAR_1, u64 VAR_2)
{
 u64 VAR_3 = VAR_1->interface_version >> VAR_0;

 return VAR_3 & VAR_2;
}
