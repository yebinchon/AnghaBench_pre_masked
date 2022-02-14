
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_video_erase_char; int vc_cols; } ;
struct sti_struct {int dummy; } ;
typedef enum con_scroll { ____Placeholder_con_scroll } con_scroll ;


 int VAR_0 ;


 int FUNC_0 (struct sti_struct*,unsigned int,int ,unsigned int,int ,unsigned int,int ) ;
 int FUNC_1 (struct sti_struct*,unsigned int,int ,unsigned int,int ,int ) ;
 int FUNC_2 (struct vc_data*,int ) ;
 struct sti_struct* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_3(struct vc_data *VAR_3, unsigned int VAR_4,
  unsigned int VAR_5, enum con_scroll VAR_6, unsigned int VAR_7)
{
    struct sti_struct *VAR_8 = VAR_1;

    if (VAR_2)
        return 0;

    FUNC_2(VAR_3, VAR_0);

    switch (VAR_6) {
    case 128:
 FUNC_0(VAR_8, VAR_4 + VAR_7, 0, VAR_4, 0, VAR_5 - VAR_4 - VAR_7, VAR_3->vc_cols);
 FUNC_1(VAR_8, VAR_5 - VAR_7, 0, VAR_7, VAR_3->vc_cols, VAR_3->vc_video_erase_char);
 break;

    case 129:
 FUNC_0(VAR_8, VAR_4, 0, VAR_4 + VAR_7, 0, VAR_5 - VAR_4 - VAR_7, VAR_3->vc_cols);
 FUNC_1(VAR_8, VAR_4, 0, VAR_7, VAR_3->vc_cols, VAR_3->vc_video_erase_char);
 break;
    }

    return 0;
}
