
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x_prev_path_list {int undi; int list; scalar_t__ aer; int path; int slot; int bus; } ;
struct bnx2x {TYPE_2__* pdev; } ;
struct TYPE_4__ {int devfn; TYPE_1__* bus; } ;
struct TYPE_3__ {int number; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 struct bnx2x_prev_path_list* FUNC_5 (struct bnx2x*) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct bnx2x_prev_path_list*) ;
 struct bnx2x_prev_path_list* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct bnx2x *VAR_5, bool VAR_6)
{
 struct bnx2x_prev_path_list *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_6(&VAR_4);
 if (VAR_8) {
  FUNC_0("Received %d when tried to take lock\n", VAR_8);
  return VAR_8;
 }


 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7) {
  if (!VAR_7->aer) {
   FUNC_0("Re-Marking the path.\n");
  } else {
   FUNC_3(VAR_2, "Removing AER indication from path %d\n",
      FUNC_1(VAR_5));
   VAR_7->aer = 0;
  }
  FUNC_10(&VAR_4);
  return 0;
 }
 FUNC_10(&VAR_4);


 VAR_7 = FUNC_8(sizeof(struct bnx2x_prev_path_list), VAR_1);
 if (!VAR_7) {
  FUNC_0("Failed to allocate 'bnx2x_prev_path_list'\n");
  return -VAR_0;
 }

 VAR_7->bus = VAR_5->pdev->bus->number;
 VAR_7->slot = FUNC_4(VAR_5->pdev->devfn);
 VAR_7->path = FUNC_1(VAR_5);
 VAR_7->aer = 0;
 VAR_7->undi = VAR_6 ? (1 << FUNC_2(VAR_5)) : 0;

 VAR_8 = FUNC_6(&VAR_4);
 if (VAR_8) {
  FUNC_0("Received %d when tried to take lock\n", VAR_8);
  FUNC_7(VAR_7);
 } else {
  FUNC_3(VAR_2, "Marked path [%d] - finished previous unload\n",
     FUNC_1(VAR_5));
  FUNC_9(&VAR_7->list, &VAR_3);
  FUNC_10(&VAR_4);
 }

 return VAR_8;
}
