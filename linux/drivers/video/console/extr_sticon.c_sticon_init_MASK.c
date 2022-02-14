
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_can_do_color; int vc_cols; int vc_rows; } ;
struct sti_struct {int font_width; int font_height; } ;


 int FUNC_0 (struct sti_struct*) ;
 int FUNC_1 (struct sti_struct*) ;
 int FUNC_2 (struct sti_struct*,int ,int ,int,int,int ) ;
 struct sti_struct* VAR_0 ;
 int FUNC_3 (struct vc_data*,int,int) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_1, int VAR_2)
{
    struct sti_struct *VAR_3 = VAR_0;
    int VAR_4, VAR_5;

    FUNC_2(VAR_3, 0, 0, FUNC_1(VAR_3), FUNC_0(VAR_3), 0);
    VAR_4 = FUNC_0(VAR_3) / VAR_3->font_width;
    VAR_5 = FUNC_1(VAR_3) / VAR_3->font_height;
    VAR_1->vc_can_do_color = 1;

    if (VAR_2) {
 VAR_1->vc_cols = VAR_4;
 VAR_1->vc_rows = VAR_5;
    } else {


 FUNC_3(VAR_1, VAR_4, VAR_5);

    }
}
