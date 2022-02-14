
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {int reserved_pebs; } ;



__attribute__((used)) static inline bool FUNC_0(struct ubi_volume *VAR_0, int VAR_1)
{
 return VAR_1 >= 0 && VAR_1 < VAR_0->reserved_pebs;
}
