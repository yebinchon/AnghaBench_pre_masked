
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvs_wq {int handler; int work_q; int entry; void* data; struct mvs_info* mvi; } ;
struct mvs_info {int wq_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,struct mvs_wq*) ;
 struct mvs_wq* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(struct mvs_info *VAR_4, void *VAR_5, int VAR_6)
{
 struct mvs_wq *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_1(sizeof(struct mvs_wq), VAR_1);
 if (VAR_7) {
  VAR_7->mvi = VAR_4;
  VAR_7->data = VAR_5;
  VAR_7->handler = VAR_6;
  FUNC_0(&VAR_7->work_q, VAR_3, VAR_7);
  FUNC_2(&VAR_7->entry, &VAR_4->wq_list);
  FUNC_3(&VAR_7->work_q, VAR_2 * 2);
 } else
  VAR_8 = -VAR_0;

 return VAR_8;
}
