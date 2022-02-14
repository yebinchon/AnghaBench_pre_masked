
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbitmap_queue {struct sbq_wait_state* ws; } ;
struct se_session {struct sbitmap_queue sess_tag_pool; } ;
struct sbq_wait_state {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sbitmap_queue*,struct sbq_wait_state*,int *) ;
 int FUNC_2 (struct sbitmap_queue*,struct sbq_wait_state*,int *,int) ;
 int FUNC_3 (struct sbitmap_queue*,int*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct se_session *VAR_3, int VAR_4, int *VAR_5)
{
 int VAR_6 = -1;
 FUNC_0(VAR_2);
 struct sbq_wait_state *VAR_7;
 struct sbitmap_queue *VAR_8;

 if (VAR_4 == VAR_0)
  return VAR_6;

 VAR_8 = &VAR_3->sess_tag_pool;
 VAR_7 = &VAR_8->ws[0];
 for (;;) {
  FUNC_2(VAR_8, VAR_7, &VAR_2, VAR_4);
  if (FUNC_5(VAR_4, VAR_1))
   break;
  VAR_6 = FUNC_3(VAR_8, VAR_5);
  if (VAR_6 >= 0)
   break;
  FUNC_4();
 }

 FUNC_1(VAR_8, VAR_7, &VAR_2);
 return VAR_6;
}
