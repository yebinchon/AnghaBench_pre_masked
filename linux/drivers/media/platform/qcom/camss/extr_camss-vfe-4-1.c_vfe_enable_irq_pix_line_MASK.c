
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vfe_output {unsigned int wm_num; int* wm_idx; } ;
struct vfe_device {TYPE_1__* line; } ;
typedef enum vfe_line_id { ____Placeholder_vfe_line_id } vfe_line_id ;
struct TYPE_2__ {struct vfe_output output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct vfe_device*,int ,int) ;
 int FUNC_4 (struct vfe_device*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct vfe_device *VAR_6, u8 VAR_7,
        enum vfe_line_id VAR_8, u8 VAR_9)
{
 struct vfe_output *VAR_10 = &VAR_6->line[VAR_8].output;
 unsigned int VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14 = 0;

 VAR_12 = VAR_3;
 VAR_12 |= VAR_2;
 VAR_12 |= FUNC_0(VAR_7);
 VAR_12 |= FUNC_1(VAR_8);
 VAR_13 = VAR_5;
 for (VAR_11 = 0; VAR_11 < VAR_10->wm_num; VAR_11++) {
  VAR_13 |= FUNC_2(
       VAR_10->wm_idx[VAR_11]);
  VAR_14 |= (1 << VAR_10->wm_idx[VAR_11]) << VAR_7 * 8;
 }

 if (VAR_9) {
  FUNC_4(VAR_6, VAR_1, VAR_12);
  FUNC_4(VAR_6, VAR_4, VAR_13);
  FUNC_4(VAR_6, VAR_0, VAR_14);
 } else {
  FUNC_3(VAR_6, VAR_1, VAR_12);
  FUNC_3(VAR_6, VAR_4, VAR_13);
  FUNC_3(VAR_6, VAR_0, VAR_14);
 }
}
