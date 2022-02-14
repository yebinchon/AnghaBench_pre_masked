
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_master_list_entry {scalar_t__ type; int master; int new_master; int node_map; int response_map; int vote_map; int maybe_map; int mle_refs; int inuse; int hb_events; int mnamelen; int mname; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,char*,...) ;
 scalar_t__ FUNC_3 (int ,int ,char*,int) ;
 scalar_t__ FUNC_4 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct dlm_master_list_entry *VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 char *VAR_7;

 if (VAR_3->type == VAR_0)
  VAR_7 = "BLK";
 else if (VAR_3->type == VAR_1)
  VAR_7 = "MAS";
 else
  VAR_7 = "MIG";

 VAR_6 += FUNC_3(VAR_3->mname, VAR_3->mnamelen, VAR_4 + VAR_6, VAR_5 - VAR_6);
 VAR_6 += FUNC_2(VAR_4 + VAR_6, VAR_5 - VAR_6,
   "\t%3s\tmas=%3u\tnew=%3u\tevt=%1d\tuse=%1d\tref=%3d\n",
   VAR_7, VAR_3->master, VAR_3->new_master,
   !FUNC_1(&VAR_3->hb_events),
   !!VAR_3->inuse,
   FUNC_0(&VAR_3->mle_refs));

 VAR_6 += FUNC_2(VAR_4 + VAR_6, VAR_5 - VAR_6, "Maybe=");
 VAR_6 += FUNC_4(VAR_3->maybe_map, VAR_2,
     VAR_4 + VAR_6, VAR_5 - VAR_6);
 VAR_6 += FUNC_2(VAR_4 + VAR_6, VAR_5 - VAR_6, "\n");

 VAR_6 += FUNC_2(VAR_4 + VAR_6, VAR_5 - VAR_6, "Vote=");
 VAR_6 += FUNC_4(VAR_3->vote_map, VAR_2,
     VAR_4 + VAR_6, VAR_5 - VAR_6);
 VAR_6 += FUNC_2(VAR_4 + VAR_6, VAR_5 - VAR_6, "\n");

 VAR_6 += FUNC_2(VAR_4 + VAR_6, VAR_5 - VAR_6, "Response=");
 VAR_6 += FUNC_4(VAR_3->response_map, VAR_2,
     VAR_4 + VAR_6, VAR_5 - VAR_6);
 VAR_6 += FUNC_2(VAR_4 + VAR_6, VAR_5 - VAR_6, "\n");

 VAR_6 += FUNC_2(VAR_4 + VAR_6, VAR_5 - VAR_6, "Node=");
 VAR_6 += FUNC_4(VAR_3->node_map, VAR_2,
     VAR_4 + VAR_6, VAR_5 - VAR_6);
 VAR_6 += FUNC_2(VAR_4 + VAR_6, VAR_5 - VAR_6, "\n");

 VAR_6 += FUNC_2(VAR_4 + VAR_6, VAR_5 - VAR_6, "\n");

 return VAR_6;
}
