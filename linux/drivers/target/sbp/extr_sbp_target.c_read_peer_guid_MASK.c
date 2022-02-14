
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sbp_management_request {int speed; int generation; int node_addr; int card; } ;
typedef int low ;
typedef int high ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int,int *,int) ;

__attribute__((used)) static int FUNC_2(u64 *VAR_4, const struct sbp_management_request *VAR_5)
{
 int VAR_6;
 __be32 VAR_7, VAR_8;

 VAR_6 = FUNC_1(VAR_5->card, VAR_3,
   VAR_5->node_addr, VAR_5->generation, VAR_5->speed,
   (VAR_1 | VAR_0) + 3 * 4,
   &VAR_7, sizeof(VAR_7));
 if (VAR_6 != VAR_2)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_5->card, VAR_3,
   VAR_5->node_addr, VAR_5->generation, VAR_5->speed,
   (VAR_1 | VAR_0) + 4 * 4,
   &VAR_8, sizeof(VAR_8));
 if (VAR_6 != VAR_2)
  return VAR_6;

 *VAR_4 = (u64)FUNC_0(VAR_7) << 32 | FUNC_0(VAR_8);

 return VAR_2;
}
