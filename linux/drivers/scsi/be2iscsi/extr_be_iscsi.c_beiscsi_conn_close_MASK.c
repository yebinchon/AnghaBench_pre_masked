
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int dummy; } ;
struct beiscsi_endpoint {int ep_cid; struct beiscsi_hba* phba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct beiscsi_hba*) ;
 unsigned int FUNC_1 (struct beiscsi_hba*,struct beiscsi_endpoint*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,int ,char*,int ) ;
 int FUNC_3 (struct beiscsi_hba*,unsigned int,int *,int *) ;
 unsigned int FUNC_4 (struct beiscsi_hba*,struct beiscsi_endpoint*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct beiscsi_endpoint *VAR_2)
{
 struct beiscsi_hba *VAR_3 = VAR_2->phba;
 unsigned int VAR_4, VAR_5;
 int VAR_6;





 VAR_5 = 0;
 while (VAR_5++ < 3) {
  VAR_4 = FUNC_1(VAR_3, VAR_2);
  if (VAR_4) {
   VAR_6 = FUNC_3(VAR_3, VAR_4, ((void*)0), ((void*)0));
   if (!VAR_6)
    break;
   FUNC_2(VAR_3, VAR_1, VAR_0,
        "BS_%d : invalidate conn failed cid %d\n",
        VAR_2->ep_cid);
  }
 }


 FUNC_5(250);

 FUNC_0(VAR_3);

 if (VAR_5 > 3)
  return -1;

 VAR_5 = 0;
 while (VAR_5++ < 3) {
  VAR_4 = FUNC_4(VAR_3, VAR_2);
  if (VAR_4) {
   VAR_6 = FUNC_3(VAR_3, VAR_4, ((void*)0), ((void*)0));
   if (!VAR_6)
    break;
   FUNC_2(VAR_3, VAR_1, VAR_0,
        "BS_%d : upload conn failed cid %d\n",
        VAR_2->ep_cid);
  }
 }
 if (VAR_5 > 3)
  return -1;

 return 0;
}
