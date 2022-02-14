
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bm_mc_result {int verb; } ;
typedef int u32 ;
struct bman_portal {int p; } ;
struct bm_mc_command {int bpid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,union bm_mc_result**) ;
 struct bm_mc_command* FUNC_2 (int *) ;
 struct bman_portal* FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;

int FUNC_6(u32 VAR_3)
{
 int VAR_4 = 0;
 struct bm_mc_command *VAR_5;
 union bm_mc_result *VAR_6;


 struct bman_portal *VAR_7 = FUNC_3();
 while (1) {

  VAR_5 = FUNC_2(&VAR_7->p);
  VAR_5->bpid = VAR_3;
  FUNC_0(&VAR_7->p, VAR_0 | 1);
  if (!FUNC_1(&VAR_7->p, &VAR_6)) {
   FUNC_4("BMan Acquire Command timedout\n");
   VAR_4 = -VAR_2;
   goto done;
  }
  if (!(VAR_6->verb & VAR_1)) {

   goto done;
  }
 }
done:
 FUNC_5();
 return 0;
}
