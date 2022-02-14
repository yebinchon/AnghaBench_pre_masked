
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qbman_eq_desc {int dummy; } ;
struct dpaa2_io {int swp; } ;
struct dpaa2_fd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qbman_eq_desc*) ;
 int FUNC_1 (struct qbman_eq_desc*,int ) ;
 int FUNC_2 (struct qbman_eq_desc*,int ) ;
 int FUNC_3 (int ,struct qbman_eq_desc*,struct dpaa2_fd const*) ;
 struct dpaa2_io* FUNC_4 (struct dpaa2_io*) ;

int FUNC_5(struct dpaa2_io *VAR_1,
    u32 VAR_2,
    const struct dpaa2_fd *VAR_3)
{
 struct qbman_eq_desc VAR_4;

 VAR_1 = FUNC_4(VAR_1);
 if (!VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_4);
 FUNC_2(&VAR_4, 0);
 FUNC_1(&VAR_4, VAR_2);

 return FUNC_3(VAR_1->swp, &VAR_4, VAR_3);
}
