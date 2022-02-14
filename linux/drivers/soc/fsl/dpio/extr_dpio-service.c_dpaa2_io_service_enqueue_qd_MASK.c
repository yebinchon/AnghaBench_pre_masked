
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct qbman_eq_desc {int dummy; } ;
struct dpaa2_io {int swp; } ;
struct dpaa2_fd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qbman_eq_desc*) ;
 int FUNC_1 (struct qbman_eq_desc*,int ) ;
 int FUNC_2 (struct qbman_eq_desc*,int ,int ,int ) ;
 int FUNC_3 (int ,struct qbman_eq_desc*,struct dpaa2_fd const*) ;
 struct dpaa2_io* FUNC_4 (struct dpaa2_io*) ;

int FUNC_5(struct dpaa2_io *VAR_1,
    u32 VAR_2, u8 VAR_3, u16 VAR_4,
    const struct dpaa2_fd *VAR_5)
{
 struct qbman_eq_desc VAR_6;

 VAR_1 = FUNC_4(VAR_1);
 if (!VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_6);
 FUNC_1(&VAR_6, 0);
 FUNC_2(&VAR_6, VAR_2, VAR_4, VAR_3);

 return FUNC_3(VAR_1->swp, &VAR_6, VAR_5);
}
