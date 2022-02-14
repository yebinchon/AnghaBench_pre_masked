
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct qbman_release_desc {int dummy; } ;
struct dpaa2_io {int swp; } ;


 int VAR_0 ;
 int FUNC_0 (struct qbman_release_desc*) ;
 int FUNC_1 (struct qbman_release_desc*,int ) ;
 int FUNC_2 (int ,struct qbman_release_desc*,int const*,unsigned int) ;
 struct dpaa2_io* FUNC_3 (struct dpaa2_io*) ;

int FUNC_4(struct dpaa2_io *VAR_1,
        u16 VAR_2,
        const u64 *VAR_3,
        unsigned int VAR_4)
{
 struct qbman_release_desc VAR_5;

 VAR_1 = FUNC_3(VAR_1);
 if (!VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_5);
 FUNC_1(&VAR_5, VAR_2);

 return FUNC_2(VAR_1->swp, &VAR_5, VAR_3, VAR_4);
}
