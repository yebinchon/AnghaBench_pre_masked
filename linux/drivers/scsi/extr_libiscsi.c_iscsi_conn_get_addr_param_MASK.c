
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;




 int VAR_0 ;




 int * FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int *) ;

int FUNC_2(struct sockaddr_storage *VAR_1,
         enum iscsi_param VAR_2, char *VAR_3)
{
 struct sockaddr_in6 *VAR_4 = ((void*)0);
 struct sockaddr_in *VAR_5 = ((void*)0);
 int VAR_6;

 switch (VAR_1->ss_family) {
 case 133:
  VAR_5 = (struct sockaddr_in *)VAR_1;
  break;
 case 132:
  VAR_4 = (struct sockaddr_in6 *)VAR_1;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_2) {
 case 130:
 case 131:
  if (VAR_5)
   VAR_6 = FUNC_1(VAR_3, "%pI4\n", &VAR_5->sin_addr.s_addr);
  else
   VAR_6 = FUNC_1(VAR_3, "%pI6\n", &VAR_4->sin6_addr);
  break;
 case 129:
 case 128:
  if (VAR_5)
   VAR_6 = FUNC_1(VAR_3, "%hu\n", FUNC_0(VAR_5->sin_port));
  else
   VAR_6 = FUNC_1(VAR_3, "%hu\n",
          FUNC_0(VAR_4->sin6_port));
  break;
 default:
  return -VAR_0;
 }

 return VAR_6;
}
