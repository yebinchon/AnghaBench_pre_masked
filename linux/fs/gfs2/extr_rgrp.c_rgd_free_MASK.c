
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gfs2_rgrpd {scalar_t__ rd_reserved; scalar_t__ rd_free_clone; } ;
struct gfs2_blkreserv {scalar_t__ rs_free; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline u32 FUNC_1(struct gfs2_rgrpd *VAR_0, struct gfs2_blkreserv *VAR_1)
{
 u32 VAR_2, VAR_3;

 if (FUNC_0(VAR_0->rd_reserved < VAR_1->rs_free))
  return 0;
 VAR_2 = VAR_0->rd_reserved - VAR_1->rs_free;

 if (VAR_0->rd_free_clone < VAR_2)
  VAR_2 = 0;

 VAR_3 = VAR_0->rd_free_clone - VAR_2;

 return VAR_3;
}
