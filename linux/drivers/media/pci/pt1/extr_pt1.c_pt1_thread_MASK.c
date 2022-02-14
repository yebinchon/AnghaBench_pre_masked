
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt1_buffer_page {int dummy; } ;
struct pt1 {size_t table_index; size_t buf_index; TYPE_3__* tables; TYPE_1__** adaps; } ;
typedef int ktime_t ;
struct TYPE_6__ {TYPE_2__* bufs; } ;
struct TYPE_5__ {struct pt1_buffer_page* page; } ;
struct TYPE_4__ {int users; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct pt1*,struct pt1_buffer_page*) ;
 int FUNC_3 (struct pt1*) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct pt1*,int,int) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(void *VAR_8)
{
 struct pt1 *VAR_9;
 struct pt1_buffer_page *VAR_10;
 bool VAR_11;




 VAR_9 = VAR_8;
 FUNC_7();

 while (!FUNC_0(&VAR_11)) {
  if (VAR_11) {
   int VAR_12;

   for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
    FUNC_4(VAR_9, VAR_12, !!VAR_9->adaps[VAR_12]->users);
  }

  VAR_10 = VAR_9->tables[VAR_9->table_index].bufs[VAR_9->buf_index].page;
  if (!FUNC_2(VAR_9, VAR_10)) {
   ktime_t VAR_13;

   VAR_13 = FUNC_1(0, 10 * VAR_1);
   FUNC_6(VAR_6);
   FUNC_5(&VAR_13,
     2 * VAR_1,
     VAR_0);
   continue;
  }

  if (++VAR_9->buf_index >= VAR_5) {
   FUNC_3(VAR_9);
   VAR_9->buf_index = 0;
   if (++VAR_9->table_index >= VAR_7)
    VAR_9->table_index = 0;
  }
 }

 return 0;
}
