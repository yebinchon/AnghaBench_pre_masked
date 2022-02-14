
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {int dummy; } ;
struct uwb_ie_drp_avail {int bmp; } ;
struct uwb_dev {int last_availability_bm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct uwb_rc *VAR_1, struct uwb_dev *VAR_2,
      struct uwb_ie_drp_avail *VAR_3)
{
 FUNC_0(VAR_2->last_availability_bm,
      VAR_3->bmp, VAR_0);
}
