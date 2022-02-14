
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bm_mc_result {int verb; int * bufs; } ;
typedef int u8 ;
struct bman_portal {int p; } ;
struct bman_pool {int bpid; } ;
struct bm_mc_command {int bpid; } ;
struct bm_buffer {int dummy; } ;
typedef int bufs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,union bm_mc_result**) ;
 struct bm_mc_command* FUNC_3 (int *) ;
 struct bman_portal* FUNC_4 () ;
 int FUNC_5 (struct bm_buffer*,int *,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;

int FUNC_8(struct bman_pool *VAR_5, struct bm_buffer *VAR_6, u8 VAR_7)
{
 struct bman_portal *VAR_8 = FUNC_4();
 struct bm_mc_command *VAR_9;
 union bm_mc_result *VAR_10;
 int VAR_11;

 FUNC_0(VAR_7 > 0 && VAR_7 <= 8);

 VAR_9 = FUNC_3(&VAR_8->p);
 VAR_9->bpid = VAR_5->bpid;
 FUNC_1(&VAR_8->p, VAR_1 |
       (VAR_7 & VAR_0));
 if (!FUNC_2(&VAR_8->p, &VAR_10)) {
  FUNC_7();
  FUNC_6("BMan Acquire Timeout\n");
  return -VAR_4;
 }
 VAR_11 = VAR_10->verb & VAR_2;
 if (VAR_6)
  FUNC_5(&VAR_6[0], &VAR_10->bufs[0], VAR_7 * sizeof(VAR_6[0]));

 FUNC_7();
 if (VAR_11 != VAR_7)
  VAR_11 = -VAR_3;
 return VAR_11;
}
