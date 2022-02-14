
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct camif_frame {int f_width; int f_height; } ;
struct camif_vp {int offset; int id; int camif; struct camif_frame out_frame; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct camif_vp *VAR_1)
{
 struct camif_frame *VAR_2 = &VAR_1->out_frame;
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_1->camif, FUNC_0(VAR_1->id, VAR_1->offset));
 VAR_3 &= ~VAR_0;
 VAR_3 |= (VAR_2->f_width << 16) | VAR_2->f_height;
 FUNC_2(VAR_1->camif, FUNC_0(VAR_1->id, VAR_1->offset), VAR_3);
}
