
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmphw_path_plat {int dummy; } ;
struct mmp_path {scalar_t__ plat_data; } ;



__attribute__((used)) static inline struct mmphw_path_plat *FUNC_0(struct mmp_path *VAR_0)
{
 return (struct mmphw_path_plat *)VAR_0->plat_data;
}
