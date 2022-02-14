
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; int y; int width; int height; } ;
union xenfb_out_event {TYPE_1__ update; int type; } ;
struct xenfb_info {int dummy; } ;
typedef int event ;


 int VAR_0 ;
 int FUNC_0 (union xenfb_out_event*,int ,int) ;
 int FUNC_1 (struct xenfb_info*,union xenfb_out_event*) ;

__attribute__((used)) static void FUNC_2(struct xenfb_info *VAR_1,
       int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 union xenfb_out_event VAR_6;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.type = VAR_0;
 VAR_6.update.x = VAR_2;
 VAR_6.update.y = VAR_3;
 VAR_6.update.width = VAR_4;
 VAR_6.update.height = VAR_5;


 FUNC_1(VAR_1, &VAR_6);
}
