
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_range {int dummy; } ;
struct pnfs_layout_hdr {int dummy; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head) ;
 struct list_head VAR_0 ;
 unsigned int FUNC_1 (struct pnfs_layout_hdr*,struct pnfs_layout_range const*,struct list_head*,int) ;
 int FUNC_2 (struct list_head*) ;

unsigned int FUNC_3(struct pnfs_layout_hdr *VAR_1,
          const struct pnfs_layout_range *VAR_2,
          struct list_head *VAR_3,
          unsigned int VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_5 == VAR_4) {
  FUNC_0(VAR_0);
  FUNC_1(VAR_1, VAR_2, &VAR_0, -1);
  FUNC_2(&VAR_0);
 }
 return VAR_5;
}
