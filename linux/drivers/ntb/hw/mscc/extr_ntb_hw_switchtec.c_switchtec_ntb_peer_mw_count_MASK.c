
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchtec_ntb {int nr_lut_mw; int nr_rsvd_luts; int nr_direct_mw; } ;
struct ntb_dev {int dummy; } ;


 struct switchtec_ntb* FUNC_0 (struct ntb_dev*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct ntb_dev *VAR_1)
{
 struct switchtec_ntb *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = VAR_2->nr_lut_mw - VAR_2->nr_rsvd_luts;

 return VAR_2->nr_direct_mw + (VAR_0 ? VAR_3 : 0);
}
