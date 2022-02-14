
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {scalar_t__ state; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ibmvfc_host *VAR_8, int VAR_9)
{
 if (VAR_9 & VAR_5)
  FUNC_1(VAR_8->host, FUNC_0(), VAR_2, 0);
 if ((VAR_9 & VAR_3) &&
     VAR_8->state >= VAR_6)
  FUNC_1(VAR_8->host, FUNC_0(), VAR_0, 0);
 if ((VAR_9 & VAR_4) &&
     VAR_8->state == VAR_7)
  FUNC_1(VAR_8->host, FUNC_0(), VAR_1, 0);
}
