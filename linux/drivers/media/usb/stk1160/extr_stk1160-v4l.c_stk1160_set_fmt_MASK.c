
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stk1160_decimate_ctrl {scalar_t__ col_mode; scalar_t__ row_mode; int row_n; int col_n; scalar_t__ row_en; scalar_t__ col_en; } ;
struct stk1160 {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (struct stk1160*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct stk1160 *VAR_9,
       struct stk1160_decimate_ctrl *VAR_10)
{
 u32 VAR_11 = 0;

 if (VAR_10) {






  VAR_11 |= VAR_1;
  VAR_11 |= VAR_10->col_en ? VAR_5 : 0;
  VAR_11 |= VAR_10->row_en ? VAR_7 : 0;
  VAR_11 |= VAR_10->col_mode ==
   VAR_0 ?
   VAR_6 : 0;
  VAR_11 |= VAR_10->row_mode ==
   VAR_0 ?
   VAR_8 : 0;


  FUNC_1(VAR_9, VAR_3, VAR_10->col_n);

  FUNC_1(VAR_9, VAR_4, VAR_10->row_n);

  FUNC_0("decimate 0x%x, column units %d, row units %d\n",
       VAR_11, VAR_10->col_n, VAR_10->row_n);
 }


 FUNC_1(VAR_9, VAR_2, VAR_11);
}
