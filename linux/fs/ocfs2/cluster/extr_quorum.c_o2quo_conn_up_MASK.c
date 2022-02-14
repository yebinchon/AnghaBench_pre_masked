
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct o2quo_state {scalar_t__ qs_connected; int qs_lock; int qs_hb_bm; int qs_conn_bm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ,scalar_t__) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (struct o2quo_state*,int ) ;
 int FUNC_3 (struct o2quo_state*,int ) ;
 struct o2quo_state VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8(u8 VAR_2)
{
 struct o2quo_state *VAR_3 = &VAR_1;

 FUNC_5(&VAR_3->qs_lock);

 VAR_3->qs_connected++;
 FUNC_1(VAR_3->qs_connected == VAR_0,
          "node %u\n", VAR_2);
 FUNC_1(FUNC_7(VAR_2, VAR_3->qs_conn_bm), "node %u\n", VAR_2);
 FUNC_4(VAR_2, VAR_3->qs_conn_bm);

 FUNC_0(0, "node %u, %d total\n", VAR_2, VAR_3->qs_connected);

 if (!FUNC_7(VAR_2, VAR_3->qs_hb_bm))
  FUNC_3(VAR_3, VAR_2);
 else
  FUNC_2(VAR_3, VAR_2);

 FUNC_6(&VAR_3->qs_lock);
}
