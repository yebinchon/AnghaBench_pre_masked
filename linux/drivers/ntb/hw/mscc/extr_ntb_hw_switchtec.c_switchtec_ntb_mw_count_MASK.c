
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchtec_ntb {int peer_nr_direct_mw; int peer_nr_lut_mw; int nr_rsvd_luts; } ;
struct ntb_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct switchtec_ntb* FUNC_0 (struct ntb_dev*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct ntb_dev *VAR_3, int VAR_4)
{
 struct switchtec_ntb *VAR_5 = FUNC_0(VAR_3);
 int VAR_6 = VAR_5->peer_nr_direct_mw;
 int VAR_7 = VAR_5->peer_nr_lut_mw - VAR_5->nr_rsvd_luts;

 if (VAR_4 != VAR_1)
  return -VAR_0;

 if (!VAR_2)
  VAR_7 = 0;

 return VAR_6 + VAR_7;
}
