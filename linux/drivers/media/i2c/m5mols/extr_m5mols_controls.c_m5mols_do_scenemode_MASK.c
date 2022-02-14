
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct v4l2_subdev {int dummy; } ;
struct m5mols_scenemode {size_t metering; size_t ev_bias; size_t wb_mode; size_t wb_preset; size_t chroma_en; size_t chroma_lvl; size_t edge_en; size_t edge_lvl; size_t af_range; size_t fd_mode; size_t tone; size_t iso; size_t wdr; size_t mcc; size_t light; size_t flash; size_t capt_mode; } ;
struct m5mols_info {int lock_3a; struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 scalar_t__ FUNC_0 (struct m5mols_info*) ;
 struct m5mols_scenemode* VAR_23 ;
 int FUNC_1 (struct m5mols_info*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ,size_t) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct m5mols_info *VAR_24, u8 VAR_25)
{
 struct v4l2_subdev *VAR_26 = &VAR_24->sd;
 struct m5mols_scenemode VAR_27 = VAR_23[VAR_25];
 int VAR_28;

 if (VAR_25 > VAR_22)
  return -VAR_13;

 VAR_28 = FUNC_3(VAR_24->lock_3a, 0);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_1, VAR_25);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_0, VAR_25);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_4, VAR_27.metering);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_2, VAR_27.ev_bias);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_7, VAR_27.wb_mode);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_6, VAR_27.wb_preset);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_15, VAR_27.chroma_en);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_16, VAR_27.chroma_lvl);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_17, VAR_27.edge_en);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_18, VAR_27.edge_lvl);
 if (!VAR_28 && FUNC_0(VAR_24))
  VAR_28 = FUNC_2(VAR_26, VAR_5, VAR_27.af_range);
 if (!VAR_28 && FUNC_0(VAR_24))
  VAR_28 = FUNC_2(VAR_26, VAR_14, VAR_27.fd_mode);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_19, VAR_27.tone);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_3, VAR_27.iso);
 if (!VAR_28)
  VAR_28 = FUNC_1(VAR_24, VAR_20);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_12, VAR_27.wdr);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_11, VAR_27.mcc);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_10, VAR_27.light);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_9, VAR_27.flash);
 if (!VAR_28)
  VAR_28 = FUNC_2(VAR_26, VAR_8, VAR_27.capt_mode);
 if (!VAR_28)
  VAR_28 = FUNC_1(VAR_24, VAR_21);

 return VAR_28;
}
