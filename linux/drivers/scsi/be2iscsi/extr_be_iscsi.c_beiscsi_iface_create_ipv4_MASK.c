
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {scalar_t__ ipv4_iface; int shost; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct beiscsi_hba *VAR_5)
{
 if (VAR_5->ipv4_iface)
  return 0;

 VAR_5->ipv4_iface = FUNC_1(VAR_5->shost,
           &VAR_4,
           VAR_2,
           0, 0);
 if (!VAR_5->ipv4_iface) {
  FUNC_0(VAR_5, VAR_3, VAR_0,
       "BS_%d : Could not "
       "create default IPv4 address.\n");
  return -VAR_1;
 }

 return 0;
}
