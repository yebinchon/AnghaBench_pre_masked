
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c67x00_td {int status; } ;
struct c67x00_hcd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct c67x00_hcd*,struct c67x00_td*,char*) ;

__attribute__((used)) static int FUNC_1(struct c67x00_hcd *VAR_6, struct c67x00_td *VAR_7)
{
 if (VAR_7->status & VAR_3) {
  FUNC_0(VAR_6, VAR_7, "ERROR_FLAG");
  return -VAR_0;
 }
 if (VAR_7->status & VAR_4) {

  return -VAR_1;
 }
 if (VAR_7->status & VAR_5) {
  FUNC_0(VAR_6, VAR_7, "TIMEOUT");
  return -VAR_2;
 }

 return 0;
}
