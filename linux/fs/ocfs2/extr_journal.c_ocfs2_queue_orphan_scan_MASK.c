
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_orphan_scan {scalar_t__ os_seqno; int os_state; int os_count; int os_scantime; } ;
struct ocfs2_super {int max_slots; int journal; struct ocfs2_orphan_scan osb_orphan_scan; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_super*,scalar_t__*) ;
 int FUNC_4 (struct ocfs2_super*,scalar_t__) ;
 int FUNC_5 (int ,int,int *,int *,int *,int ) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct ocfs2_super *VAR_3)
{
 struct ocfs2_orphan_scan *VAR_4;
 int VAR_5, VAR_6;
 u32 VAR_7 = 0;

 VAR_4 = &VAR_3->osb_orphan_scan;

 if (FUNC_0(&VAR_4->os_state) == VAR_2)
  goto out;

 FUNC_6(VAR_4->os_count, VAR_4->os_seqno,
         FUNC_0(&VAR_4->os_state));

 VAR_5 = FUNC_3(VAR_3, &VAR_7);
 if (VAR_5 < 0) {
  if (VAR_5 != -VAR_0)
   FUNC_2(VAR_5);
  goto out;
 }


 if (FUNC_0(&VAR_4->os_state) == VAR_2)
  goto unlock;

 if (VAR_4->os_seqno != VAR_7) {
  VAR_4->os_seqno = VAR_7;
  goto unlock;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->max_slots; VAR_6++)
  FUNC_5(VAR_3->journal, VAR_6, ((void*)0), ((void*)0),
      ((void*)0), VAR_1);




 VAR_7++;
 VAR_4->os_count++;
 VAR_4->os_scantime = FUNC_1();
unlock:
 FUNC_4(VAR_3, VAR_7);
out:
 FUNC_7(VAR_4->os_count, VAR_4->os_seqno,
       FUNC_0(&VAR_4->os_state));
 return;
}
