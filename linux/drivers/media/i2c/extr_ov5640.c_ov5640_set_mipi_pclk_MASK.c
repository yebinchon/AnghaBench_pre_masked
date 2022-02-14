
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ov5640_mode_info {scalar_t__ dn_mode; scalar_t__ id; } ;
struct ov5640_dev {struct ov5640_mode_info* current_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct ov5640_dev*,unsigned long,int*,int*,int*) ;
 int FUNC_1 (struct ov5640_dev*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct ov5640_dev *VAR_12,
    unsigned long VAR_13)
{
 const struct ov5640_mode_info *VAR_14 = VAR_12->current_mode;
 u8 VAR_15, VAR_16, VAR_17;
 u8 VAR_18;
 int VAR_19;






 if (VAR_14->dn_mode == VAR_11 ||
    (VAR_14->id == VAR_2))
  VAR_18 = VAR_1;
 else
  VAR_18 = VAR_0;

 FUNC_0(VAR_12, VAR_13, &VAR_15, &VAR_16, &VAR_17);

 VAR_19 = FUNC_1(VAR_12, VAR_6,
        0x0f, VAR_3);

 VAR_19 = FUNC_1(VAR_12, VAR_7,
        0xff, VAR_17 << 4 | VAR_18);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_1(VAR_12, VAR_8, 0xff, VAR_16);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_1(VAR_12, VAR_9,
        0x1f, VAR_4 | VAR_15);
 if (VAR_19)
  return VAR_19;

 return FUNC_1(VAR_12, VAR_10,
         0x30, VAR_5);
}
