
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct camif_scaler {int h_shift; int v_shift; int pre_h_ratio; int pre_v_ratio; int pre_dst_width; int pre_dst_height; } ;
struct camif_vp {int offset; int id; struct camif_scaler scaler; struct camif_dev* camif; } ;
struct camif_dev {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct camif_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct camif_vp *VAR_0)
{
 struct camif_dev *VAR_1 = VAR_0->camif;
 struct camif_scaler *VAR_2 = &VAR_0->scaler;
 u32 VAR_3, VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_0->id, VAR_0->offset);

 VAR_4 = 10 - (VAR_2->h_shift + VAR_2->v_shift);
 VAR_3 = VAR_4 << 28;

 VAR_3 |= (VAR_2->pre_h_ratio << 16) | VAR_2->pre_v_ratio;
 FUNC_2(VAR_1, VAR_5, VAR_3);

 VAR_3 = (VAR_2->pre_dst_width << 16) | VAR_2->pre_dst_height;
 FUNC_2(VAR_1, FUNC_0(VAR_0->id, VAR_0->offset), VAR_3);
}
