
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct z_erofs_collector {scalar_t__ mode; TYPE_1__* cl; int vector; } ;
struct page {int dummy; } ;
typedef enum z_erofs_page_type { ____Placeholder_z_erofs_page_type } z_erofs_page_type ;
struct TYPE_2__ {unsigned int vcnt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct page*,int,int*) ;
 scalar_t__ FUNC_1 (struct z_erofs_collector*,struct page*) ;

__attribute__((used)) static int FUNC_2(struct z_erofs_collector *VAR_3,
          struct page *VAR_4,
          enum z_erofs_page_type VAR_5)
{
 int VAR_6;
 bool VAR_7;


 if (VAR_3->mode >= VAR_0 &&
     VAR_5 == VAR_2 &&
     FUNC_1(VAR_3, VAR_4))
  return 0;

 VAR_6 = FUNC_0(&VAR_3->vector,
          VAR_4, VAR_5, &VAR_7);
 VAR_3->cl->vcnt += (unsigned int)VAR_6;

 return VAR_6 ? 0 : -VAR_1;
}
