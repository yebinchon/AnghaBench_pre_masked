
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bman_portal {int p; } ;
struct bman_pool {int bpid; } ;
struct bm_rcr_entry {int * bufs; } ;
struct bm_buffer {int dummy; } ;
typedef int bufs ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct bm_buffer const*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 struct bm_rcr_entry* FUNC_6 (int *) ;
 struct bman_portal* FUNC_7 () ;
 scalar_t__ FUNC_8 (struct bm_rcr_entry*) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (int *,struct bm_buffer const*,int) ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct bman_portal*,int) ;

int FUNC_16(struct bman_pool *VAR_3, const struct bm_buffer *VAR_4, u8 VAR_5)
{
 struct bman_portal *VAR_6;
 struct bm_rcr_entry *VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10 = 1000;
 int VAR_11 = VAR_5 - 1;

 FUNC_0(VAR_5 > 0 && VAR_5 <= 8);

 do {
  VAR_6 = FUNC_7();
  FUNC_10(VAR_8);
  VAR_9 = FUNC_4(&VAR_6->p);
  if (VAR_9 < 2)
   FUNC_15(VAR_6, VAR_9);
  VAR_7 = FUNC_6(&VAR_6->p);
  FUNC_9(VAR_8);
  FUNC_12();
  if (FUNC_8(VAR_7))
   break;

  FUNC_13(1);
 } while (--VAR_10);

 if (FUNC_14(!VAR_10))
  return -VAR_2;

 VAR_6 = FUNC_7();
 FUNC_10(VAR_8);




 FUNC_2(VAR_7->bufs, FUNC_1(VAR_4));
 FUNC_3(VAR_7->bufs, VAR_3->bpid);
 if (VAR_11)
  FUNC_11(&VAR_7->bufs[1], &VAR_4[1], VAR_11 * sizeof(VAR_4[0]));

 FUNC_5(&VAR_6->p, VAR_1 |
     (VAR_5 & VAR_0));

 FUNC_9(VAR_8);
 FUNC_12();
 return 0;
}
