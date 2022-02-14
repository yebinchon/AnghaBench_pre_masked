
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_hcd_port {int flags; int oc_status; int oc_changed; } ;
struct s3c2410_hcd_info {struct s3c2410_hcd_port* port; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct s3c2410_hcd_info*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct s3c2410_hcd_info *VAR_1, int VAR_2)
{
 struct s3c2410_hcd_port *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 if (VAR_1 == ((void*)0))
  return;

 VAR_3 = &VAR_1->port[0];

 FUNC_1(VAR_4);

 for (VAR_5 = 0; VAR_5 < 2; VAR_3++, VAR_5++) {
  if (VAR_2 & (1<<VAR_5) &&
      VAR_3->flags & VAR_0) {
   VAR_3->oc_status = 1;
   VAR_3->oc_changed = 1;



   FUNC_2(VAR_1, VAR_5+1, 0);
  }
 }

 FUNC_0(VAR_4);
}
