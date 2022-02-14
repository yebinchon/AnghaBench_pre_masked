
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_card {int ipm_list; int read; int write; int lancmd_timeout; scalar_t__ pkt_seq; int lan_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ,struct lcs_card**,int) ;
 int FUNC_2 (int,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct lcs_card* FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct lcs_card*) ;
 int VAR_4 ;

__attribute__((used)) static struct lcs_card *
FUNC_7(void)
{
 struct lcs_card *VAR_5;
 int VAR_6;

 FUNC_2(2, VAR_4, "alloclcs");

 VAR_5 = FUNC_3(sizeof(struct lcs_card), VAR_1 | VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 VAR_5->lan_type = VAR_2;
 VAR_5->pkt_seq = 0;
 VAR_5->lancmd_timeout = VAR_3;

 VAR_6 = FUNC_4(&VAR_5->read);
 if (VAR_6){
  FUNC_2(2, VAR_4, "iccwerr");
  FUNC_6(VAR_5);
  return ((void*)0);
 }

 VAR_6 = FUNC_4(&VAR_5->write);
 if (VAR_6) {
  FUNC_2(2, VAR_4, "iccwerr");
  FUNC_5(&VAR_5->read);
  FUNC_6(VAR_5);
  return ((void*)0);
 }




 FUNC_1(2, VAR_4, &VAR_5, sizeof(void*));
 return VAR_5;
}
