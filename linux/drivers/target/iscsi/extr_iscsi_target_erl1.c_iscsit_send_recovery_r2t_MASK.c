
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_cmd {int r2t_lock; } ;


 int FUNC_0 (struct iscsi_cmd*,int ,int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(
 struct iscsi_cmd *VAR_0,
 u32 VAR_1,
 u32 VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0->r2t_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, 1, 0);
 FUNC_2(&VAR_0->r2t_lock);

 return VAR_3;
}
