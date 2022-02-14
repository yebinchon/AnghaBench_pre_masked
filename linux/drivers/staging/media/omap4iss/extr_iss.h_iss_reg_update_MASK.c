
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iss_device {int dummy; } ;
typedef enum iss_mem_resources { ____Placeholder_iss_mem_resources } iss_mem_resources ;


 int FUNC_0 (struct iss_device*,int,int) ;
 int FUNC_1 (struct iss_device*,int,int,int) ;

__attribute__((used)) static inline
void FUNC_2(struct iss_device *VAR_0, enum iss_mem_resources VAR_1,
      u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);

 FUNC_1(VAR_0, VAR_1, VAR_2, (VAR_5 & ~VAR_3) | VAR_4);
}
