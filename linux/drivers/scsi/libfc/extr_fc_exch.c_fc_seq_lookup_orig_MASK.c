
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef void* u16 ;
struct fc_seq {scalar_t__ id; } ;
struct fc_frame_header {scalar_t__ fh_seq_id; int fh_rx_id; int fh_ox_id; int fh_f_ctl; } ;
struct fc_frame {int dummy; } ;
struct fc_exch_mgr {int dummy; } ;
struct fc_exch {scalar_t__ rxid; struct fc_seq seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 struct fc_exch* FUNC_1 (struct fc_exch_mgr*,void*) ;
 int FUNC_2 (struct fc_exch*) ;
 struct fc_frame_header* FUNC_3 (struct fc_frame*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static struct fc_seq *FUNC_6(struct fc_exch_mgr *VAR_3,
      struct fc_frame *VAR_4)
{
 struct fc_frame_header *VAR_5 = FUNC_3(VAR_4);
 struct fc_exch *VAR_6;
 struct fc_seq *VAR_7 = ((void*)0);
 u32 VAR_8;
 u16 VAR_9;

 VAR_8 = FUNC_4(VAR_5->fh_f_ctl);
 FUNC_0((VAR_8 & VAR_1) != VAR_1);
 VAR_9 = FUNC_5((VAR_8 & VAR_0) ? VAR_5->fh_ox_id : VAR_5->fh_rx_id);
 VAR_6 = FUNC_1(VAR_3, VAR_9);
 if (!VAR_6)
  return ((void*)0);
 if (VAR_6->seq.id == VAR_5->fh_seq_id) {



  VAR_7 = &VAR_6->seq;
  if ((VAR_8 & VAR_0) != 0 &&
      VAR_6->rxid == VAR_2) {
   VAR_6->rxid = FUNC_5(VAR_5->fh_rx_id);
  }
 }
 FUNC_2(VAR_6);
 return VAR_7;
}
