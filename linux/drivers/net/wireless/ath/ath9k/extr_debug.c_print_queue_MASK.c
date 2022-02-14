
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct ath_txq {int pending_frames; int axq_ampdu_depth; int axq_depth; int axq_qnum; } ;
struct ath_softc {int dummy; } ;


 int FUNC_0 (struct ath_softc*,struct ath_txq*) ;
 int FUNC_1 (struct ath_softc*,struct ath_txq*) ;
 int FUNC_2 (struct seq_file*,char*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct ath_softc *VAR_0, struct ath_txq *VAR_1,
   struct seq_file *VAR_2)
{
 FUNC_0(VAR_0, VAR_1);

 FUNC_2(VAR_2, "%s: %d ", "qnum", VAR_1->axq_qnum);
 FUNC_2(VAR_2, "%s: %2d ", "qdepth", VAR_1->axq_depth);
 FUNC_2(VAR_2, "%s: %2d ", "ampdu-depth", VAR_1->axq_ampdu_depth);
 FUNC_2(VAR_2, "%s: %3d\n", "pending", VAR_1->pending_frames);

 FUNC_1(VAR_0, VAR_1);
}
