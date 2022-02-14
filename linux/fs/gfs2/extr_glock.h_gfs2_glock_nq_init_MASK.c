
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gfs2_holder {int dummy; } ;
struct gfs2_glock {int dummy; } ;


 int FUNC_0 (struct gfs2_holder*) ;
 int FUNC_1 (struct gfs2_glock*,unsigned int,int ,struct gfs2_holder*) ;
 int FUNC_2 (struct gfs2_holder*) ;

__attribute__((used)) static inline int FUNC_3(struct gfs2_glock *VAR_0,
         unsigned int VAR_1, u16 VAR_2,
         struct gfs2_holder *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  FUNC_2(VAR_3);

 return VAR_4;
}
