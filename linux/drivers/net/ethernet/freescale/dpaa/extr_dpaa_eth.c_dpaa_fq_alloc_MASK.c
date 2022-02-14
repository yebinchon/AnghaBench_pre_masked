
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct list_head {int dummy; } ;
struct dpaa_fq {int fq_type; int fqid; int list; } ;
struct device {int dummy; } ;
typedef enum dpaa_fq_type { ____Placeholder_dpaa_fq_type } dpaa_fq_type ;


 int VAR_0 ;
 struct dpaa_fq* FUNC_0 (struct device*,int,int,int ) ;
 int FUNC_1 (struct dpaa_fq*,int) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static struct dpaa_fq *FUNC_3(struct device *VAR_1,
         u32 VAR_2, u32 VAR_3,
         struct list_head *VAR_4,
         enum dpaa_fq_type VAR_5)
{
 struct dpaa_fq *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_1, VAR_3, sizeof(*VAR_6),
          VAR_0);
 if (!VAR_6)
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6[VAR_7].fq_type = VAR_5;
  VAR_6[VAR_7].fqid = VAR_2 ? VAR_2 + VAR_7 : 0;
  FUNC_2(&VAR_6[VAR_7].list, VAR_4);
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  FUNC_1(VAR_6 + VAR_7, VAR_7);

 return VAR_6;
}
