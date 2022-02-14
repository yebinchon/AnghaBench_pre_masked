
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tb_cfg_header {int route_hi; int route_lo; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tb_cfg_header*) ;

__attribute__((used)) static inline struct tb_cfg_header FUNC_2(u64 VAR_0)
{
 struct tb_cfg_header VAR_1 = {
  .route_hi = VAR_0 >> 32,
  .route_lo = VAR_0,
 };

 FUNC_0(FUNC_1(&VAR_1) != VAR_0);
 return VAR_1;
}
