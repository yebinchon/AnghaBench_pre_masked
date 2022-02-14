
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int flags; int ap; } ;
struct ap_data {int sta_table_lock; } ;


 int VAR_0 ;
 struct sta_info* FUNC_0 (struct ap_data*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ap_data *VAR_1, u8 *VAR_2)
{
 struct sta_info *VAR_3;
 int VAR_4 = 0;

 FUNC_1(&VAR_1->sta_table_lock);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 != ((void*)0) && (VAR_3->flags & VAR_0) && !VAR_3->ap)
  VAR_4 = 1;
 FUNC_2(&VAR_1->sta_table_lock);

 return VAR_4;
}
