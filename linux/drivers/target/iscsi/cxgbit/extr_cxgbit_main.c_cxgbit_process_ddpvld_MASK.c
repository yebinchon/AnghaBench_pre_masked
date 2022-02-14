
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cxgbit_sock {int tid; } ;
struct cxgbit_lro_pdu_cb {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct cxgbit_sock *VAR_8, struct cxgbit_lro_pdu_cb *VAR_9,
        u32 VAR_10)
{

 if (VAR_10 & (1 << VAR_2)) {
  FUNC_0("tid 0x%x, status 0x%x, hcrc bad.\n", VAR_8->tid, VAR_10);
  VAR_9->flags |= VAR_7;
 }

 if (VAR_10 & (1 << VAR_0)) {
  FUNC_0("tid 0x%x, status 0x%x, dcrc bad.\n", VAR_8->tid, VAR_10);
  VAR_9->flags |= VAR_6;
 }

 if (VAR_10 & (1 << VAR_3))
  FUNC_0("tid 0x%x, status 0x%x, pad bad.\n", VAR_8->tid, VAR_10);

 if ((VAR_10 & (1 << VAR_1)) &&
     (!(VAR_9->flags & VAR_4))) {
  VAR_9->flags |= VAR_5;
 }
}
