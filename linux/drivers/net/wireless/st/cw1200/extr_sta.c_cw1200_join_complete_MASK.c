
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_common {int join_pending; scalar_t__ mode; int join_status; int vif; int listening; scalar_t__ join_complete_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct cw1200_common*) ;
 int FUNC_1 (struct cw1200_common*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (struct cw1200_common*) ;

__attribute__((used)) static void FUNC_5(struct cw1200_common *VAR_4)
{
 FUNC_3("[STA] Join complete (%d)\n", VAR_4->join_complete_status);

 VAR_4->join_pending = 0;
 if (VAR_4->join_complete_status) {
  VAR_4->join_status = VAR_1;
  FUNC_1(VAR_4, VAR_4->listening);
  FUNC_0(VAR_4);
  FUNC_2(VAR_4->vif);
 } else {
  if (VAR_4->mode == VAR_3)
   VAR_4->join_status = VAR_0;
  else
   VAR_4->join_status = VAR_2;
 }
 FUNC_4(VAR_4);
}
