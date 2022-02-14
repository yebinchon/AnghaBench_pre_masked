
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int tmp_nodenum ;
struct pnp_bios_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int,int ,int ,int*,int,struct pnp_bios_node*,int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_2(u8 *VAR_6, char VAR_7,
       struct pnp_bios_node *VAR_8)
{
 u16 VAR_9;
 u16 VAR_10;

 if (!FUNC_1())
  return VAR_1;
 if (!VAR_7 && VAR_5)
  return VAR_1;
 VAR_10 = *VAR_6;
 VAR_9 = FUNC_0(VAR_2, 0, VAR_3, 0, VAR_4,
          VAR_7 ? 2 : 1, VAR_0, 0, &VAR_10,
          sizeof(VAR_10), VAR_8, 65536);
 *VAR_6 = VAR_10;
 return VAR_9;
}
