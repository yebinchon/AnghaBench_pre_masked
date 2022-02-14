
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pnp_bios_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int,int ,int ,int ,struct pnp_bios_node*,int,int *,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2(u8 VAR_5, char VAR_6,
       struct pnp_bios_node *VAR_7)
{
 u16 VAR_8;

 if (!FUNC_1())
  return VAR_1;
 if (!VAR_6 && VAR_4)
  return VAR_1;
 VAR_8 = FUNC_0(VAR_2, VAR_5, 0, VAR_3,
          VAR_6 ? 2 : 1, VAR_0, 0, 0, VAR_7, 65536, ((void*)0),
          0);
 return VAR_8;
}
