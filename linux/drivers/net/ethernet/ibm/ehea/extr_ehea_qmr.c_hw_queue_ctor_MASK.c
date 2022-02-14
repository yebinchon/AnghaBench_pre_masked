
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hw_queue {int queue_length; int qe_size; int pagesize; int toggle_state; struct ehea_page** queue_pages; scalar_t__ current_q_offset; } ;
struct ehea_page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ehea_page** FUNC_2 (int const,int,int ) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static int FUNC_4(struct hw_queue *VAR_4, const u32 VAR_5,
     const u32 VAR_6, const u32 VAR_7)
{
 int VAR_8 = VAR_3 / VAR_6;
 int VAR_9, VAR_10;

 if ((VAR_6 > VAR_3) || (!VAR_8)) {
  FUNC_3("pagesize conflict! kernel pagesize=%d, ehea pagesize=%d\n",
         (int)VAR_3, (int)VAR_6);
  return -VAR_0;
 }

 VAR_4->queue_length = VAR_5 * VAR_6;
 VAR_4->queue_pages = FUNC_2(VAR_5, sizeof(void *),
        VAR_2);
 if (!VAR_4->queue_pages)
  return -VAR_1;






 VAR_9 = 0;
 while (VAR_9 < VAR_5) {
  u8 *VAR_11 = (u8 *)FUNC_1(VAR_2);
  if (!VAR_11)
   goto out_nomem;
  for (VAR_10 = 0; VAR_10 < VAR_8 && VAR_9 < VAR_5; VAR_10++) {
   (VAR_4->queue_pages)[VAR_9] = (struct ehea_page *)VAR_11;
   VAR_11 += VAR_6;
   VAR_9++;
  }
 }

 VAR_4->current_q_offset = 0;
 VAR_4->qe_size = VAR_7;
 VAR_4->pagesize = VAR_6;
 VAR_4->toggle_state = 1;

 return 0;
out_nomem:
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9 += VAR_8) {
  if (!(VAR_4->queue_pages)[VAR_9])
   break;
  FUNC_0((unsigned long)(VAR_4->queue_pages)[VAR_9]);
 }
 return -VAR_1;
}
