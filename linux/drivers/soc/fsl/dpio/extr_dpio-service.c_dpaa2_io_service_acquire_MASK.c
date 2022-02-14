
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct dpaa2_io {int lock_mgmt_cmd; int swp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,unsigned int) ;
 struct dpaa2_io* FUNC_1 (struct dpaa2_io*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct dpaa2_io *VAR_1,
        u16 VAR_2,
        u64 *VAR_3,
        unsigned int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 VAR_1 = FUNC_1(VAR_1);
 if (!VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_1->lock_mgmt_cmd, VAR_5);
 VAR_6 = FUNC_0(VAR_1->swp, VAR_2, VAR_3, VAR_4);
 FUNC_3(&VAR_1->lock_mgmt_cmd, VAR_5);

 return VAR_6;
}
