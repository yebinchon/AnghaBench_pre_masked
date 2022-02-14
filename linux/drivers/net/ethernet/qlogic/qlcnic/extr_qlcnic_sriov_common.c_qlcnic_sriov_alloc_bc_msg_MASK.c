
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_bc_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qlcnic_bc_hdr* FUNC_0 (int ,int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct qlcnic_bc_hdr **VAR_2,
         u32 VAR_3)
{
 *VAR_2 = FUNC_0(VAR_3, sizeof(struct qlcnic_bc_hdr), VAR_1);
 if (!*VAR_2)
  return -VAR_0;

 return 0;
}
