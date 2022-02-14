
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cq_sgl_desc {int tmpl; int sgl_err; int tot_data_bytes; int active_burst_offset; } ;
struct cq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cq_desc*,int*,int*,int*,int*) ;

__attribute__((used)) static inline void FUNC_1(struct cq_sgl_desc *VAR_2,
       u8 *VAR_3,
       u8 *VAR_4,
       u16 *VAR_5,
       u16 *VAR_6,
       u32 *VAR_7,
       u32 *VAR_8,
       u16 *VAR_9,
       u8 *VAR_10)
{


 FUNC_0((struct cq_desc *)VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6);
 *VAR_7 = VAR_2->active_burst_offset;
 *VAR_8 = VAR_2->tot_data_bytes;
 *VAR_9 = VAR_2->tmpl & VAR_1;
 *VAR_10 = VAR_2->sgl_err & VAR_0;
}
